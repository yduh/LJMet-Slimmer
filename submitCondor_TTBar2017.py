import os,shutil, sys, datetime,time
import glob
from ROOT import *

from Sample import *

shift = sys.argv[1]

execfile("/uscms_data/d3/jmanagan/EOSSafeUtils.py")

start_time = time.time()

##################################################################
relbase             = '/uscms_data/d1/yiting11/CMSSW_9_4_6_patch1/'
outputDir           = '%s/%s/' %(os.environ['slimrootWhere'],shift) #'/eos/uscms/store/user/lpcljm/yiting/2017/FWLJMET/'+shift+'/'
condorDir           = '%s/%s/' %(os.environ['logbase'],shift) #relbase+'/src/LJMet-Slimmer/log/2017/FWLJMET/'+shift+'/'
nFilePerJob         = 350

baseDir_Run2017     = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/"
baseDir_tt2LepDir   = os.path.join(baseDir_Run2017,"TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/singleLep2017/190529_173524/")
baseDir_tt1LepDir   = os.path.join(baseDir_Run2017,"TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8/singleLep2017/190528_213809/")
baseDir_tt0LepDir   = os.path.join(baseDir_Run2017,"TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8/singleLep2017/190604_180559")
baseDir_ttMtt700to1000Dir = os.path.join(baseDir_Run2017,"TT_Mtt-700to1000_TuneCP5_PSweights_13TeV-powheg-pythia8/singleLep2017/190528_215307/")
baseDir_ttMtt1000toInfDir = os.path.join(baseDir_Run2017,"TT_Mtt-1000toInf_TuneCP5_PSweights_13TeV-powheg-pythia8/singleLep2017/190528_213732/")

samples             = [
                            Sample(
                                "TT_Mtt-700to1000_TuneCP5_PSweights_13TeV-powheg-pythia8",
                                fileBlocks=[
                                                FileBlock("TT_Mtt-700to1000_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_ttMtt700to1000Dir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TT_Mtt-1000toInf_TuneCP5_PSweights_13TeV-powheg-pythia8",
                                fileBlocks=[
                                                FileBlock("TT_Mtt-1000toInf_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_ttMtt1000toInfDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt0to700",
                                fileBlocks=[
                                                FileBlock("TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt2LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt700to1000",
                                fileBlocks=[
                                                FileBlock("TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt2LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt1000toInf",
                                fileBlocks=[
                                                FileBlock("TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt2LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt0to700",
                                fileBlocks=[
                                                FileBlock("TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt1LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt700to1000",
                                fileBlocks=[
                                                FileBlock("TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt1LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt1000toInf",
                                fileBlocks=[
                                                FileBlock("TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt1LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt0to700",
                                fileBlocks=[
                                                FileBlock("TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt0LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt700to1000",
                                fileBlocks=[
                                                FileBlock("TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt0LepDir,"000*"),),
                                ],
                                ),
                            Sample(
                                "TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8_Mtt1000toInf",
                                fileBlocks=[
                                                FileBlock("TTToHadronic_TuneCP5_PSweights_13TeV-powheg-pythia8",os.path.join(baseDir_tt0LepDir,"000*"),),
                                ],
                                ),
                            ][:]

runDir=os.getcwd()
runDirPost = ''
print 'Files from',runDirPost

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

##################################################################
for sample in samples:
    print "#"*20
    print "Preparing "+sample.name
    print "#"*20
    for fileBlock in sample.fileBlocks:
        print "Preparing "+fileBlock.name
        os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outputDir+sample.name)
        os.system('mkdir -p '+condorDir+sample.name)

        rootfiles = fileBlock.makeFileList()

        tmpcount = 0
        for i in range(0,len(rootfiles),nFilePerJob):
            inputFile = rootfiles[i]
            count += 1
            tmpcount += 1

            minid = i+1
            maxid = i+nFilePerJob
            if maxid > len(rootfiles): maxid = len(rootfiles)

            dict={
                    'RUNDIR':runDir,
                    'POST':runDirPost,
                    'RELPATH':sample.name,
                    'CONDORDIR':condorDir,
                    'FILENAME':fileBlock.name,
                    'PROXY':proxyPath,
                    'CMSSWBASE':relbase,
                    'OUTPUTDIR':outputDir.replace("/eos/uscms",""),
                    'MIN':minid, 'MAX':maxid, 'ID':tmpcount,
                    #"INPUTSAMPLEDIR":fileBlock.dir.replace("/eos/uscms",""),
                    "INPUTSAMPLEDIR":os.path.dirname(inputFile.path)+"/",
                    "DIVIDER": fileBlock.divider,
                    }
            jdfName=condorDir+'/%(RELPATH)s/%(FILENAME)s%(DIVIDER)s%(ID)s.job'%dict
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
Arguments = %(FILENAME)s %(FILENAME)s %(INPUTSAMPLEDIR)s %(OUTPUTDIR)s/%(RELPATH)s %(MIN)i %(MAX)i %(DIVIDER)s
Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s'%(condorDir,sample.name))
            os.system('condor_submit %(FILENAME)s%(DIVIDER)s%(ID)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"

print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"
print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))
