#include "step1.cc"

void testStep1(){
  
  TString inputFile="root://cmseos.fnal.gov//store/user/lpcljm/2018/LJMet94X_1lep_013019/nominal/TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8/TprimeTprime_M-1100_TuneCP5_13TeV-madgraph-pythia8_1.root";
  
  TString outputFile="test.root";
  
  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");
  
  step1 t(inputFile,outputFile);
  t.Loop();
}


