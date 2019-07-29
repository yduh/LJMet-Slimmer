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
nFilePerJob         = 20

dir_path_Run2017B   = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleMuon/singleLep2017/190610_171444/0000/"
dir_path_Run2017F   = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleMuon/singleLep2017/190610_171259/0000/"
dir_path_Run2017E   = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleMuon/singleLep2017/190610_171113/0000/"
dir_path_Run2017D   = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleMuon/singleLep2017/190610_170927/0000/"
dir_path_Run2017C   = "/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleMuon/singleLep2017/190610_171631/0000/"

samples             = [
                            Sample(
                                "SingleMuon_Run2017B",
                                fileBlocks=[
                                                FileBlock("SingleMuonRun2017B",dir_path_Run2017B,[f for f in os.listdir(dir_path_Run2017B) if f.endswith(".root") and "-" not in f]),
                                                FileBlock("SingleMuonRun2017B_1",dir_path_Run2017B,[f for f in os.listdir(dir_path_Run2017B) if f.endswith(".root") and "_1-" in f],divider="-"),
                                ],
                                ),

                            Sample(
                                "SingleMuon_Run2017C",
                                fileBlocks=[
                                                FileBlock("SingleMuonRun2017C",dir_path_Run2017C,[f for f in os.listdir(dir_path_Run2017C) if f.endswith(".root") and "-" not in f]),
                                                FileBlock("SingleMuonRun2017C_1",dir_path_Run2017C,[f for f in os.listdir(dir_path_Run2017C) if f.endswith(".root") and "_1-" in f],divider="-"),
                                ],
                                ),

                            Sample(
                                "SingleMuon_Run2017F",
                                fileBlocks=[
                                                FileBlock("SingleMuonRun2017F",dir_path_Run2017F,[f for f in os.listdir(dir_path_Run2017F) if f.endswith(".root") and "-" not in f]),
                                                FileBlock("SingleMuonRun2017F_1",dir_path_Run2017F,[f for f in os.listdir(dir_path_Run2017F) if f.endswith(".root") and "_1-" in f],divider="-"),
                                                FileBlock("SingleMuonRun2017F_2",dir_path_Run2017F,[f for f in os.listdir(dir_path_Run2017F) if f.endswith(".root") and "_2-" in f],divider="-"),
                                                FileBlock("SingleMuonRun2017F_3",dir_path_Run2017F,[f for f in os.listdir(dir_path_Run2017F) if f.endswith(".root") and "_3-" in f],divider="-"),
                                ],
                                ),

                            Sample(
                                "SingleMuon_Run2017E",
                                fileBlocks=[
                                                FileBlock("SingleMuonRun2017E",dir_path_Run2017E,[f for f in os.listdir(dir_path_Run2017E) if f.endswith(".root") and "-" not in f]),
                                                FileBlock("SingleMuonRun2017E_1",dir_path_Run2017E,[f for f in os.listdir(dir_path_Run2017E) if f.endswith(".root") and "_1-" in f],divider="-"),
                                ],
                                ),

                            Sample(
                                "SingleMuon_Run2017D",
                                fileBlocks=[
                                                FileBlock("SingleMuonRun2017D",dir_path_Run2017D,[f for f in os.listdir(dir_path_Run2017D) if f.endswith(".root") and "-" not in f]),
                                                FileBlock("SingleMuonRun2017D_1",dir_path_Run2017D,[f for f in os.listdir(dir_path_Run2017D) if f.endswith(".root") and "_1-" in f],divider="-"),
                                ],
                                ),
                        ]

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
                    "INPUTSAMPLEDIR":fileBlock.dir.replace("/eos/uscms",""),
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
