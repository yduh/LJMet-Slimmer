#!/usr/bin/env python2
#run this script in the job collection directory to add all output files in the subdirectories
import sys, os, time
import subprocess

subprocess.call(['/uscms/home/yiting11/nobackup/CMSSW_9_4_6_patch1/src/LJMet-Slimmer/setup.sh'])

rootbase_dir_str = '%s/nominal/' %os.environ['rootbase']
logbase_dir_str = '%s/nominal/' %os.environ['logbase']
rootfiles = os.listdir(rootbase_dir_str)
logfiles = os.listdir(logbase_dir_str)

rootdirs = [os.path.join(rootbase_dir_str,d) for d in rootfiles if os.path.isdir(os.path.join(rootbase_dir_str,d))]
logdirs = [os.path.join(logbase_dir_str,l) for l in logfiles if os.path.isdir(os.path.join(logbase_dir_str,l))]
#print rootdirs, logdirs

for roots, logs in zip(rootdirs, logdirs):
    if os.path.basename(roots + '.root') in rootfiles:
        continue
    print roots, logs

    outs = [f for f in os.listdir(logs) if '.job' in f]
    files = [f for f in os.listdir(roots) if '.root' in f]
    numouts = [int(f.split('_')[-1].split('.')[0]) for f in os.listdir(logs) if '.job' in f]
    numfiles = [int(f.split('_')[-1].split('.')[0]) for f in os.listdir(roots) if '.root' in f]
    #print outs, files
    print len(numouts), len(numfiles)/20+1,  len(numfiles)/20+1 >= len(numouts)

    if len(numfiles)/20+1 >= len(numouts):
    #if len(numfiles) != 0:
        #files = [roots + '/' + f for f in files]
        #command = 'hadd ' + roots + '.root ' + ' '.join(files)
        command = 'hadd ' + roots + '.root ' + roots+'/*.root'
        print command
        os.system(command)

