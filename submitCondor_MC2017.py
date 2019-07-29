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
nFilePerJob         = 300

baseDir_Run2017     = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/"

sampleNames         = [
    'DYJetsToLL_M-50_HT-1200to2500_TuneCP5_13TeV-madgraphMLM-pythia8',
    'DYJetsToLL_M-50_HT-200to400_TuneCP5_13TeV-madgraphMLM-pythia8',
    'DYJetsToLL_M-50_HT-2500toInf_TuneCP5_13TeV-madgraphMLM-pythia8',
    'DYJetsToLL_M-50_HT-400to600_TuneCP5_13TeV-madgraphMLM-pythia8',
    'DYJetsToLL_M-50_HT-600to800_TuneCP5_13TeV-madgraphMLM-pythia8',
    'DYJetsToLL_M-50_HT-800to1200_TuneCP5_13TeV-madgraphMLM-pythia8',
    'QCD_HT1000to1500_TuneCP5_13TeV-madgraph-pythia8',
    'QCD_HT1500to2000_TuneCP5_13TeV-madgraph-pythia8',
    'QCD_HT2000toInf_TuneCP5_13TeV-madgraph-pythia8',
    'QCD_HT200to300_TuneCP5_13TeV-madgraph-pythia8',
    'QCD_HT300to500_TuneCP5_13TeV-madgraph-pythia8',
    'QCD_HT500to700_TuneCP5_13TeV-madgraph-pythia8',
    'QCD_HT700to1000_TuneCP5_13TeV-madgraph-pythia8',
    'ST_s-channel_antitop_leptonDecays_13TeV-PSweights_powheg-pythia',
    'ST_s-channel_top_leptonDecays_13TeV-PSweights_powheg-pythia',
    'ST_t-channel_antitop_4f_InclusiveDecays_TuneCP5_PSweights_13TeV-powheg-pythia8',
    'ST_t-channel_top_4f_InclusiveDecays_TuneCP5_PSweights_13TeV-powheg-pythia8',
    'ST_tW_antitop_5f_inclusiveDecays_TuneCP5_PSweights_13TeV-powheg-pythia8',
    'ST_tW_top_5f_inclusiveDecays_TuneCP5_PSweights_13TeV-powheg-pythia8',
    'WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8',
    'WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8',
    'WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8',
    'WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8',
    'WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8',
    'WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8',
    'WW_TuneCP5_13TeV-pythia8',
    'WZ_TuneCP5_13TeV-pythia8',
    'ZZ_TuneCP5_13TeV-pythia8',
    'ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8',
    'ttHTobb_M125_TuneCP5_13TeV-powheg-pythia8',
    'TTWH_TuneCP5_13TeV-madgraph-pythia8',
    'TTWJetsToLNu_TuneCP5_PSweights_13TeV-amcatnloFXFX-madspin-pythia8',
    'TTWJetsToQQ_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8',
    'TTZToLLNuNu_M-10_TuneCP5_PSweights_13TeV-amcatnlo-pythia8',
    ]

samples             = [
                            Sample(
                                sampleName,
                                fileBlocks=[
                                                FileBlock(sampleName,os.path.join(baseDir_Run2017,sampleName,"singleLep2017/*/000*"),),
                                ],
                                ) for sampleName in sampleNames
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

treeNameString = 'ljmet/ljmet' if 'nominal' in shift else 'ljmet_%s/ljmet_%s' %(shift,shift)
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
                    "INPUTSAMPLEDIR":os.path.dirname(inputFile.path).replace("/eos/uscms","")+"/",
                    "DIVIDER": fileBlock.divider,
                    "TREENAME": treeNameString,
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
Arguments = %(FILENAME)s %(FILENAME)s %(INPUTSAMPLEDIR)s %(OUTPUTDIR)s/%(RELPATH)s %(MIN)i %(MAX)i %(DIVIDER)s %(TREENAME)s
Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s'%(condorDir,sample.name))
            os.system('condor_submit %(FILENAME)s%(DIVIDER)s%(ID)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"

print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"
print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))
