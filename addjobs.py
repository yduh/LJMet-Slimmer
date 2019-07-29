#!/usr/bin/env python2
#run this script in the job collection directory to add all output files in the subdirectories
import sys, os, time
import subprocess

subprocess.call(['/uscms/home/yiting11/nobackup/CMSSW_9_4_6_patch1/src/LJMet-Slimmer/setup.sh'])

shift = sys.argv[1]

nFilePerJob = 50

rootbase_dir_str = os.environ['rootbase']+'/'+shift+'/'
logbase_dir_str = os.environ['logbase']+'/'+shift+'/'
rootfiles = os.listdir(rootbase_dir_str)
logfiles = os.listdir(logbase_dir_str)

rootdirs = [os.path.join(rootbase_dir_str,d) for d in rootfiles if os.path.isdir(os.path.join(rootbase_dir_str,d))]
logdirs = [os.path.join(logbase_dir_str,l) for l in logfiles if os.path.isdir(os.path.join(logbase_dir_str,l))]

for roots, logs in zip(rootdirs, logdirs):
    if os.path.basename(roots + '.root') in rootfiles: continue

    if 'Tprime' in roots or 'Bprime' in roots: continue
    #if 'DYJetsToLL_M-50_HT' in roots: continue
    #if 'TTTo' not in roots: continue
    if 'Single' in rootfiles: continue

    print roots
    outs = [f for f in os.listdir(logs) if '.job' in f]
    files = [f for f in os.listdir(roots) if '.root' in f]
    numouts = [int(f.split('_')[-1].split('.')[0]) for f in os.listdir(logs) if '.job' in f]
    numfiles = [int(f.split('_')[-1].split('.')[0]) for f in os.listdir(roots) if '.root' in f]

    #numoutsAdditional = [len(f.split('_')[-1].split('-')) != 1 for f in os.listdir(logs) if '.job' in f]
    print len(numouts), len(numfiles)/nFilePerJob+1

#    if len(numfiles)/nFilePerJob+1 == len(numouts):
        #files = [roots + '/' + f for f in files]
        #command = 'hadd ' + roots + '.root ' + ' '.join(files)
#        command = 'hadd ' + roots + '.root ' + roots+'/*.root'
#        print command
#        os.system(command)

    command = 'hadd ' + roots + '.root ' + roots+'/*.root'
    print command
    os.system(command)
