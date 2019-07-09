import os,shutil,datetime,time
import getpass
from ROOT import *

execfile("/uscms_data/d3/jmanagan/EOSSafeUtils.py")

start_time = time.time()

shift = sys.argv[1]

##################################################################
relbase = '/uscms_data/d1/yiting11/CMSSW_9_4_6_patch1/'
inputDir = '%s/%s/' %(os.environ['ntupleWhere'],shift) #'/eos/uscms/store/user/lpcljm/2018/LJMet94X_1lep_013019/'+shift+'/'
outputDir = '%s/%s/' %(os.environ['slimrootWhere'],shift) #'/eos/uscms/store/user/lpcljm/yiting/2017/Feb/'+shift+'/'
condorDir = '%s/%s/' %(os.environ['logbase'],shift) #relbase+'/src/LJMet-Slimmer/log/2017/Feb/'+shift+'/'

inDir=inputDir
outDir=outputDir

runDir=os.getcwd()
runDirPost = ''
print 'Files from',runDirPost

###################################################################
with open('samples/signalList.txt') as f:
    lines = f.readlines()
signalList = [line.rstrip() for line in lines if ('#' not in line and line != '\n')]

with open('samples/ttbarList.txt') as f:
    lines = f.readlines()
ttbarList = [line.strip() for line in lines if ('#' not in line and line != '\n')]

with open('samples/otherBckList.txt') as f:
    lines = f.readlines()
bckList = [line.rstrip() for line in lines if ('#' not in line and line != '\n')]
dirList = bckList

if shift == 'nominal':
    with open('samples/dataList.txt') as f:
        lines = f.readlines()
    dataList = [line.rstrip() for line in lines if ('#' not in line and line != '\n')]
    dirList = bckList + dataList

print 'signalList = ', signalList
print 'ttbarList = ', ttbarList
print 'dirList = ', dirList

signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
ttbarOutList = ['Mtt0to700','Mtt700to1000','Mtt1000toInf']

os._exit(1)
##################################################################

gROOT.ProcessLine('.x compileStep1.C')

cTime=datetime.datetime.now()
date='%i_%i_%i_%i_%i_%i'%(cTime.year,cTime.month,cTime.day,cTime.hour,cTime.minute,cTime.second)

print 'Getting proxy'
proxyPath=os.popen('voms-proxy-info -path')
proxyPath=proxyPath.readline().strip()

print 'Starting submission'
count=0


for sample in signalList:
    rootfiles = EOSlist_root_files(inputDir+sample)
    relPath = sample
    for outlabel in signalOutList:
        os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+'_'+outlabel)
        os.system('mkdir -p '+condorDir+sample+'_'+outlabel)

        tmpcount = 0
        for i in range(0,len(rootfiles),20):
            #        print file
            rawname = relPath
            count+=1
            tmpcount += 1

            minid = i+1
            maxid = i+20
            if maxid > len(rootfiles): maxid = len(rootfiles)
            print minid, maxid

            dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'LABEL':outlabel, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir, 'MIN':minid, 'MAX':maxid, 'ID':tmpcount}
            jdfName=condorDir+'/%(RELPATH)s_%(LABEL)s/%(FILENAME)s_%(LABEL)s_%(ID)s.job'%dict
            print jdfName
            jdf=open(jdfName,'w')
            jdf.write(
                """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so
Output = %(FILENAME)s_%(LABEL)s_%(ID)s.out
Error = %(FILENAME)s_%(LABEL)s_%(ID)s.err
Log = %(FILENAME)s_%(LABEL)s_%(ID)s.log
Notification = Never
Arguments = %(FILENAME)s %(FILENAME)s_%(LABEL)s %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(RELPATH)s_%(LABEL)s %(MIN)i %(MAX)i

Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s_%s'%(condorDir,relPath,outlabel))
            os.system('condor_submit %(FILENAME)s_%(LABEL)s_%(ID)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"
            print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"


for sample in dirList:
    os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample)
    os.system('mkdir -p '+condorDir+sample)
    relPath = sample

    rootfiles = EOSlist_root_files(inputDir+sample)
    tmpcount = 0
    for i in range(0,len(rootfiles),20):
        rawname = relPath
        count += 1
        tmpcount += 1

        minid = i+1
        maxid = i+20
        if maxid > len(rootfiles): maxid = len(rootfiles)
        print minid, maxid

        dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir, 'MIN':minid, 'MAX':maxid, 'ID':tmpcount}
        jdfName=condorDir+'/%(RELPATH)s/%(FILENAME)s_%(ID)s.job'%dict
        print jdfName
        jdf=open(jdfName,'w')
        jdf.write(
            """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so
Output = %(FILENAME)s_%(ID)s.out
Error = %(FILENAME)s_%(ID)s.err
Log = %(FILENAME)s_%(ID)s.log
Notification = Never
Arguments = %(FILENAME)s %(FILENAME)s %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(RELPATH)s %(MIN)i %(MAX)i

Queue 1"""%dict)
        jdf.close()
        os.chdir('%s/%s'%(condorDir,relPath))
        os.system('condor_submit %(FILENAME)s_%(ID)s.job'%dict)
        os.system('sleep 0.5')
        os.chdir('%s'%(runDir))
        print count, "jobs submitted!!!"
        print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"



for sample in ttbarList:
    rootfiles = EOSlist_root_files(inputDir+sample)
    relPath = sample
    for outlabel in ttbarOutList:
        os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample+'_'+outlabel)
        os.system('mkdir -p '+condorDir+sample+'_'+outlabel)

        tmpcount = 0
        for i in range(0,len(rootfiles),20):
            rawname = relPath
            count+=1
            tmpcount += 1

            minid = i+1
            maxid = i+20
            if maxid > len(rootfiles): maxid = len(rootfiles)
            print minid, maxid

            dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':relPath, 'LABEL':outlabel, 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':rawname, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir, 'MIN':minid, 'MAX':maxid, 'ID':tmpcount}
            jdfName=condorDir+'/%(RELPATH)s_%(LABEL)s/%(FILENAME)s_%(LABEL)s_%(ID)s.job'%dict
            print jdfName
            jdf=open(jdfName,'w')
            jdf.write(
                """x509userproxy = %(PROXY)s
universe = vanilla
Executable = %(RUNDIR)s/makeStep1.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT
Transfer_Input_Files = %(RUNDIR)s/makeStep1.C, %(RUNDIR)s/%(POST)s/step1.cc, %(RUNDIR)s/%(POST)s/step1.h, %(RUNDIR)s/%(POST)s/step1_cc.d, %(RUNDIR)s/%(POST)s/step1_cc.so
Output = %(FILENAME)s_%(LABEL)s_%(ID)s.out
Error = %(FILENAME)s_%(LABEL)s_%(ID)s.err
Log = %(FILENAME)s_%(LABEL)s_%(ID)s.log
Notification = Never
Arguments = %(FILENAME)s %(FILENAME)s_%(LABEL)s %(INPUTDIR)s/%(RELPATH)s %(OUTPUTDIR)s/%(RELPATH)s_%(LABEL)s %(MIN)i %(MAX)i

Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s_%s'%(condorDir,relPath,outlabel))
            os.system('condor_submit %(FILENAME)s_%(LABEL)s_%(ID)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"

print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))


