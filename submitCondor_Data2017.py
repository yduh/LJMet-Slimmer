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
samples             = [
                            Sample(
                                "SingleElectron_Run2017C",
                                fileBlocks=[
                                                FileBlock("SingleElectronRun2017C","/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleElectron/singleLep2017/190610_165959/0000/",["SingleElectronRun2017C_"+str(i)+".root" for i in range (1,79) ]),
                                                FileBlock("SingleElectronRun2017C-1","/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219/SingleElectron/singleLep2017/190610_165959/0000/",["SingleElectronRun2017C-1_"+str(i)+".root" for i in range (1,53) ]),
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
    for fileBlock in sample.fileBlocks:
        os.system('eos root://cmseos.fnal.gov/ mkdir -p '+outputDir+sample.name)
        os.system('mkdir -p '+condorDir+sample.name)

        rootfiles = fileBlock.makeFileList()

        tmpcount = 0
        for i in range(0,len(rootfiles),nFilePerJob):
            count += 1
            tmpcount += 1

            minid = i+1
            maxid = i+20
            if maxid > len(rootfiles): maxid = len(rootfiles)

            dict={
                    'RUNDIR':runDir,
                    'POST':runDirPost,
                    'RELPATH':sample.name,
                    'CONDORDIR':condorDir,
                    'FILENAME':fileBlock.name,
                    'PROXY':proxyPath,
                    'CMSSWBASE':relbase,
                    'OUTPUTDIR':outputDir,
                    'MIN':minid, 'MAX':maxid, 'ID':tmpcount,
                    "INPUTSAMPLEDIR":fileBlock.dir,
                    }
            jdfName=condorDir+'/%(RELPATH)s/%(FILENAME)s_%(ID)s.job'%dict
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
Arguments = %(FILENAME)s %(FILENAME)s %(INPUTSAMPLEDIR)s %(OUTPUTDIR)s/%(RELPATH)s %(MIN)i %(MAX)i
Queue 1"""%dict)
            jdf.close()
            os.chdir('%s/%s'%(condorDir,sample.name))
            #os.system('condor_submit %(FILENAME)s_%(ID)s.job'%dict)
            os.system('sleep 0.5')
            os.chdir('%s'%(runDir))
            print count, "jobs submitted!!!"
            print "You can kill jobs by: condor_rm -all -name lpcscheddX.fnal.gov, indicate 'X'"



print("--- %s minutes ---" % (round(time.time() - start_time, 2)/60))
