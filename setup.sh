#!/bin/bash

#The only few lines you need to modify for your each task
export sampleCatTag=singleLep2017
#export jobid=2017/FWLJMET #will create this as an output folder in /eos/uscmstore/user/lpcljm/yiting/${jobid}/nominal

export ntupleWhere=/eos/uscms/store/user/lpcljm/FWLJMET102X_1lep2017_052219 #need to point where is the nutple loacted at
export slimrootWhere=/eos/uscms/store/user/lpcljm/yiting/${sampleCatTag}/FWLJMET  


#nothing you need to change
export ANABASE=${PWD}
export logbase=${ANABASE}/log/${sampleCatTag}/FWLJMET
export rootbase=${ANABASE}/results/${sampleCatTag}/FWLJMET

