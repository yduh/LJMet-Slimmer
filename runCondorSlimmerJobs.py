import os,shutil, sys, datetime,time
import glob
from ROOT import *

submitSignal = True
submitTTbar = False
submitOtherBck = False
submitData = False

shift = sys.argv[1]
year = sys.argv[2]

execfile("/uscms_data/d3/jmanagan/EOSSafeUtils.py")

start_time = time.time()

##################################################################
relbase = os.environ['relbase'] #'/uscms_data/d1/yiting11/CMSSW_9_4_6_patch1/'
inputDir = '%s/' %(os.environ['ntupleWhere']) #'/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/
outputDir = '%s/%s/' %(os.environ['slimrootWhere'],shift) #'/eos/uscms/store/user/lpcljm/yiting/2017/FWLJMET/'+shift+'/'
condorDir = '%s/%s/' %(os.environ['logbase'],shift) #relbase+'/src/LJMet-Slimmer/log/2017/FWLJMET/'+shift+'/'

inDir=inputDir
outDir=outputDir

runDir=os.getcwd()
runDirPost = ''
print 'Files from',runDirPost

###################################################################
with open('samples/signalList%s.txt' %year) as f:
    lines = f.readlines()
signalList = [line.rstrip() for line in lines if ('#' not in line and line != '\n')] #if there is no # in the line & not a empty line, we read it

with open('samples/ttbarList%s.txt' %year) as f:
    lines = f.readlines()
ttbarList = [line.strip() for line in lines if ('#' not in line and line != '\n')]

with open('samples/otherBckList%s.txt' %year) as f:
    lines = f.readlines()
bckList = [line.rstrip() for line in lines if ('#' not in line and line != '\n')]
dirList = bckList

if shift == 'nominal':
    with open('samples/dataList%s.txt' %year) as f:
        lines = f.readlines()
    dataList = [line.rstrip() for line in lines if ('#' not in line and line != '\n')]
    #dirList = bckList + dataList

print 'signalList = ', signalList
print 'ttbarList = ', ttbarList
print 'dirList = ', dirList

#For those we need to further separate into several different samples
signalOutList = ['BWBW','TZBW','THBW','TZTH','TZTZ','THTH']
ttbarOutList = ['Mtt0to700','Mtt700to1000','Mtt1000toInf']

#os._exit(1)
##################################################################
gROOT.ProcessLine('.x compileStep1.C')

cTime=datetime.datetime.now()
date='%i_%i_%i_%i_%i_%i'%(cTime.year,cTime.month,cTime.day,cTime.hour,cTime.minute,cTime.second)

print 'Getting proxy'
proxyPath=os.popen('voms-proxy-info -path')
proxyPath=proxyPath.readline().strip()

print 'Starting submission'
count=0

nFilePerJob = 100
##################################################################
if submitOtherBck:
    for sampleLine in dirList:
        if len(sampleLine.split()) == 2:
            sampleName, sample = sampleLine.split()
        elif len(sampleLine.split()) == 1:
            sampleName = sampleLine
            sample = sampleLine

        os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample.split('/')[0])
        os.system('mkdir -p '+condorDir+sample.split('/')[0])

        rootfiles = glob.glob(inputDir + sample +"/*")
        #print rootfiles
        #print sampleName, sample

        tmpcount = 0
        for i in range(0,len(rootfiles),nFilePerJob):
            count += 1
            tmpcount += 1

            minid = i+1
            maxid = i+nFilePerJob
            if maxid > len(rootfiles): maxid = len(rootfiles)
            print minid, maxid

            #dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':sample.split('/')[0], 'CONDORDIR':condorDir, 'INPUTDIR':inDir, 'FILENAME':sampleName, 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'OUTPUTDIR':outDir, 'MIN':minid, 'MAX':maxid, 'ID':tmpcount, 'SAMPLE':sample}
            dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':sample.split('/')[0], 'CONDORDIR':condorDir, 'INPUTDIR':inDir.replace('/eos/uscms',''), 'OUTPUTDIR':outDir.replace('/eos/uscms',''), 'FILENAME':sample.split('/')[0], 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'MIN':minid, 'MAX':maxid, 'ID':tmpcount, 'SAMPLE':sample,'SAMPLENAME':sampleName.split('/')[0]}
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
Output = %(SAMPLENAME)s_%(ID)s.out
Error = %(SAMPLENAME)s_%(ID)s.err
Log = %(SAMPLENAME)s_%(ID)s.log

Notification = Never
Arguments = %(FILENAME)s %(FILENAME)s %(INPUTDIR)s/%(SAMPLE)s %(OUTPUTDIR)s/%(RELPATH)s %(MIN)i %(MAX)i

Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s'%(condorDir,sample.split("/")[0]))
            os.system('condor_submit %(FILENAME)s_%(ID)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"
            print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"

if submitSignal:
    for sampleLine in signalList:
        if len(sampleLine.split()) == 2:
            sampleName, sample = sampleLine.split()
        elif len(sampleLine.split()) == 1:
            sampleName = sampleLine
            sample = sampleLine

        rootfiles = glob.glob(inputDir + sample + "/*.root")

        for outlabel in signalOutList:
            os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outDir+sample.split('/')[0]+'_'+outlabel)
            os.system('mkdir -p '+condorDir+sample.split('/')[0]+'_'+outlabel)
            #print rootfiles
            print sampleName, sample

            tmpcount = 0
            for i in range(0,len(rootfiles),nFilePerJob):
                count+=1
                tmpcount += 1

                minid = i+1
                maxid = i+nFilePerJob
                if maxid > len(rootfiles): maxid = len(rootfiles)
                print minid, maxid

                dict={'RUNDIR':runDir, 'POST':runDirPost, 'RELPATH':sample.split('/')[0], 'CONDORDIR':condorDir, 'INPUTDIR':inDir.replace('/eos/uscms',''), 'OUTPUTDIR':outDir.replace('/eos/uscms',''), 'FILENAME':sample.split('/')[0], 'PROXY':proxyPath, 'CMSSWBASE':relbase, 'MIN':minid, 'MAX':maxid, 'ID':tmpcount, 'SAMPLE':sample,'SAMPLENAME':sampleName.split('/')[0], 'LABEL':outlabel, 'DIVIDERS':'_'}
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
Output = %(SAMPLENAME)s_%(LABEL)s_%(ID)s.out
Error = %(SAMPLENAME)s_%(LABEL)s_%(ID)s.err
Log = %(SAMPLENAME)s_%(LABEL)s_%(ID)s.log

Notification = Never
Arguments = %(FILENAME)s %(FILENAME)s_%(LABEL)s %(INPUTDIR)s/%(SAMPLE)s %(OUTPUTDIR)s/%(RELPATH)s_%(LABEL)s %(MIN)i %(MAX)i %(DIVIDERS)s
Queue 1"""%dict)
                jdf.close()

                os.chdir('%s/%s_%s'%(condorDir,sample.split('/')[0],outlabel))
                os.system('condor_submit %(FILENAME)s_%(LABEL)s_%(ID)s.job'%dict)
                os.system('sleep 0.5')
                os.chdir('%s'%(runDir))
                print count, "jobs submitted!!!"
                print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"

print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))
