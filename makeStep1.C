#include "step1.cc"

void makeStep1(TString macroDir, TString inputFile, TString outputFile, TString treeName){

  gROOT->SetMacroPath(macroDir);

  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");

  TString incl("-I");
  incl+=macroDir;
  gSystem->AddIncludePath(incl);

  step1 t(inputFile,outputFile, treeName);
  t.Loop();
}
