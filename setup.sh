#!/bin/bash

#The only few lines you need to modify for your each task
export jobid=2017/Feb_addNumCounter #will create this as an output folder in /eos/uscms/store/user/lpcljm/yiting/${jobid}/nominal

export ntupleWhere=/store/user/lpcljm/2018/LJMet94X_1lep_013019 #need to point where is the nutple loacted at
export slimrootWhere=/store/user/lpcljm/yiting/${jobid}  


#nothing you need to change
export ANABASE=${PWD}
export logbase=${ANABASE}/log/${jobid}
export rootbase=${ANABASE}/results/${jobid}

