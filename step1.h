//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov 16 20:39:17 2015 by ROOT version 6.02/05
// from TTree ljmet/ljmet
// found on file: /eos/uscms/store/user/lpcljm/LJMet_1lep_110915/X53X53_M-800_RH_TuneCUETP8M1_13TeV-madgraph-pythia8_25ns/X53X53_M-800_RH_TuneCUETP8M1_13TeV-madgraph-pythia8_25ns_1.root
//////////////////////////////////////////////////////////

#ifndef step1_h
#define step1_h

#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH1.h"

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "TLorentzVector.h"

enum shift:char;

using namespace std;

class step1 {
public :
   TTree          *inputTree;   //!pointer to the analyzed TTree or TChain
   TFile          *inputFile, *outputFile;
   Int_t           fCurrent; //!current Tree number in a TChain

   Bool_t          isSig;
   Bool_t          isTpTp;
   Bool_t          isBpBp;
   Bool_t          isXX;
   Bool_t          isTOP;
   Bool_t          isMadgraphBkg;
   Bool_t          isMC;
   Bool_t          isSM;
   Bool_t          isSE;
   Bool_t          isTT;
   Bool_t          isTTV;
   Bool_t          isVV;
   Bool_t          isSTt;
   Bool_t          isSTtW;
   Bool_t          isTTincMtt0to1000;
   Bool_t          isTTincMtt0to700;
   Bool_t          isTTincMtt700to1000;
   Bool_t          isTTincMtt1000toInf;
   Bool_t          outBWBW;
   Bool_t          outTZBW;
   Bool_t          outTHBW;
   Bool_t          outTZTH;
   Bool_t          outTZTZ;
   Bool_t          outTHTH;
   Bool_t          outTWTW;
   Bool_t          outBZTW;
   Bool_t          outBHTW;
   Bool_t          outBZBH;
   Bool_t          outBZBZ;
   Bool_t          outBHBH;
   Int_t           SigMass;
   Int_t           pileupIndex;
   
   // Fixed size dimensions of array or collections stored in the TTree if any.

   // NEW BRANCHES
   vector<int>    theJetAK8Truth_JetSubCalc_PtOrdered;
   vector<double> deltaR_leptonicparticle_AK8_PtOrdered; 

   vector<double> dnn_B_DeepAK8Calc_PtOrdered;
   vector<double> dnn_T_DeepAK8Calc_PtOrdered;
   vector<double> dnn_H_DeepAK8Calc_PtOrdered;
   vector<double> dnn_W_DeepAK8Calc_PtOrdered;
   vector<double> dnn_Z_DeepAK8Calc_PtOrdered;
   vector<double> dnn_J_DeepAK8Calc_PtOrdered;

   vector<double> dnn_QCD_BestCalc_PtOrdered;
   vector<double> dnn_Top_BestCalc_PtOrdered;
   vector<double> dnn_Higgs_BestCalc_PtOrdered;
   vector<double> dnn_W_BestCalc_PtOrdered;
   vector<double> dnn_Z_BestCalc_PtOrdered;
   vector<double> dnn_B_BestCalc_PtOrdered;

   vector<double> decorr_B_DeepAK8Calc_PtOrdered;
   vector<double> decorr_T_DeepAK8Calc_PtOrdered;
   vector<double> decorr_H_DeepAK8Calc_PtOrdered;
   vector<double> decorr_W_DeepAK8Calc_PtOrdered;
   vector<double> decorr_Z_DeepAK8Calc_PtOrdered;
   vector<double> decorr_J_DeepAK8Calc_PtOrdered;
   
   bool validDecay_BEST;
   bool validDecay_DeepAK8;
   bool validDecay_DeepAK8_decorr;

   bool isLeptonic_t;
   bool isLeptonic_W;

   bool taggedBWBW_BEST;
   bool taggedTHBW_BEST;
   bool taggedTHTH_BEST;
   bool taggedTZBW_BEST;
   bool taggedTZTH_BEST;
   bool taggedTZTZ_BEST;
   bool taggedBWBW_DeepAK8;
   bool taggedTHBW_DeepAK8;
   bool taggedTHTH_DeepAK8;
   bool taggedTZBW_DeepAK8;
   bool taggedTZTH_DeepAK8;
   bool taggedTZTZ_DeepAK8;
   bool taggedBWBW_DeepAK8_decorr;
   bool taggedTHBW_DeepAK8_decorr;
   bool taggedTHTH_DeepAK8_decorr;
   bool taggedTZBW_DeepAK8_decorr;
   bool taggedTZTH_DeepAK8_decorr;
   bool taggedTZTZ_DeepAK8_decorr;

   double highPtAK8Jet1_SoftDropCorrectedMass;
   double highPtAK8Jet2_SoftDropCorrectedMass;
   double highPtAK8Jet3_SoftDropCorrectedMass;

   double W_mass;
   double t_mass;

   double probSum_BEST_decay;
   double probSum_DeepAK8_decay;
   double probSum_DeepAK8_decorr_decay;
   double probSum_BEST_all;
   double probSum_DeepAK8_all;
   double probSum_DeepAK8_decorr_all;
   double probSum_BEST_four;
   double probSum_DeepAK8_four;
   double probSum_DeepAK8_decorr_four;

   Int_t nB_BEST;
   Int_t nH_BEST;
   Int_t nJ_BEST;
   Int_t nT_BEST;
   Int_t nW_BEST;
   Int_t nZ_BEST;

   Int_t nB_DeepAK8;
   Int_t nH_DeepAK8;
   Int_t nJ_DeepAK8;
   Int_t nT_DeepAK8;
   Int_t nW_DeepAK8;
   Int_t nZ_DeepAK8;

   Int_t nB_DeepAK8_decorr;
   Int_t nH_DeepAK8_decorr;
   Int_t nJ_DeepAK8_decorr;
   Int_t nT_DeepAK8_decorr;
   Int_t nW_DeepAK8_decorr;
   Int_t nZ_DeepAK8_decorr;

   Int_t           isElectron;
   Int_t           isMuon;
   Int_t           MCPastTrigger;
   Int_t           MCPastTriggerOR;
   Int_t           MCPastTriggerLepTight;
   Int_t           MCPastTriggerHTTight;
   Int_t           DataPastTrigger;
   Int_t           DataPastTriggerOR;
   Int_t           DataPastTriggerLepTight;
   Int_t           DataPastTriggerHTTight;
   Float_t         pileupWeight;
   Float_t         pileupWeightUp;
   Float_t         pileupWeightDown;
   Float_t         TrigEffAltWeight;
   Float_t         TrigEffWeight;
   Float_t         TrigEffWeightUncert;
   Float_t         isoSF;
   Float_t         lepIdSF;
   Float_t         MuTrkSF;
   Float_t         EGammaGsfSF;
   Float_t         JetSF_80X;
   Float_t         JetSFup_80X;
   Float_t         JetSFdn_80X;
   Float_t         JetSF_pTNbwflat;
   Float_t         JetSFup_pTNbwflat;
   Float_t         JetSFdn_pTNbwflat;
   Float_t         JetSFupwide_pTNbwflat;
   Float_t         JetSFdnwide_pTNbwflat;
   Float_t         HTSF_Exp;
   Float_t         HTSF_ExpUp;
   Float_t         HTSF_ExpDn;
   Float_t         HTSF_Pol;
   Float_t         HTSF_PolUp;
   Float_t         HTSF_PolDn;
   vector<double>  renormWeights;
   vector<double>  alphaSWeights;
   vector<double>  pdfWeights;

   Float_t         leptonPt_MultiLepCalc;
   Float_t         leptonEta_MultiLepCalc;
   Float_t         leptonPhi_MultiLepCalc;
   Float_t         leptonEnergy_MultiLepCalc;
   Float_t         leptonMVAValue_MultiLepCalc;
   Float_t         leptonMiniIso_MultiLepCalc;
   Float_t         leptonRelIso_MultiLepCalc;
   Float_t         leptonDxy_MultiLepCalc;
   Float_t         leptonDz_MultiLepCalc;
   Int_t           leptonCharge_MultiLepCalc;
   Int_t           elTrigPresel_MultiLepCalc;

   Int_t           NJets_JetSubCalc;
   Int_t           NJetsCSV_JetSubCalc;
   Int_t           NJetsCSVwithSF_JetSubCalc;
   Int_t           NJetsCSVnotH_JetSubCalc;
   Int_t           NJetsCSVnotPH_JetSubCalc;

   vector<int>     maxProb_JetSubCalc_PtOrdered;
   vector<int>     dnn_largest_BestCalc_PtOrdered;
   vector<int>     dnn_largest_DeepAK8Calc_PtOrdered;
   vector<int>     decorr_largest_DeepAK8Calc_PtOrdered;
   vector<int>     theJetAK8SDSubjetIndex_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8SDSubjetSize_JetSubCalc_PtOrdered;
   vector<int>     NJetsCSVwithSF_JetSubCalc_shifts;
   vector<int>     NJetsCSVnotH_JetSubCalc_shifts;
   vector<int>     NJetsCSVnotPH_JetSubCalc_shifts;
   vector<double>  theJetPt_JetSubCalc_PtOrdered;
   vector<double>  theJetEta_JetSubCalc_PtOrdered;
   vector<double>  theJetPhi_JetSubCalc_PtOrdered;
   vector<double>  theJetEnergy_JetSubCalc_PtOrdered;
   vector<double>  theJetCSV_JetSubCalc_PtOrdered;
   vector<int>     theJetHFlav_JetSubCalc_PtOrdered;
   vector<int>     theJetBTag_JetSubCalc_PtOrdered;
   vector<int>     theJetBTag_bSFup_JetSubCalc_PtOrdered;
   vector<int>     theJetBTag_bSFdn_JetSubCalc_PtOrdered;
   vector<int>     theJetBTag_lSFup_JetSubCalc_PtOrdered;
   vector<int>     theJetBTag_lSFdn_JetSubCalc_PtOrdered;

   Float_t         AK4HTpMETpLepPt;
   Float_t         AK4HT;

   Float_t         minMleppJet;
   Float_t         deltaRlepJetInMinMljet;
   Float_t         deltaPhilepJetInMinMljet;
   Float_t         minDR_lepJet;
   Float_t         ptRel_lepJet;
   Float_t         MT_lepMet;
   vector<double>  deltaR_lepJets;
   vector<double>  deltaPhi_lepJets;
   vector<double>  mass_lepJets;

   Float_t         BJetLeadPt;
   Float_t         minMleppBjetPt;
   Float_t         minMleppBjet;
   Float_t         deltaRlepbJetInMinMlb;
   Float_t         deltaPhilepbJetInMinMlb;
   vector<double>  BJetLeadPt_shifts;
   vector<double>  minMleppBjetPt_shifts;
   vector<double>  minMleppBjet_shifts;
   vector<double>  deltaRlepbJetInMinMlb_shifts;
   vector<double>  deltaPhilepbJetInMinMlb_shifts;
   vector<double>  deltaR_lepBJets;
   vector<double>  deltaR_lepBJets_bSFup;
   vector<double>  deltaR_lepBJets_bSFdn;
   vector<double>  deltaR_lepBJets_lSFup;
   vector<double>  deltaR_lepBJets_lSFdn;
   vector<double>  deltaPhi_lepBJets;
   vector<double>  deltaPhi_lepBJets_bSFup;
   vector<double>  deltaPhi_lepBJets_bSFdn;
   vector<double>  deltaPhi_lepBJets_lSFup;
   vector<double>  deltaPhi_lepBJets_lSFdn;
   vector<double>  mass_lepBJets;
   vector<double>  mass_lepBJets_bSFup;
   vector<double>  mass_lepBJets_bSFdn;
   vector<double>  mass_lepBJets_lSFup;
   vector<double>  mass_lepBJets_lSFdn;

   Int_t           NJetsAK8_JetSubCalc;
   Float_t         minDR_leadAK8otherAK8;
   Float_t         minDR_lepAK8;
   vector<double>  deltaR_lepAK8s;
   vector<double>  deltaPhi_lepAK8s;
   vector<double>  mass_lepAK8s;
   vector<double>  theJetAK8CHSPrunedMass_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8PrunedMassWtagUncerts_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8PrunedMassWtagUncerts_JMSup_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8PrunedMassWtagUncerts_JMSdn_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8PrunedMassWtagUncerts_JMRup_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8PrunedMassWtagUncerts_JMRdn_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8NjettinessTau1_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8NjettinessTau2_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8NjettinessTau3_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8CHSTau1_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8CHSTau2_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8CHSTau3_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Pt_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Eta_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Phi_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Mass_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8Energy_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8CHSSoftDropMass_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8SoftDropRaw_PtOrdered;
   vector<double>  theJetAK8SoftDropCorr_PtOrdered;
   vector<double>  theJetAK8SoftDrop_PtOrdered;
   vector<double>  theJetAK8DoubleB_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8SoftDrop_JMSup_PtOrdered;
   vector<double>  theJetAK8SoftDrop_JMSdn_PtOrdered;
   vector<double>  theJetAK8SoftDrop_JMRup_PtOrdered;
   vector<double>  theJetAK8SoftDrop_JMRdn_PtOrdered;
   vector<double>  theJetAK8SDSubjetNCSVM_PtOrdered;
   vector<double>  theJetAK8SDSubjetNCSVM_bSFup_PtOrdered;
   vector<double>  theJetAK8SDSubjetNCSVM_bSFdn_PtOrdered;
   vector<double>  theJetAK8SDSubjetNCSVM_lSFup_PtOrdered;
   vector<double>  theJetAK8SDSubjetNCSVM_lSFdn_PtOrdered;
   vector<int>     theJetAK8Wmatch_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Tmatch_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Zmatch_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8Hmatch_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8MatchedPt_JetSubCalc_PtOrdered;
   vector<double>  theJetAK8SoftDropCorr_JetSubCalc_PtOrdered;
   vector<int>     theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc_PtOrdered;

   Int_t           NJetsWtagged;
   Float_t         WJetLeadPt;
   Float_t         deltaRtopWjet;
   Float_t         deltaPhitopWjet;
   Float_t         deltaRlepWjet;
   Float_t         deltaPhilepWjet;
   vector<int>     NJetsWtagged_shifts;
   vector<double>  WJetLeadPt_shifts;
   vector<double>  deltaRtopWjet_shifts;  
   vector<double>  deltaPhitopWjet_shifts; 
   vector<double>  deltaRlepWjet_shifts;  
   vector<double>  deltaPhilepWjet_shifts; 

   Int_t           NJetsTtagged_0p81;
   Float_t         TJetLeadPt;
   Float_t         deltaRlepTjet;
   Float_t         deltaPhilepTjet;
   vector<int>     NJetsTtagged_0p81_shifts;
   vector<double>  TJetLeadPt_shifts;
   vector<double>  deltaRlepTjet_shifts;  
   vector<double>  deltaPhilepTjet_shifts; 

   Int_t           NJetsH1btagged;
   vector<int>     NJetsH1btagged_shifts;
   Int_t           NJetsH2btagged;
   vector<int>     NJetsH2btagged_shifts;

   Float_t         topPt;
   Float_t         topPtGen;
   Float_t         topPtWeight13TeV;
   Float_t         topMass;
   Float_t         tmass;
   Float_t         wmass;
   Float_t         genTopPt;
   Float_t         genAntiTopPt;

   // Declaration of leaf types
   Bool_t          flagBadMu_MultiLepCalc;
   Bool_t          flagDupMu_MultiLepCalc;
   Bool_t          isBHBH_TpTpCalc;
   Bool_t          isBHTW_TpTpCalc;
   Bool_t          isBWBW_TpTpCalc;
   Bool_t          isBZBH_TpTpCalc;
   Bool_t          isBZBZ_TpTpCalc;
   Bool_t          isBZTW_TpTpCalc;
   Bool_t          isTHBW_TpTpCalc;
   Bool_t          isTHTH_TpTpCalc;
   Bool_t          isTWTW_TpTpCalc;
   Bool_t          isTZBW_TpTpCalc;
   Bool_t          isTZTH_TpTpCalc;
   Bool_t          isTZTZ_TpTpCalc;
   Bool_t          isTau_MultiLepCalc;
   Int_t           NLeptonDecays_TpTpCalc;
   Int_t           NPartonsfromHEPUEP_MultiLepCalc;
   Int_t           dataE_MultiLepCalc;
   Int_t           dataM_MultiLepCalc;
   Int_t           genTDLID_MultiLepCalc;
   Int_t           lumi_CommonCalc;
   Int_t           nAllJets_CommonCalc;
   Int_t           nLooseMuons_CommonCalc;
   Int_t           nPV_MultiLepCalc;
   Int_t           nPileupInteractions_MultiLepCalc;
   Int_t           nSelBtagJets_CommonCalc;
   Int_t           nSelElectrons_CommonCalc;
   Int_t           nSelJets_CommonCalc;
   Int_t           nTightMuons_CommonCalc;
   Int_t           nTrueInteractions_MultiLepCalc;
   Int_t           run_CommonCalc;
   Long64_t        event_CommonCalc;
   Double_t        AK4HT_MultiLepCalc;
   Double_t        HTfromHEPUEP_MultiLepCalc;
   Double_t        L1NonPrefiringProbDown_CommonCalc;
   Double_t        L1NonPrefiringProbUp_CommonCalc;
   Double_t        L1NonPrefiringProb_CommonCalc;
   Double_t        LHEweightorig_MultiLepCalc;
   Double_t        MCWeight_MultiLepCalc;
   Double_t        corr_met_jerdn_phi_MultiLepCalc;
   Double_t        corr_met_jerdn_MultiLepCalc;
   Double_t        corr_met_jerup_phi_MultiLepCalc;
   Double_t        corr_met_jerup_MultiLepCalc;
   Double_t        corr_met_jesdn_phi_MultiLepCalc;
   Double_t        corr_met_jesdn_MultiLepCalc;
   Double_t        corr_met_jesup_phi_MultiLepCalc;
   Double_t        corr_met_jesup_MultiLepCalc;
   Double_t        corr_met_phi_MultiLepCalc;
   Double_t        corr_met_MultiLepCalc;
   Double_t        corr_metnohf_phi_MultiLepCalc;
   Double_t        corr_metnohf_MultiLepCalc;
   Double_t        genTDLEnergy_MultiLepCalc;
   Double_t        genTDLEta_MultiLepCalc;
   Double_t        genTDLPhi_MultiLepCalc;
   Double_t        genTDLPt_MultiLepCalc;
   Double_t        met_phi_MultiLepCalc;
   Double_t        met_MultiLepCalc;
   Double_t        metnohf_phi_MultiLepCalc;
   Double_t        metnohf_MultiLepCalc;
   Double_t        theJetHT_JetSubCalc;
   Double_t        theJetLeadPt_JetSubCalc;
   Double_t        theJetSubLeadPt_JetSubCalc;
   Double_t        ttbarMass_TTbarMassCalc;
   vector<int>     *AK4JetBTag_bSFdn_MultiLepCalc;
   vector<int>     *AK4JetBTag_bSFup_MultiLepCalc;
   vector<int>     *AK4JetBTag_lSFdn_MultiLepCalc;
   vector<int>     *AK4JetBTag_lSFup_MultiLepCalc;
   vector<int>     *AK4JetBTag_MultiLepCalc;
   vector<int>     *AK4JetFlav_MultiLepCalc;
   vector<int>     *HadronicVHtID_JetSubCalc;
   vector<int>     *HadronicVHtStatus_JetSubCalc;
   vector<int>     *HdecayID_TpTpCalc;
   vector<int>     *HdecayIndex_TpTpCalc;
   vector<int>     *LHEweightids_MultiLepCalc;
   vector<int>     *LeptonID_TpTpCalc;
   vector<int>     *LeptonParentID_TpTpCalc;
   vector<int>     *WdecayID_TpTpCalc;
   vector<int>     *WdecayIndex_TpTpCalc;
   vector<int>     *ZdecayID_TpTpCalc;
   vector<int>     *ZdecayIndex_TpTpCalc;
   vector<int>     *allTopsID_TTbarMassCalc;
   vector<int>     *allTopsStatus_TTbarMassCalc;
   vector<int>     *bPrimeID_TpTpCalc;
   vector<int>     *bPrimeNDaughters_TpTpCalc;
   vector<int>     *bPrimeStatus_TpTpCalc;
   vector<int>     *bosonID_TpTpCalc;
   vector<int>     *maxProb_JetSubCalc;
   vector<int>     *dnn_largest_BestCalc;
   vector<int>     *dnn_largest_DeepAK8Calc;
   vector<int>     *decorr_largest_DeepAK8Calc;
   vector<int>     *elChargeConsistent_MultiLepCalc;
   vector<int>     *elCharge_MultiLepCalc;
   vector<int>     *elCtfCharge_MultiLepCalc;
   vector<int>     *elGsfCharge_MultiLepCalc;
   vector<int>     *elIsEBEE_MultiLepCalc;
   vector<int>     *elIsMVALooseIso_MultiLepCalc;
   vector<int>     *elIsMVALoose_MultiLepCalc;
   vector<int>     *elIsMVATight80_MultiLepCalc;
   vector<int>     *elIsMVATight90_MultiLepCalc;
   vector<int>     *elIsMVATightIso80_MultiLepCalc;
   vector<int>     *elIsMVATightIso90_MultiLepCalc;
   vector<int>     *elMHits_MultiLepCalc;
   vector<int>     *elMatched_MultiLepCalc;
   vector<int>     *elMother_id_MultiLepCalc;
   vector<int>     *elMother_status_MultiLepCalc;
   vector<int>     *elNotConversion_MultiLepCalc;
   vector<int>     *elNumberOfMothers_MultiLepCalc;
   vector<int>     *elPdgId_MultiLepCalc;
   vector<int>     *elScPixCharge_MultiLepCalc;
   vector<int>     *elStatus_MultiLepCalc;
   vector<int>     *elVtxFitConv_MultiLepCalc;
   vector<int>     *electron_1_hltmatched_MultiLepCalc;
   vector<int>     *genBSLID_MultiLepCalc;
   vector<int>     *genID_MultiLepCalc;
   vector<int>     *genIndex_MultiLepCalc;
   vector<int>     *genMotherID_MultiLepCalc;
   vector<int>     *genMotherIndex_MultiLepCalc;
   vector<int>     *genStatus_MultiLepCalc;
   vector<int>     *muCharge_MultiLepCalc;
   vector<int>     *muGlobal_MultiLepCalc;
   vector<int>     *muIsGlobalHighPt_MultiLepCalc;
   vector<int>     *muIsLoose_MultiLepCalc;
   vector<int>     *muIsMediumPrompt_MultiLepCalc;
   vector<int>     *muIsMedium_MultiLepCalc;
   vector<int>     *muIsMiniIsoLoose_MultiLepCalc;
   vector<int>     *muIsMiniIsoMedium_MultiLepCalc;
   vector<int>     *muIsMiniIsoTight_MultiLepCalc;
   vector<int>     *muIsMiniIsoVeryTight_MultiLepCalc;
   vector<int>     *muIsMvaLoose_MultiLepCalc;
   vector<int>     *muIsMvaMedium_MultiLepCalc;
   vector<int>     *muIsMvaTight_MultiLepCalc;
   vector<int>     *muIsTight_MultiLepCalc;
   vector<int>     *muIsTrkHighPt_MultiLepCalc;
   vector<int>     *muMatched_MultiLepCalc;
   vector<int>     *muMother_id_MultiLepCalc;
   vector<int>     *muMother_status_MultiLepCalc;
   vector<int>     *muNMatchedStations_MultiLepCalc;
   vector<int>     *muNTrackerLayers_MultiLepCalc;
   vector<int>     *muNValMuHits_MultiLepCalc;
   vector<int>     *muNValPixelHits_MultiLepCalc;
   vector<int>     *muNumberOfMothers_MultiLepCalc;
   vector<int>     *muPdgId_MultiLepCalc;
   vector<int>     *muStatus_MultiLepCalc;
   vector<int>     *muon_1_hltmatched_MultiLepCalc;
   vector<int>     *quarkID_TpTpCalc;
   vector<int>     *tPrimeID_TpTpCalc;
   vector<int>     *tPrimeNDaughters_TpTpCalc;
   vector<int>     *tPrimeStatus_TpTpCalc;
   vector<int>     *theJetAK8SDSubjetHFlav_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetIndex_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVL_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetSize_JetSubCalc;
   vector<int>     *theJetAK8nDaughters_JetSubCalc;
   vector<int>     *theJetBTag_JetSubCalc;
   vector<int>     *theJetBTag_bSFdn_JetSubCalc;
   vector<int>     *theJetBTag_bSFup_JetSubCalc;
   vector<int>     *theJetBTag_lSFdn_JetSubCalc;
   vector<int>     *theJetBTag_lSFup_JetSubCalc;
   vector<int>     *theJetHFlav_JetSubCalc;
   vector<int>     *theJetPFlav_JetSubCalc;
   vector<int>     theJetPFlav_JetSubCalc_PtOrdered;
   vector<int>     *theJetnDaughters_JetSubCalc;
   vector<int>     *topID_TTbarMassCalc;
   vector<int>     *topWID_TTbarMassCalc;
   vector<int>     *topbID_TTbarMassCalc;
   vector<int>     *viSelMCTriggersEl_MultiLepCalc;
   vector<int>     *viSelMCTriggersMu_MultiLepCalc;
   vector<int>     *viSelTriggersEl_MultiLepCalc;
   vector<int>     *viSelTriggersMu_MultiLepCalc;
   vector<double>  *AK4JetBDeepCSVb_MultiLepCalc;
   vector<double>  *AK4JetBDeepCSVbb_MultiLepCalc;
   vector<double>  *AK4JetBDeepCSVc_MultiLepCalc;
   vector<double>  *AK4JetBDeepCSVudsg_MultiLepCalc;
   vector<double>  *AK4JetBDisc_MultiLepCalc;
   vector<double>  *AK4JetEnergy_MultiLepCalc;
   vector<double>  *AK4JetEta_MultiLepCalc;
   vector<double>  *AK4JetPhi_MultiLepCalc;
   vector<double>  *AK4JetPt_MultiLepCalc;
   vector<double>  *AK8JetCSV_BestCalc;
   vector<double>  *AK8JetCSV_MultiLepCalc;
   vector<double>  *AK8JetEnergy_BestCalc;
   vector<double>  *AK8JetEnergy_MultiLepCalc;
   vector<double>  *AK8JetEta_BestCalc;
   vector<double>  *AK8JetEta_MultiLepCalc;
   vector<double>  *AK8JetPhi_BestCalc;
   vector<double>  *AK8JetPhi_MultiLepCalc;
   vector<double>  *AK8JetPt_BestCalc;
   vector<double>  *AK8JetPt_MultiLepCalc;
   vector<double>  *FWmoment1H_BestCalc;
   vector<double>  *FWmoment1W_BestCalc;
   vector<double>  *FWmoment1Z_BestCalc;
   vector<double>  *FWmoment1top_BestCalc;
   vector<double>  *FWmoment2H_BestCalc;
   vector<double>  *FWmoment2W_BestCalc;
   vector<double>  *FWmoment2Z_BestCalc;
   vector<double>  *FWmoment2top_BestCalc;
   vector<double>  *FWmoment3H_BestCalc;
   vector<double>  *FWmoment3W_BestCalc;
   vector<double>  *FWmoment3Z_BestCalc;
   vector<double>  *FWmoment3top_BestCalc;
   vector<double>  *FWmoment4H_BestCalc;
   vector<double>  *FWmoment4W_BestCalc;
   vector<double>  *FWmoment4Z_BestCalc;
   vector<double>  *FWmoment4top_BestCalc;
   vector<double>  *HadronicVHtD0E_JetSubCalc;
   vector<double>  *HadronicVHtD0Eta_JetSubCalc;
   vector<double>  *HadronicVHtD0Phi_JetSubCalc;
   vector<double>  *HadronicVHtD0Pt_JetSubCalc;
   vector<double>  *HadronicVHtD1E_JetSubCalc;
   vector<double>  *HadronicVHtD1Eta_JetSubCalc;
   vector<double>  *HadronicVHtD1Phi_JetSubCalc;
   vector<double>  *HadronicVHtD1Pt_JetSubCalc;
   vector<double>  *HadronicVHtD2E_JetSubCalc;
   vector<double>  *HadronicVHtD2Eta_JetSubCalc;
   vector<double>  *HadronicVHtD2Phi_JetSubCalc;
   vector<double>  *HadronicVHtD2Pt_JetSubCalc;
   vector<double>  *HadronicVHtEnergy_JetSubCalc;
   vector<double>  *HadronicVHtEta_JetSubCalc;
   vector<double>  *HadronicVHtPhi_JetSubCalc;
   vector<double>  *HadronicVHtPt_JetSubCalc;
   vector<double>  *HdecayEnergy_TpTpCalc;
   vector<double>  *HdecayEta_TpTpCalc;
   vector<double>  *HdecayPhi_TpTpCalc;
   vector<double>  *HdecayPt_TpTpCalc;
   vector<double>  *LHEweights_MultiLepCalc;
   vector<double>  *LeptonEnergy_TpTpCalc;
   vector<double>  *LeptonEta_TpTpCalc;
   vector<double>  *LeptonPhi_TpTpCalc;
   vector<double>  *LeptonPt_TpTpCalc;
   vector<double>  *Njets_H_BestCalc;
   vector<double>  *Njets_W_BestCalc;
   vector<double>  *Njets_Z_BestCalc;
   vector<double>  *Njets_jet_BestCalc;
   vector<double>  *Njets_orig_BestCalc;
   vector<double>  *Njets_top_BestCalc;
   vector<double>  *SDmass_BestCalc;
   vector<double>  *WdecayEnergy_TpTpCalc;
   vector<double>  *WdecayEta_TpTpCalc;
   vector<double>  *WdecayPhi_TpTpCalc;
   vector<double>  *WdecayPt_TpTpCalc;
   vector<double>  *ZdecayEnergy_TpTpCalc;
   vector<double>  *ZdecayEta_TpTpCalc;
   vector<double>  *ZdecayPhi_TpTpCalc;
   vector<double>  *ZdecayPt_TpTpCalc;
   vector<double>  *allTopsEnergy_TTbarMassCalc;
   vector<double>  *allTopsEta_TTbarMassCalc;
   vector<double>  *allTopsPhi_TTbarMassCalc;
   vector<double>  *allTopsPt_TTbarMassCalc;
   vector<double>  *aplanarityH_BestCalc;
   vector<double>  *aplanarityW_BestCalc;
   vector<double>  *aplanarityZ_BestCalc;
   vector<double>  *aplanaritytop_BestCalc;
   vector<double>  *bDisc1_BestCalc;
   vector<double>  *bDisc2_BestCalc;
   vector<double>  *bDisc_BestCalc;
   vector<double>  *bPrimeEnergy_TpTpCalc;
   vector<double>  *bPrimeEta_TpTpCalc;
   vector<double>  *bPrimeMass_TpTpCalc;
   vector<double>  *bPrimePhi_TpTpCalc;
   vector<double>  *bPrimePt_TpTpCalc;
   vector<double>  *bosonEnergy_TpTpCalc;
   vector<double>  *bosonEta_TpTpCalc;
   vector<double>  *bosonPhi_TpTpCalc;
   vector<double>  *bosonPt_TpTpCalc;
   vector<double>  *decorr_B_DeepAK8Calc;
   vector<double>  *decorr_H_DeepAK8Calc;
   vector<double>  *decorr_J_DeepAK8Calc;
   vector<double>  *decorr_T_DeepAK8Calc;
   vector<double>  *decorr_W_DeepAK8Calc;
   vector<double>  *decorr_Z_DeepAK8Calc;
   vector<double>  *dnn_B_DeepAK8Calc;
   vector<double>  *dnn_B_BestCalc;
   vector<double>  *dnn_H_DeepAK8Calc;
   vector<double>  *dnn_Higgs_BestCalc;
   vector<double>  *dnn_J_DeepAK8Calc;
   vector<double>  *dnn_QCD_BestCalc;
   vector<double>  *dnn_T_DeepAK8Calc;
   vector<double>  *dnn_Top_BestCalc;
   vector<double>  *dnn_W_BestCalc;
   vector<double>  *dnn_W_DeepAK8Calc;
   vector<double>  *dnn_Z_BestCalc;
   vector<double>  *dnn_Z_DeepAK8Calc;
   vector<double>  *elAEff_MultiLepCalc;
   vector<double>  *elChIso_MultiLepCalc;
   vector<double>  *elD0_MultiLepCalc;
   vector<double>  *elDEtaSCTkAtVtx_MultiLepCalc;
   vector<double>  *elDPhiSCTkAtVtx_MultiLepCalc;
   vector<double>  *elDR03TkSumPt_MultiLepCalc;
   vector<double>  *elDZ_MultiLepCalc;
   vector<double>  *elDeta_MultiLepCalc;
   vector<double>  *elDphi_MultiLepCalc;
   vector<double>  *elDxy_MultiLepCalc;
   vector<double>  *elEcalPFClusterIso_MultiLepCalc;
   vector<double>  *elEnergy_MultiLepCalc;
   vector<double>  *elEtaVtx_MultiLepCalc;
   vector<double>  *elEta_MultiLepCalc;
   vector<double>  *elGen_Reco_dr_MultiLepCalc;
   vector<double>  *elHcalPFClusterIso_MultiLepCalc;
   vector<double>  *elHoE_MultiLepCalc;
   vector<double>  *elIsLoose_MultiLepCalc;
   vector<double>  *elIsMedium_MultiLepCalc;
   vector<double>  *elIsTight_MultiLepCalc;
   vector<double>  *elIsVeto_MultiLepCalc;
   vector<double>  *elMVAValue_iso_MultiLepCalc;
   vector<double>  *elMVAValue_MultiLepCalc;
   vector<double>  *elMatchedEnergy_MultiLepCalc;
   vector<double>  *elMatchedEta_MultiLepCalc;
   vector<double>  *elMatchedPhi_MultiLepCalc;
   vector<double>  *elMatchedPt_MultiLepCalc;
   vector<double>  *elMiniIso_MultiLepCalc;
   vector<double>  *elMother_energy_MultiLepCalc;
   vector<double>  *elMother_eta_MultiLepCalc;
   vector<double>  *elMother_phi_MultiLepCalc;
   vector<double>  *elMother_pt_MultiLepCalc;
   vector<double>  *elNhIso_MultiLepCalc;
   vector<double>  *elOoemoop_MultiLepCalc;
   vector<double>  *elPFEta_MultiLepCalc;
   vector<double>  *elPFPhi_MultiLepCalc;
   vector<double>  *elPhIso_MultiLepCalc;
   vector<double>  *elPhiVtx_MultiLepCalc;
   vector<double>  *elPhi_MultiLepCalc;
   vector<double>  *elPt_MultiLepCalc;
   vector<double>  *elRelIso_MultiLepCalc;
   vector<double>  *elRhoIso_MultiLepCalc;
   vector<double>  *elSCE_MultiLepCalc;
   vector<double>  *elSihih_MultiLepCalc;
   vector<double>  *et_BestCalc;
   vector<double>  *eta_BestCalc;
   vector<double>  *evtWeightsMC_MultiLepCalc;
   vector<double>  *genBSLEnergy_MultiLepCalc;
   vector<double>  *genBSLEta_MultiLepCalc;
   vector<double>  *genBSLPhi_MultiLepCalc;
   vector<double>  *genBSLPt_MultiLepCalc;
   vector<double>  *genEnergy_MultiLepCalc;
   vector<double>  *genEta_MultiLepCalc;
   vector<double>  *genJetEnergy_MultiLepCalc;
   vector<double>  *genJetEta_MultiLepCalc;
   vector<double>  *genJetPhi_MultiLepCalc;
   vector<double>  *genJetPt_MultiLepCalc;
   vector<double>  *genPhi_MultiLepCalc;
   vector<double>  *genPt_MultiLepCalc;
   vector<double>  *isotropyH_BestCalc;
   vector<double>  *isotropyW_BestCalc;
   vector<double>  *isotropyZ_BestCalc;
   vector<double>  *isotropytop_BestCalc;
   vector<double>  *m1234H_BestCalc;
   vector<double>  *m1234W_BestCalc;
   vector<double>  *m1234Z_BestCalc;
   vector<double>  *m1234_jet_BestCalc;
   vector<double>  *m1234top_BestCalc;
   vector<double>  *m12H_BestCalc;
   vector<double>  *m12W_BestCalc;
   vector<double>  *m12Z_BestCalc;
   vector<double>  *m12_jet_BestCalc;
   vector<double>  *m12top_BestCalc;
   vector<double>  *m13H_BestCalc;
   vector<double>  *m13W_BestCalc;
   vector<double>  *m13Z_BestCalc;
   vector<double>  *m13_jet_BestCalc;
   vector<double>  *m13top_BestCalc;
   vector<double>  *m23H_BestCalc;
   vector<double>  *m23W_BestCalc;
   vector<double>  *m23Z_BestCalc;
   vector<double>  *m23_jet_BestCalc;
   vector<double>  *m23top_BestCalc;
   vector<double>  *mass_BestCalc;
   vector<double>  *muChIso_MultiLepCalc;
   vector<double>  *muChi2_MultiLepCalc;
   vector<double>  *muDxy_MultiLepCalc;
   vector<double>  *muDz_MultiLepCalc;
   vector<double>  *muEnergy_MultiLepCalc;
   vector<double>  *muEta_MultiLepCalc;
   vector<double>  *muGIso_MultiLepCalc;
   vector<double>  *muGen_Reco_dr_MultiLepCalc;
   vector<double>  *muInnerEta_MultiLepCalc;
   vector<double>  *muInnerPhi_MultiLepCalc;
   vector<double>  *muInnerPt_MultiLepCalc;
   vector<double>  *muMatchedEnergy_MultiLepCalc;
   vector<double>  *muMatchedEta_MultiLepCalc;
   vector<double>  *muMatchedPhi_MultiLepCalc;
   vector<double>  *muMatchedPt_MultiLepCalc;
   vector<double>  *muMiniIsoDB_MultiLepCalc;
   vector<double>  *muMiniIso_MultiLepCalc;
   vector<double>  *muMother_energy_MultiLepCalc;
   vector<double>  *muMother_eta_MultiLepCalc;
   vector<double>  *muMother_phi_MultiLepCalc;
   vector<double>  *muMother_pt_MultiLepCalc;
   vector<double>  *muNhIso_MultiLepCalc;
   vector<double>  *muPhi_MultiLepCalc;
   vector<double>  *muPt_MultiLepCalc;
   vector<double>  *muPuIso_MultiLepCalc;
   vector<double>  *muRelIso_MultiLepCalc;
   vector<double>  *pzOverp_H_BestCalc;
   vector<double>  *pzOverp_W_BestCalc;
   vector<double>  *pzOverp_Z_BestCalc;
   vector<double>  *pzOverp_jet_BestCalc;
   vector<double>  *pzOverp_top_BestCalc;
   vector<double>  *q_BestCalc;
   vector<double>  *quarkEnergy_TpTpCalc;
   vector<double>  *quarkEta_TpTpCalc;
   vector<double>  *quarkPhi_TpTpCalc;
   vector<double>  *quarkPt_TpTpCalc;
   vector<double>  *sphericityH_BestCalc;
   vector<double>  *sphericityW_BestCalc;
   vector<double>  *sphericityZ_BestCalc;
   vector<double>  *sphericitytop_BestCalc;
   vector<double>  *tPrimeEnergy_TpTpCalc;
   vector<double>  *tPrimeEta_TpTpCalc;
   vector<double>  *tPrimeMass_TpTpCalc;
   vector<double>  *tPrimePhi_TpTpCalc;
   vector<double>  *tPrimePt_TpTpCalc;
   vector<double>  *tau21_BestCalc;
   vector<double>  *tau32_BestCalc;
   vector<double>  *theJetAK8CHSEta_JetSubCalc;
   vector<double>  *theJetAK8CHSMass_JetSubCalc;
   vector<double>  *theJetAK8CHSPhi_JetSubCalc;
   vector<double>  *theJetAK8CHSPrunedMass_JetSubCalc;
   vector<double>  *theJetAK8CHSPt_JetSubCalc;
   vector<double>  *theJetAK8CHSSoftDropMass_JetSubCalc;
   vector<double>  *theJetAK8CHSTau1_JetSubCalc;
   vector<double>  *theJetAK8CHSTau2_JetSubCalc;
   vector<double>  *theJetAK8CHSTau3_JetSubCalc;
   vector<double>  *theJetAK8CSV_JetSubCalc;
   vector<double>  *theJetAK8DoubleB_JetSubCalc;
   vector<double>  *theJetAK8Energy_JetSubCalc;
   vector<double>  *theJetAK8Eta_JetSubCalc;
   vector<double>  *theJetAK8GenDR_JetSubCalc;
   vector<double>  *theJetAK8GenMass_JetSubCalc;
   vector<double>  *theJetAK8GenPt_JetSubCalc;
   vector<double>  *theJetAK8JetCharge_JetSubCalc;
   vector<double>  *theJetAK8Mass_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau1_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau2_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau3_JetSubCalc;
   vector<double>  *theJetAK8Phi_JetSubCalc;
   vector<double>  *theJetAK8Pt_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetBTag_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVb_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVbb_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVc_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSVudsg_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetDR_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetEta_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetMass_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetPhi_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetPt_JetSubCalc;
   vector<double>  *theJetAK8SoftDropCorr_JetSubCalc;
   vector<double>  *theJetAK8SoftDropRaw_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMRdn_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMRup_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMSdn_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JMSup_JetSubCalc;
   vector<double>  *theJetAK8SoftDrop_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn2b1_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn2b2_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn3b1_JetSubCalc;
   vector<double>  *theJetAK8SoftDropn3b2_JetSubCalc;
   vector<double>  *theJetDeepCSVb_JetSubCalc;
   vector<double>  *theJetDeepCSVbb_JetSubCalc;
   vector<double>  theJetDeepCSVb_JetSubCalc_PtOrdered;
   vector<double>  theJetDeepCSVbb_JetSubCalc_PtOrdered;
   vector<double>  *theJetEnergy_JetSubCalc;
   vector<double>  *theJetEta_JetSubCalc;
   vector<double>  *theJetPhi_JetSubCalc;
   vector<double>  *theJetPileupJetId_JetSubCalc;
   vector<double>  *theJetPt_JetSubCalc;
   vector<double>  *thrustH_BestCalc;
   vector<double>  *thrustW_BestCalc;
   vector<double>  *thrustZ_BestCalc;
   vector<double>  *thrusttop_BestCalc;
   vector<double>  *topEnergy_TTbarMassCalc;
   vector<double>  *topEta_TTbarMassCalc;
   vector<double>  *topMass_TTbarMassCalc;
   vector<double>  *topPhi_TTbarMassCalc;
   vector<double>  *topPt_TTbarMassCalc;
   vector<double>  *topWEnergy_TTbarMassCalc;
   vector<double>  *topWEta_TTbarMassCalc;
   vector<double>  *topWPhi_TTbarMassCalc;
   vector<double>  *topWPt_TTbarMassCalc;
   vector<double>  *topbEnergy_TTbarMassCalc;
   vector<double>  *topbEta_TTbarMassCalc;
   vector<double>  *topbPhi_TTbarMassCalc;
   vector<double>  *topbPt_TTbarMassCalc;
   vector<string>  *electron_hltfilters_MultiLepCalc;
   vector<string>  *muon_hltfilters_MultiLepCalc;
   vector<string>  *vsSelMCTriggersEl_MultiLepCalc;
   vector<string>  *vsSelMCTriggersMu_MultiLepCalc;
   vector<string>  *vsSelTriggersEl_MultiLepCalc;
   vector<string>  *vsSelTriggersMu_MultiLepCalc;

   // List of branches
   TBranch        *b_flagBadMu_MultiLepCalc;   //!
   TBranch        *b_flagDupMu_MultiLepCalc;   //!
   TBranch        *b_isBHBH_TpTpCalc;   //!
   TBranch        *b_isBHTW_TpTpCalc;   //!
   TBranch        *b_isBWBW_TpTpCalc;   //!
   TBranch        *b_isBZBH_TpTpCalc;   //!
   TBranch        *b_isBZBZ_TpTpCalc;   //!
   TBranch        *b_isBZTW_TpTpCalc;   //!
   TBranch        *b_isTHBW_TpTpCalc;   //!
   TBranch        *b_isTHTH_TpTpCalc;   //!
   TBranch        *b_isTWTW_TpTpCalc;   //!
   TBranch        *b_isTZBW_TpTpCalc;   //!
   TBranch        *b_isTZTH_TpTpCalc;   //!
   TBranch        *b_isTZTZ_TpTpCalc;   //!
   TBranch        *b_isTau_MultiLepCalc;   //!
   TBranch        *b_NLeptonDecays_TpTpCalc;   //!
   TBranch        *b_NPartonsfromHEPUEP_MultiLepCalc;   //!
   TBranch        *b_dataE_MultiLepCalc;   //!
   TBranch        *b_dataM_MultiLepCalc;   //!
   TBranch        *b_genTDLID_MultiLepCalc;   //!
   TBranch        *b_lumi_CommonCalc;   //!
   TBranch        *b_nAllJets_CommonCalc;   //!
   TBranch        *b_nLooseMuons_CommonCalc;   //!
   TBranch        *b_nPV_MultiLepCalc;   //!
   TBranch        *b_nPileupInteractions_MultiLepCalc;   //!
   TBranch        *b_nSelBtagJets_CommonCalc;   //!
   TBranch        *b_nSelElectrons_CommonCalc;   //!
   TBranch        *b_nSelJets_CommonCalc;   //!
   TBranch        *b_nTightMuons_CommonCalc;   //!
   TBranch        *b_nTrueInteractions_MultiLepCalc;   //!
   TBranch        *b_run_CommonCalc;   //!
   TBranch        *b_event_CommonCalc;   //!
   TBranch        *b_AK4HT_MultiLepCalc;   //!
   TBranch        *b_HTfromHEPUEP_MultiLepCalc;   //!
   TBranch        *b_L1NonPrefiringProbDown_CommonCalc;   //!
   TBranch        *b_L1NonPrefiringProbUp_CommonCalc;   //!
   TBranch        *b_L1NonPrefiringProb_CommonCalc;   //!
   TBranch        *b_LHEweightorig_MultiLepCalc;   //!
   TBranch        *b_MCWeight_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerdn_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerdn_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerup_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jerup_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesdn_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesdn_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesup_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_jesup_MultiLepCalc;   //!
   TBranch        *b_corr_met_phi_MultiLepCalc;   //!
   TBranch        *b_corr_met_MultiLepCalc;   //!
   TBranch        *b_corr_metnohf_phi_MultiLepCalc;   //!
   TBranch        *b_corr_metnohf_MultiLepCalc;   //!
   TBranch        *b_genTDLEnergy_MultiLepCalc;   //!
   TBranch        *b_genTDLEta_MultiLepCalc;   //!
   TBranch        *b_genTDLPhi_MultiLepCalc;   //!
   TBranch        *b_genTDLPt_MultiLepCalc;   //!
   TBranch        *b_met_phi_MultiLepCalc;   //!
   TBranch        *b_met_MultiLepCalc;   //!
   TBranch        *b_metnohf_phi_MultiLepCalc;   //!
   TBranch        *b_metnohf_MultiLepCalc;   //!
   TBranch        *b_theJetHT_JetSubCalc;   //!
   TBranch        *b_theJetLeadPt_JetSubCalc;   //!
   TBranch        *b_theJetSubLeadPt_JetSubCalc;   //!
   TBranch        *b_ttbarMass_TTbarMassCalc;   //!
   TBranch        *b_AK4JetBTag_bSFdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_bSFup_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_lSFdn_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_lSFup_MultiLepCalc;   //!
   TBranch        *b_AK4JetBTag_MultiLepCalc;   //!
   TBranch        *b_AK4JetFlav_MultiLepCalc;   //!
   TBranch        *b_HadronicVHtID_JetSubCalc;   //!
   TBranch        *b_HadronicVHtStatus_JetSubCalc;   //!
   TBranch        *b_HdecayID_TpTpCalc;   //!
   TBranch        *b_HdecayIndex_TpTpCalc;   //!
   TBranch        *b_LHEweightids_MultiLepCalc;   //!
   TBranch        *b_LeptonID_TpTpCalc;   //!
   TBranch        *b_LeptonParentID_TpTpCalc;   //!
   TBranch        *b_WdecayID_TpTpCalc;   //!
   TBranch        *b_WdecayIndex_TpTpCalc;   //!
   TBranch        *b_ZdecayID_TpTpCalc;   //!
   TBranch        *b_ZdecayIndex_TpTpCalc;   //!
   TBranch        *b_allTopsID_TTbarMassCalc;   //!
   TBranch        *b_allTopsStatus_TTbarMassCalc;   //!
   TBranch        *b_bPrimeID_TpTpCalc;   //!
   TBranch        *b_bPrimeNDaughters_TpTpCalc;   //!
   TBranch        *b_bPrimeStatus_TpTpCalc;   //!
   TBranch        *b_bosonID_TpTpCalc;   //!
   TBranch        *b_maxProb_JetSubCalc;   //!
   TBranch        *b_dnn_largest_BestCalc;   //!
   TBranch        *b_dnn_largest_DeepAK8Calc;   //!
   TBranch        *b_decorr_largest_DeepAK8Calc;   //!
   TBranch        *b_elChargeConsistent_MultiLepCalc;   //!
   TBranch        *b_elCharge_MultiLepCalc;   //!
   TBranch        *b_elCtfCharge_MultiLepCalc;   //!
   TBranch        *b_elGsfCharge_MultiLepCalc;   //!
   TBranch        *b_elIsEBEE_MultiLepCalc;   //!
   TBranch        *b_elIsMVALooseIso_MultiLepCalc;   //!
   TBranch        *b_elIsMVALoose_MultiLepCalc;   //!
   TBranch        *b_elIsMVATight80_MultiLepCalc;   //!
   TBranch        *b_elIsMVATight90_MultiLepCalc;   //!
   TBranch        *b_elIsMVATightIso80_MultiLepCalc;   //!
   TBranch        *b_elIsMVATightIso90_MultiLepCalc;   //!
   TBranch        *b_elMHits_MultiLepCalc;   //!
   TBranch        *b_elMatched_MultiLepCalc;   //!
   TBranch        *b_elMother_id_MultiLepCalc;   //!
   TBranch        *b_elMother_status_MultiLepCalc;   //!
   TBranch        *b_elNotConversion_MultiLepCalc;   //!
   TBranch        *b_elNumberOfMothers_MultiLepCalc;   //!
   TBranch        *b_elPdgId_MultiLepCalc;   //!
   TBranch        *b_elScPixCharge_MultiLepCalc;   //!
   TBranch        *b_elStatus_MultiLepCalc;   //!
   TBranch        *b_elVtxFitConv_MultiLepCalc;   //!
   TBranch        *b_electron_1_hltmatched_MultiLepCalc;   //!
   TBranch        *b_genBSLID_MultiLepCalc;   //!
   TBranch        *b_genID_MultiLepCalc;   //!
   TBranch        *b_genIndex_MultiLepCalc;   //!
   TBranch        *b_genMotherID_MultiLepCalc;   //!
   TBranch        *b_genMotherIndex_MultiLepCalc;   //!
   TBranch        *b_genStatus_MultiLepCalc;   //!
   TBranch        *b_muCharge_MultiLepCalc;   //!
   TBranch        *b_muGlobal_MultiLepCalc;   //!
   TBranch        *b_muIsGlobalHighPt_MultiLepCalc;   //!
   TBranch        *b_muIsLoose_MultiLepCalc;   //!
   TBranch        *b_muIsMediumPrompt_MultiLepCalc;   //!
   TBranch        *b_muIsMedium_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoLoose_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoMedium_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoTight_MultiLepCalc;   //!
   TBranch        *b_muIsMiniIsoVeryTight_MultiLepCalc;   //!
   TBranch        *b_muIsMvaLoose_MultiLepCalc;   //!
   TBranch        *b_muIsMvaMedium_MultiLepCalc;   //!
   TBranch        *b_muIsMvaTight_MultiLepCalc;   //!
   TBranch        *b_muIsTight_MultiLepCalc;   //!
   TBranch        *b_muIsTrkHighPt_MultiLepCalc;   //!
   TBranch        *b_muMatched_MultiLepCalc;   //!
   TBranch        *b_muMother_id_MultiLepCalc;   //!
   TBranch        *b_muMother_status_MultiLepCalc;   //!
   TBranch        *b_muNMatchedStations_MultiLepCalc;   //!
   TBranch        *b_muNTrackerLayers_MultiLepCalc;   //!
   TBranch        *b_muNValMuHits_MultiLepCalc;   //!
   TBranch        *b_muNValPixelHits_MultiLepCalc;   //!
   TBranch        *b_muNumberOfMothers_MultiLepCalc;   //!
   TBranch        *b_muPdgId_MultiLepCalc;   //!
   TBranch        *b_muStatus_MultiLepCalc;   //!
   TBranch        *b_muon_1_hltmatched_MultiLepCalc;   //!
   TBranch        *b_quarkID_TpTpCalc;   //!
   TBranch        *b_tPrimeID_TpTpCalc;   //!
   TBranch        *b_tPrimeNDaughters_TpTpCalc;   //!
   TBranch        *b_tPrimeStatus_TpTpCalc;   //!
   TBranch        *b_theJetAK8SDSubjetHFlav_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetIndex_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVL_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetSize_JetSubCalc;   //!
   TBranch        *b_theJetAK8nDaughters_JetSubCalc;   //!
   TBranch        *b_theJetBTag_JetSubCalc;   //!
   TBranch        *b_theJetBTag_bSFdn_JetSubCalc;   //!
   TBranch        *b_theJetBTag_bSFup_JetSubCalc;   //!
   TBranch        *b_theJetBTag_lSFdn_JetSubCalc;   //!
   TBranch        *b_theJetBTag_lSFup_JetSubCalc;   //!
   TBranch        *b_theJetHFlav_JetSubCalc;   //!
   TBranch        *b_theJetPFlav_JetSubCalc;   //!
   TBranch        *b_theJetnDaughters_JetSubCalc;   //!
   TBranch        *b_topID_TTbarMassCalc;   //!
   TBranch        *b_topWID_TTbarMassCalc;   //!
   TBranch        *b_topbID_TTbarMassCalc;   //!
   TBranch        *b_viSelMCTriggersEl_MultiLepCalc;   //!
   TBranch        *b_viSelMCTriggersMu_MultiLepCalc;   //!
   TBranch        *b_viSelTriggersEl_MultiLepCalc;   //!
   TBranch        *b_viSelTriggersMu_MultiLepCalc;   //!
   TBranch        *b_AK4JetBDeepCSVb_MultiLepCalc;   //!
   TBranch        *b_AK4JetBDeepCSVbb_MultiLepCalc;   //!
   TBranch        *b_AK4JetBDeepCSVc_MultiLepCalc;   //!
   TBranch        *b_AK4JetBDeepCSVudsg_MultiLepCalc;   //!
   TBranch        *b_AK4JetBDisc_MultiLepCalc;   //!
   TBranch        *b_AK4JetEnergy_MultiLepCalc;   //!
   TBranch        *b_AK4JetEta_MultiLepCalc;   //!
   TBranch        *b_AK4JetPhi_MultiLepCalc;   //!
   TBranch        *b_AK4JetPt_MultiLepCalc;   //!
   TBranch        *b_AK8JetCSV_BestCalc;   //!
   TBranch        *b_AK8JetCSV_MultiLepCalc;   //!
   TBranch        *b_AK8JetEnergy_BestCalc;   //!
   TBranch        *b_AK8JetEnergy_MultiLepCalc;   //!
   TBranch        *b_AK8JetEta_BestCalc;   //!
   TBranch        *b_AK8JetEta_MultiLepCalc;   //!
   TBranch        *b_AK8JetPhi_BestCalc;   //!
   TBranch        *b_AK8JetPhi_MultiLepCalc;   //!
   TBranch        *b_AK8JetPt_BestCalc;   //!
   TBranch        *b_AK8JetPt_MultiLepCalc;   //!
   TBranch        *b_FWmoment1H_BestCalc;   //!
   TBranch        *b_FWmoment1W_BestCalc;   //!
   TBranch        *b_FWmoment1Z_BestCalc;   //!
   TBranch        *b_FWmoment1top_BestCalc;   //!
   TBranch        *b_FWmoment2H_BestCalc;   //!
   TBranch        *b_FWmoment2W_BestCalc;   //!
   TBranch        *b_FWmoment2Z_BestCalc;   //!
   TBranch        *b_FWmoment2top_BestCalc;   //!
   TBranch        *b_FWmoment3H_BestCalc;   //!
   TBranch        *b_FWmoment3W_BestCalc;   //!
   TBranch        *b_FWmoment3Z_BestCalc;   //!
   TBranch        *b_FWmoment3top_BestCalc;   //!
   TBranch        *b_FWmoment4H_BestCalc;   //!
   TBranch        *b_FWmoment4W_BestCalc;   //!
   TBranch        *b_FWmoment4Z_BestCalc;   //!
   TBranch        *b_FWmoment4top_BestCalc;   //!
   TBranch        *b_HadronicVHtD0E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEnergy_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPhi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPt_JetSubCalc;   //!
   TBranch        *b_HdecayEnergy_TpTpCalc;   //!
   TBranch        *b_HdecayEta_TpTpCalc;   //!
   TBranch        *b_HdecayPhi_TpTpCalc;   //!
   TBranch        *b_HdecayPt_TpTpCalc;   //!
   TBranch        *b_LHEweights_MultiLepCalc;   //!
   TBranch        *b_LeptonEnergy_TpTpCalc;   //!
   TBranch        *b_LeptonEta_TpTpCalc;   //!
   TBranch        *b_LeptonPhi_TpTpCalc;   //!
   TBranch        *b_LeptonPt_TpTpCalc;   //!
   TBranch        *b_Njets_H_BestCalc;   //!
   TBranch        *b_Njets_W_BestCalc;   //!
   TBranch        *b_Njets_Z_BestCalc;   //!
   TBranch        *b_Njets_jet_BestCalc;   //!
   TBranch        *b_Njets_orig_BestCalc;   //!
   TBranch        *b_Njets_top_BestCalc;   //!
   TBranch        *b_SDmass_BestCalc;   //!
   TBranch        *b_WdecayEnergy_TpTpCalc;   //!
   TBranch        *b_WdecayEta_TpTpCalc;   //!
   TBranch        *b_WdecayPhi_TpTpCalc;   //!
   TBranch        *b_WdecayPt_TpTpCalc;   //!
   TBranch        *b_ZdecayEnergy_TpTpCalc;   //!
   TBranch        *b_ZdecayEta_TpTpCalc;   //!
   TBranch        *b_ZdecayPhi_TpTpCalc;   //!
   TBranch        *b_ZdecayPt_TpTpCalc;   //!
   TBranch        *b_allTopsEnergy_TTbarMassCalc;   //!
   TBranch        *b_allTopsEta_TTbarMassCalc;   //!
   TBranch        *b_allTopsPhi_TTbarMassCalc;   //!
   TBranch        *b_allTopsPt_TTbarMassCalc;   //!
   TBranch        *b_aplanarityH_BestCalc;   //!
   TBranch        *b_aplanarityW_BestCalc;   //!
   TBranch        *b_aplanarityZ_BestCalc;   //!
   TBranch        *b_aplanaritytop_BestCalc;   //!
   TBranch        *b_bDisc1_BestCalc;   //!
   TBranch        *b_bDisc2_BestCalc;   //!
   TBranch        *b_bDisc_BestCalc;   //!
   TBranch        *b_bPrimeEnergy_TpTpCalc;   //!
   TBranch        *b_bPrimeEta_TpTpCalc;   //!
   TBranch        *b_bPrimeMass_TpTpCalc;   //!
   TBranch        *b_bPrimePhi_TpTpCalc;   //!
   TBranch        *b_bPrimePt_TpTpCalc;   //!
   TBranch        *b_bosonEnergy_TpTpCalc;   //!
   TBranch        *b_bosonEta_TpTpCalc;   //!
   TBranch        *b_bosonPhi_TpTpCalc;   //!
   TBranch        *b_bosonPt_TpTpCalc;   //!
   TBranch        *b_decorr_B_DeepAK8Calc;   //!
   TBranch        *b_decorr_H_DeepAK8Calc;   //!
   TBranch        *b_decorr_J_DeepAK8Calc;   //!
   TBranch        *b_decorr_T_DeepAK8Calc;   //!
   TBranch        *b_decorr_W_DeepAK8Calc;   //!
   TBranch        *b_decorr_Z_DeepAK8Calc;   //!
   TBranch        *b_dnn_B_DeepAK8Calc;   //!
   TBranch        *b_dnn_B_BestCalc;   //!
   TBranch        *b_dnn_H_DeepAK8Calc;   //!
   TBranch        *b_dnn_Higgs_BestCalc;   //!
   TBranch        *b_dnn_J_DeepAK8Calc;   //!
   TBranch        *b_dnn_QCD_BestCalc;   //!
   TBranch        *b_dnn_T_DeepAK8Calc;   //!
   TBranch        *b_dnn_Top_BestCalc;   //!
   TBranch        *b_dnn_W_BestCalc;   //!
   TBranch        *b_dnn_W_DeepAK8Calc;   //!
   TBranch        *b_dnn_Z_BestCalc;   //!
   TBranch        *b_dnn_Z_DeepAK8Calc;   //!
   TBranch        *b_elAEff_MultiLepCalc;   //!
   TBranch        *b_elChIso_MultiLepCalc;   //!
   TBranch        *b_elD0_MultiLepCalc;   //!
   TBranch        *b_elDEtaSCTkAtVtx_MultiLepCalc;   //!
   TBranch        *b_elDPhiSCTkAtVtx_MultiLepCalc;   //!
   TBranch        *b_elDR03TkSumPt_MultiLepCalc;   //!
   TBranch        *b_elDZ_MultiLepCalc;   //!
   TBranch        *b_elDeta_MultiLepCalc;   //!
   TBranch        *b_elDphi_MultiLepCalc;   //!
   TBranch        *b_elDxy_MultiLepCalc;   //!
   TBranch        *b_elEcalPFClusterIso_MultiLepCalc;   //!
   TBranch        *b_elEnergy_MultiLepCalc;   //!
   TBranch        *b_elEtaVtx_MultiLepCalc;   //!
   TBranch        *b_elEta_MultiLepCalc;   //!
   TBranch        *b_elGen_Reco_dr_MultiLepCalc;   //!
   TBranch        *b_elHcalPFClusterIso_MultiLepCalc;   //!
   TBranch        *b_elHoE_MultiLepCalc;   //!
   TBranch        *b_elIsLoose_MultiLepCalc;   //!
   TBranch        *b_elIsMedium_MultiLepCalc;   //!
   TBranch        *b_elIsTight_MultiLepCalc;   //!
   TBranch        *b_elIsVeto_MultiLepCalc;   //!
   TBranch        *b_elMVAValue_iso_MultiLepCalc;   //!
   TBranch        *b_elMVAValue_MultiLepCalc;   //!
   TBranch        *b_elMatchedEnergy_MultiLepCalc;   //!
   TBranch        *b_elMatchedEta_MultiLepCalc;   //!
   TBranch        *b_elMatchedPhi_MultiLepCalc;   //!
   TBranch        *b_elMatchedPt_MultiLepCalc;   //!
   TBranch        *b_elMiniIso_MultiLepCalc;   //!
   TBranch        *b_elMother_energy_MultiLepCalc;   //!
   TBranch        *b_elMother_eta_MultiLepCalc;   //!
   TBranch        *b_elMother_phi_MultiLepCalc;   //!
   TBranch        *b_elMother_pt_MultiLepCalc;   //!
   TBranch        *b_elNhIso_MultiLepCalc;   //!
   TBranch        *b_elOoemoop_MultiLepCalc;   //!
   TBranch        *b_elPFEta_MultiLepCalc;   //!
   TBranch        *b_elPFPhi_MultiLepCalc;   //!
   TBranch        *b_elPhIso_MultiLepCalc;   //!
   TBranch        *b_elPhiVtx_MultiLepCalc;   //!
   TBranch        *b_elPhi_MultiLepCalc;   //!
   TBranch        *b_elPt_MultiLepCalc;   //!
   TBranch        *b_elRelIso_MultiLepCalc;   //!
   TBranch        *b_elRhoIso_MultiLepCalc;   //!
   TBranch        *b_elSCE_MultiLepCalc;   //!
   TBranch        *b_elSihih_MultiLepCalc;   //!
   TBranch        *b_et_BestCalc;   //!
   TBranch        *b_eta_BestCalc;   //!
   TBranch        *b_evtWeightsMC_MultiLepCalc;   //!
   TBranch        *b_genBSLEnergy_MultiLepCalc;   //!
   TBranch        *b_genBSLEta_MultiLepCalc;   //!
   TBranch        *b_genBSLPhi_MultiLepCalc;   //!
   TBranch        *b_genBSLPt_MultiLepCalc;   //!
   TBranch        *b_genEnergy_MultiLepCalc;   //!
   TBranch        *b_genEta_MultiLepCalc;   //!
   TBranch        *b_genJetEnergy_MultiLepCalc;   //!
   TBranch        *b_genJetEta_MultiLepCalc;   //!
   TBranch        *b_genJetPhi_MultiLepCalc;   //!
   TBranch        *b_genJetPt_MultiLepCalc;   //!
   TBranch        *b_genPhi_MultiLepCalc;   //!
   TBranch        *b_genPt_MultiLepCalc;   //!
   TBranch        *b_isotropyH_BestCalc;   //!
   TBranch        *b_isotropyW_BestCalc;   //!
   TBranch        *b_isotropyZ_BestCalc;   //!
   TBranch        *b_isotropytop_BestCalc;   //!
   TBranch        *b_m1234H_BestCalc;   //!
   TBranch        *b_m1234W_BestCalc;   //!
   TBranch        *b_m1234Z_BestCalc;   //!
   TBranch        *b_m1234_jet_BestCalc;   //!
   TBranch        *b_m1234top_BestCalc;   //!
   TBranch        *b_m12H_BestCalc;   //!
   TBranch        *b_m12W_BestCalc;   //!
   TBranch        *b_m12Z_BestCalc;   //!
   TBranch        *b_m12_jet_BestCalc;   //!
   TBranch        *b_m12top_BestCalc;   //!
   TBranch        *b_m13H_BestCalc;   //!
   TBranch        *b_m13W_BestCalc;   //!
   TBranch        *b_m13Z_BestCalc;   //!
   TBranch        *b_m13_jet_BestCalc;   //!
   TBranch        *b_m13top_BestCalc;   //!
   TBranch        *b_m23H_BestCalc;   //!
   TBranch        *b_m23W_BestCalc;   //!
   TBranch        *b_m23Z_BestCalc;   //!
   TBranch        *b_m23_jet_BestCalc;   //!
   TBranch        *b_m23top_BestCalc;   //!
   TBranch        *b_mass_BestCalc;   //!
   TBranch        *b_muChIso_MultiLepCalc;   //!
   TBranch        *b_muChi2_MultiLepCalc;   //!
   TBranch        *b_muDxy_MultiLepCalc;   //!
   TBranch        *b_muDz_MultiLepCalc;   //!
   TBranch        *b_muEnergy_MultiLepCalc;   //!
   TBranch        *b_muEta_MultiLepCalc;   //!
   TBranch        *b_muGIso_MultiLepCalc;   //!
   TBranch        *b_muGen_Reco_dr_MultiLepCalc;   //!
   TBranch        *b_muInnerEta_MultiLepCalc;   //!
   TBranch        *b_muInnerPhi_MultiLepCalc;   //!
   TBranch        *b_muInnerPt_MultiLepCalc;   //!
   TBranch        *b_muMatchedEnergy_MultiLepCalc;   //!
   TBranch        *b_muMatchedEta_MultiLepCalc;   //!
   TBranch        *b_muMatchedPhi_MultiLepCalc;   //!
   TBranch        *b_muMatchedPt_MultiLepCalc;   //!
   TBranch        *b_muMiniIsoDB_MultiLepCalc;   //!
   TBranch        *b_muMiniIso_MultiLepCalc;   //!
   TBranch        *b_muMother_energy_MultiLepCalc;   //!
   TBranch        *b_muMother_eta_MultiLepCalc;   //!
   TBranch        *b_muMother_phi_MultiLepCalc;   //!
   TBranch        *b_muMother_pt_MultiLepCalc;   //!
   TBranch        *b_muNhIso_MultiLepCalc;   //!
   TBranch        *b_muPhi_MultiLepCalc;   //!
   TBranch        *b_muPt_MultiLepCalc;   //!
   TBranch        *b_muPuIso_MultiLepCalc;   //!
   TBranch        *b_muRelIso_MultiLepCalc;   //!
   TBranch        *b_pzOverp_H_BestCalc;   //!
   TBranch        *b_pzOverp_W_BestCalc;   //!
   TBranch        *b_pzOverp_Z_BestCalc;   //!
   TBranch        *b_pzOverp_jet_BestCalc;   //!
   TBranch        *b_pzOverp_top_BestCalc;   //!
   TBranch        *b_q_BestCalc;   //!
   TBranch        *b_quarkEnergy_TpTpCalc;   //!
   TBranch        *b_quarkEta_TpTpCalc;   //!
   TBranch        *b_quarkPhi_TpTpCalc;   //!
   TBranch        *b_quarkPt_TpTpCalc;   //!
   TBranch        *b_sphericityH_BestCalc;   //!
   TBranch        *b_sphericityW_BestCalc;   //!
   TBranch        *b_sphericityZ_BestCalc;   //!
   TBranch        *b_sphericitytop_BestCalc;   //!
   TBranch        *b_tPrimeEnergy_TpTpCalc;   //!
   TBranch        *b_tPrimeEta_TpTpCalc;   //!
   TBranch        *b_tPrimeMass_TpTpCalc;   //!
   TBranch        *b_tPrimePhi_TpTpCalc;   //!
   TBranch        *b_tPrimePt_TpTpCalc;   //!
   TBranch        *b_tau21_BestCalc;   //!
   TBranch        *b_tau32_BestCalc;   //!
   TBranch        *b_theJetAK8CHSEta_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSPhi_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSPrunedMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSSoftDropMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSTau1_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSTau2_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHSTau3_JetSubCalc;   //!
   TBranch        *b_theJetAK8CSV_JetSubCalc;   //!
   TBranch        *b_theJetAK8DoubleB_JetSubCalc;   //!
   TBranch        *b_theJetAK8Energy_JetSubCalc;   //!
   TBranch        *b_theJetAK8Eta_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenDR_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8JetCharge_JetSubCalc;   //!
   TBranch        *b_theJetAK8Mass_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau1_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau2_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau3_JetSubCalc;   //!
   TBranch        *b_theJetAK8Phi_JetSubCalc;   //!
   TBranch        *b_theJetAK8Pt_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetBTag_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVb_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVbb_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVc_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSVudsg_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetDR_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetEta_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetPhi_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropCorr_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropRaw_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMRdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMRup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMSdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JMSup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDrop_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn2b1_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn2b2_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn3b1_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropn3b2_JetSubCalc;   //!
   TBranch        *b_theJetDeepCSVb_JetSubCalc;   //!
   TBranch        *b_theJetDeepCSVbb_JetSubCalc;   //!
   //TBranch        *b_theJetCSVc_JetSubCalc;   //!
   //TBranch        *b_theJetCSVudsg_JetSubCalc;   //!
   TBranch        *b_theJetEnergy_JetSubCalc;   //!
   TBranch        *b_theJetEta_JetSubCalc;   //!
   TBranch        *b_theJetPhi_JetSubCalc;   //!
   TBranch        *b_theJetPileupJetId_JetSubCalc;   //!
   TBranch        *b_theJetPt_JetSubCalc;   //!
   TBranch        *b_thrustH_BestCalc;   //!
   TBranch        *b_thrustW_BestCalc;   //!
   TBranch        *b_thrustZ_BestCalc;   //!
   TBranch        *b_thrusttop_BestCalc;   //!
   TBranch        *b_topEnergy_TTbarMassCalc;   //!
   TBranch        *b_topEta_TTbarMassCalc;   //!
   TBranch        *b_topMass_TTbarMassCalc;   //!
   TBranch        *b_topPhi_TTbarMassCalc;   //!
   TBranch        *b_topPt_TTbarMassCalc;   //!
   TBranch        *b_topWEnergy_TTbarMassCalc;   //!
   TBranch        *b_topWEta_TTbarMassCalc;   //!
   TBranch        *b_topWPhi_TTbarMassCalc;   //!
   TBranch        *b_topWPt_TTbarMassCalc;   //!
   TBranch        *b_topbEnergy_TTbarMassCalc;   //!
   TBranch        *b_topbEta_TTbarMassCalc;   //!
   TBranch        *b_topbPhi_TTbarMassCalc;   //!
   TBranch        *b_topbPt_TTbarMassCalc;   //!
   TBranch        *b_electron_hltfilters_MultiLepCalc;   //!
   TBranch        *b_muon_hltfilters_MultiLepCalc;   //!
   TBranch        *b_vsSelMCTriggersEl_MultiLepCalc;   //!
   TBranch        *b_vsSelMCTriggersMu_MultiLepCalc;   //!
   TBranch        *b_vsSelTriggersEl_MultiLepCalc;   //!
   TBranch        *b_vsSelTriggersMu_MultiLepCalc;   //!
 
   step1(TString inputFileName, TString outputFileName, TString treeName);
   virtual ~step1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   bool             applySF(bool& isTagged, float tag_SF, float tag_eff);
   double           GetBtagSF2016Medium_comb(shift Shift, double pt, double eta);
   double           GetCtagSF2016Medium_comb(shift Shift, double pt, double eta);
   double           GetLFSF2016Medium(shift Shift, double pt, double eta);
   double           GetBtagEfficiency(double pt);
   double           GetCtagEfficiency(double pt);
   double           GetMistagRate(double pt);
};

#endif

#ifdef step1_cxx
step1::step1(TString inputFileName, TString outputFileName, TString treeName) : inputTree(0), inputFile(0), outputFile(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.

//yiting's note
  isSig  = (inputFileName.Contains("prime") || inputFileName.Contains("X53") || inputFileName.Contains("ChargedHiggs_Hplus"));
  if(isSig){
    if(inputFileName.Contains("Tprime")) isTpTp = true;
    else if(inputFileName.Contains("Bprime")) isBpBp = true;
    else if(inputFileName.Contains("X53")) isXX = true;

    if(inputFileName.Contains("_M-700")) SigMass = 0; 
    else if(inputFileName.Contains("_M-800")) SigMass = 1;
    else if(inputFileName.Contains("_M-900")) SigMass = 2;
    else if(inputFileName.Contains("_M-1000")) SigMass = 3;
    else if(inputFileName.Contains("_M-1100")) {SigMass = 4; pileupIndex = 20;}
    else if(inputFileName.Contains("_M-1200")) {SigMass = 5; pileupIndex = 21;}
    else if(inputFileName.Contains("_M-1300")) {SigMass = 6; pileupIndex = 22;}
    else if(inputFileName.Contains("_M-1400")) {SigMass = 7; pileupIndex = 23;}
    else if(inputFileName.Contains("_M-1500")) {SigMass = 8; pileupIndex = 24;}
    else if(inputFileName.Contains("_M-1600")) {SigMass = 9; pileupIndex = 25;}
    else if(inputFileName.Contains("_M-1700")) {SigMass = 10; pileupIndex = 26;}
    else if(inputFileName.Contains("_M-1800")) {SigMass = 11; pileupIndex = 27;}
    else SigMass = -1;
  }  
  isMadgraphBkg = ((inputFileName.Contains("WJetsToLNu") || inputFileName.Contains("DYJetsToLL_M-50") || inputFileName.Contains("QCD")) && inputFileName.Contains("madgraph"));
  isTOP = (inputFileName.Contains("Mtt") || inputFileName.Contains("ST") || inputFileName.Contains("TTZ") || inputFileName.Contains("TTW") || inputFileName.Contains("TTTo"));
  isTT = (inputFileName.Contains("TT_Tune") || inputFileName.Contains("Mtt") || inputFileName.Contains("TTTo"));
  isSTt = inputFileName.Contains("ST_t-channel");
  isSTtW = inputFileName.Contains("ST_tW");
  isTTV = (inputFileName.Contains("TTZ") || inputFileName.Contains("TTW"));
  isVV = (inputFileName.Contains("WW_") || inputFileName.Contains("WZ_") || inputFileName.Contains("ZZ_"));
  isMC      = !inputFileName.Contains("Single");
  isSM = inputFileName.Contains("SingleMuon");
  isSE = inputFileName.Contains("SingleElectron");

  if(inputFileName.Contains("DYJets")) pileupIndex = 1;
  else if(inputFileName.Contains("QCD_HT1000")) pileupIndex = 2;
  else if(inputFileName.Contains("QCD_HT1500")) pileupIndex = 3;
  else if(inputFileName.Contains("QCD_HT2000")) pileupIndex = 4;
  else if(inputFileName.Contains("QCD_HT300")) pileupIndex = 5;
  else if(inputFileName.Contains("QCD_HT500")) pileupIndex = 6;
  else if(inputFileName.Contains("QCD_HT700")) pileupIndex = 7;
  else if(inputFileName.Contains("ST_s-channel")) pileupIndex = 8;
  else if(inputFileName.Contains("ST_t-channel_top")) pileupIndex = 9;
  else if(inputFileName.Contains("ST_t-channel_anti")) pileupIndex = 10;
  else if(inputFileName.Contains("ST_tW_top")) pileupIndex = 11;
  else if(inputFileName.Contains("ST_tW_anti")) pileupIndex = 12;
  else if(inputFileName.Contains("TT_Mtt-1000")) pileupIndex = 13;
  else if(inputFileName.Contains("TTToSemi")) pileupIndex = 14;
  else if(inputFileName.Contains("TTTo2L2Nu")) pileupIndex = 15;
  else if(inputFileName.Contains("TT_Mtt-700")) pileupIndex = 16;
  else if(inputFileName.Contains("TTWJetsToLNu")) pileupIndex = 17;
  else if(inputFileName.Contains("TTZToLL")) pileupIndex = 18;
  else if(inputFileName.Contains("TTToHadronic")) pileupIndex = 19;
  else if(inputFileName.Contains("WJetsToLNu_HT-1200")) pileupIndex = 28;
  else if(inputFileName.Contains("WJetsToLNu_HT-200")) pileupIndex = 29;
  else if(inputFileName.Contains("WJetsToLNu_HT-2500")) pileupIndex = 30;
  else if(inputFileName.Contains("WJetsToLNu_HT-400")) pileupIndex = 31;
  else if(inputFileName.Contains("WJetsToLNu_HT-600")) pileupIndex = 32;
  else if(inputFileName.Contains("WJetsToLNu_HT-800")) pileupIndex = 32;

  isTTincMtt0to700    = outputFileName.Contains("Mtt0to700");
  isTTincMtt0to1000   = outputFileName.Contains("Mtt0to1000");
  isTTincMtt700to1000 = outputFileName.Contains("Mtt700to1000");
  isTTincMtt1000toInf = outputFileName.Contains("Mtt1000toInf");
  outBWBW = outputFileName.Contains("BWBW");
  outTZBW = outputFileName.Contains("TZBW");
  outTHBW = outputFileName.Contains("THBW");
  outTZTH = outputFileName.Contains("TZTH");
  outTZTZ = outputFileName.Contains("TZTZ");
  outTHTH = outputFileName.Contains("THTH");
  outTWTW = outputFileName.Contains("TWTW");
  outBZTW = outputFileName.Contains("BZTW");
  outBHTW = outputFileName.Contains("BHTW");
  outBZBH = outputFileName.Contains("BZBH");
  outBZBZ = outputFileName.Contains("BZBZ");
  outBHBH = outputFileName.Contains("BHBH");

  std::cout<<"Opening file: "<<inputFileName<<std::endl;
  inputFile=TFile::Open(inputFileName);
  std::cout<<treeName<<std::endl;
//inputTree=(TTree*)inputFile->Get("ljmet_JERup/ljmet_JERup");
  inputTree=(TTree*)inputFile->Get(treeName);
  if(inputTree->GetEntries()==0) std::cout<<"WARNING! Found 0 events in the tree!!!!"<<std::endl;;
  
  outputFile=new TFile(outputFileName,"RECREATE");   
  
  Init(inputTree);
}

step1::~step1()
{
   if (!inputTree) return;
   delete inputTree->GetCurrentFile();
}

Int_t step1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!inputTree) return 0;
   return inputTree->GetEntry(entry);
}
Long64_t step1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!inputTree) return -5;
   Long64_t centry = inputTree->LoadTree(entry);
   if (centry <= 0) return centry;
   if (inputTree->GetTreeNumber() != fCurrent) {
      fCurrent = inputTree->GetTreeNumber();
      Notify();
   }
   return centry;
}

void step1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   AK4JetBTag_bSFdn_MultiLepCalc = 0;
   AK4JetBTag_bSFup_MultiLepCalc = 0;
   AK4JetBTag_lSFdn_MultiLepCalc = 0;
   AK4JetBTag_lSFup_MultiLepCalc = 0;
   AK4JetBTag_MultiLepCalc = 0;
   AK4JetFlav_MultiLepCalc = 0;
   HadronicVHtID_JetSubCalc = 0;
   HadronicVHtStatus_JetSubCalc = 0;
   HdecayID_TpTpCalc = 0;
   HdecayIndex_TpTpCalc = 0;
   LHEweightids_MultiLepCalc = 0;
   LeptonID_TpTpCalc = 0;
   LeptonParentID_TpTpCalc = 0;
   WdecayID_TpTpCalc = 0;
   WdecayIndex_TpTpCalc = 0;
   ZdecayID_TpTpCalc = 0;
   ZdecayIndex_TpTpCalc = 0;
   allTopsID_TTbarMassCalc = 0;
   allTopsStatus_TTbarMassCalc = 0;
   bPrimeID_TpTpCalc = 0;
   bPrimeNDaughters_TpTpCalc = 0;
   bPrimeStatus_TpTpCalc = 0;
   bosonID_TpTpCalc = 0;
   maxProb_JetSubCalc = 0;
   dnn_largest_BestCalc = 0;
   dnn_largest_DeepAK8Calc = 0;
   decorr_largest_DeepAK8Calc = 0;
   elChargeConsistent_MultiLepCalc = 0;
   elCharge_MultiLepCalc = 0;
   elCtfCharge_MultiLepCalc = 0;
   elGsfCharge_MultiLepCalc = 0;
   elIsEBEE_MultiLepCalc = 0;
   elIsMVALooseIso_MultiLepCalc = 0;
   elIsMVALoose_MultiLepCalc = 0;
   elIsMVATight80_MultiLepCalc = 0;
   elIsMVATight90_MultiLepCalc = 0;
   elIsMVATightIso80_MultiLepCalc = 0;
   elIsMVATightIso90_MultiLepCalc = 0;
   elMHits_MultiLepCalc = 0;
   elMatched_MultiLepCalc = 0;
   elMother_id_MultiLepCalc = 0;
   elMother_status_MultiLepCalc = 0;
   elNotConversion_MultiLepCalc = 0;
   elNumberOfMothers_MultiLepCalc = 0;
   elPdgId_MultiLepCalc = 0;
   elScPixCharge_MultiLepCalc = 0;
   elStatus_MultiLepCalc = 0;
   elVtxFitConv_MultiLepCalc = 0;
   electron_1_hltmatched_MultiLepCalc = 0;
   genBSLID_MultiLepCalc = 0;
   genID_MultiLepCalc = 0;
   genIndex_MultiLepCalc = 0;
   genMotherID_MultiLepCalc = 0;
   genMotherIndex_MultiLepCalc = 0;
   genStatus_MultiLepCalc = 0;
   muCharge_MultiLepCalc = 0;
   muGlobal_MultiLepCalc = 0;
   muIsGlobalHighPt_MultiLepCalc = 0;
   muIsLoose_MultiLepCalc = 0;
   muIsMediumPrompt_MultiLepCalc = 0;
   muIsMedium_MultiLepCalc = 0;
   muIsMiniIsoLoose_MultiLepCalc = 0;
   muIsMiniIsoMedium_MultiLepCalc = 0;
   muIsMiniIsoTight_MultiLepCalc = 0;
   muIsMiniIsoVeryTight_MultiLepCalc = 0;
   muIsMvaLoose_MultiLepCalc = 0;
   muIsMvaMedium_MultiLepCalc = 0;
   muIsMvaTight_MultiLepCalc = 0;
   muIsTight_MultiLepCalc = 0;
   muIsTrkHighPt_MultiLepCalc = 0;
   muMatched_MultiLepCalc = 0;
   muMother_id_MultiLepCalc = 0;
   muMother_status_MultiLepCalc = 0;
   muNMatchedStations_MultiLepCalc = 0;
   muNTrackerLayers_MultiLepCalc = 0;
   muNValMuHits_MultiLepCalc = 0;
   muNValPixelHits_MultiLepCalc = 0;
   muNumberOfMothers_MultiLepCalc = 0;
   muPdgId_MultiLepCalc = 0;
   muStatus_MultiLepCalc = 0;
   muon_1_hltmatched_MultiLepCalc = 0;
   quarkID_TpTpCalc = 0;
   tPrimeID_TpTpCalc = 0;
   tPrimeNDaughters_TpTpCalc = 0;
   tPrimeStatus_TpTpCalc = 0;
   theJetAK8SDSubjetHFlav_JetSubCalc = 0;
   theJetAK8SDSubjetIndex_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVL_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc = 0;
   theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc = 0;
   theJetAK8SDSubjetSize_JetSubCalc = 0;
   theJetAK8nDaughters_JetSubCalc = 0;
   theJetBTag_JetSubCalc = 0;
   theJetBTag_bSFdn_JetSubCalc = 0;
   theJetBTag_bSFup_JetSubCalc = 0;
   theJetBTag_lSFdn_JetSubCalc = 0;
   theJetBTag_lSFup_JetSubCalc = 0;
   theJetHFlav_JetSubCalc = 0;
   theJetPFlav_JetSubCalc = 0;
   theJetnDaughters_JetSubCalc = 0;
   topID_TTbarMassCalc = 0;
   topWID_TTbarMassCalc = 0;
   topbID_TTbarMassCalc = 0;
   viSelMCTriggersEl_MultiLepCalc = 0;
   viSelMCTriggersMu_MultiLepCalc = 0;
   viSelTriggersEl_MultiLepCalc = 0;
   viSelTriggersMu_MultiLepCalc = 0;
   AK4JetBDeepCSVb_MultiLepCalc = 0;
   AK4JetBDeepCSVbb_MultiLepCalc = 0;
   AK4JetBDeepCSVc_MultiLepCalc = 0;
   AK4JetBDeepCSVudsg_MultiLepCalc = 0;
   AK4JetBDisc_MultiLepCalc = 0;
   AK4JetEnergy_MultiLepCalc = 0;
   AK4JetEta_MultiLepCalc = 0;
   AK4JetPhi_MultiLepCalc = 0;
   AK4JetPt_MultiLepCalc = 0;
   AK8JetCSV_BestCalc = 0;
   AK8JetCSV_MultiLepCalc = 0;
   AK8JetEnergy_BestCalc = 0;
   AK8JetEnergy_MultiLepCalc = 0;
   AK8JetEta_BestCalc = 0;
   AK8JetEta_MultiLepCalc = 0;
   AK8JetPhi_BestCalc = 0;
   AK8JetPhi_MultiLepCalc = 0;
   AK8JetPt_BestCalc = 0;
   AK8JetPt_MultiLepCalc = 0;
   FWmoment1H_BestCalc = 0;
   FWmoment1W_BestCalc = 0;
   FWmoment1Z_BestCalc = 0;
   FWmoment1top_BestCalc = 0;
   FWmoment2H_BestCalc = 0;
   FWmoment2W_BestCalc = 0;
   FWmoment2Z_BestCalc = 0;
   FWmoment2top_BestCalc = 0;
   FWmoment3H_BestCalc = 0;
   FWmoment3W_BestCalc = 0;
   FWmoment3Z_BestCalc = 0;
   FWmoment3top_BestCalc = 0;
   FWmoment4H_BestCalc = 0;
   FWmoment4W_BestCalc = 0;
   FWmoment4Z_BestCalc = 0;
   FWmoment4top_BestCalc = 0;
   HadronicVHtD0E_JetSubCalc = 0;
   HadronicVHtD0Eta_JetSubCalc = 0;
   HadronicVHtD0Phi_JetSubCalc = 0;
   HadronicVHtD0Pt_JetSubCalc = 0;
   HadronicVHtD1E_JetSubCalc = 0;
   HadronicVHtD1Eta_JetSubCalc = 0;
   HadronicVHtD1Phi_JetSubCalc = 0;
   HadronicVHtD1Pt_JetSubCalc = 0;
   HadronicVHtD2E_JetSubCalc = 0;
   HadronicVHtD2Eta_JetSubCalc = 0;
   HadronicVHtD2Phi_JetSubCalc = 0;
   HadronicVHtD2Pt_JetSubCalc = 0;
   HadronicVHtEnergy_JetSubCalc = 0;
   HadronicVHtEta_JetSubCalc = 0;
   HadronicVHtPhi_JetSubCalc = 0;
   HadronicVHtPt_JetSubCalc = 0;
   HdecayEnergy_TpTpCalc = 0;
   HdecayEta_TpTpCalc = 0;
   HdecayPhi_TpTpCalc = 0;
   HdecayPt_TpTpCalc = 0;
   LHEweights_MultiLepCalc = 0;
   LeptonEnergy_TpTpCalc = 0;
   LeptonEta_TpTpCalc = 0;
   LeptonPhi_TpTpCalc = 0;
   LeptonPt_TpTpCalc = 0;
   Njets_H_BestCalc = 0;
   Njets_W_BestCalc = 0;
   Njets_Z_BestCalc = 0;
   Njets_jet_BestCalc = 0;
   Njets_orig_BestCalc = 0;
   Njets_top_BestCalc = 0;
   SDmass_BestCalc = 0;
   WdecayEnergy_TpTpCalc = 0;
   WdecayEta_TpTpCalc = 0;
   WdecayPhi_TpTpCalc = 0;
   WdecayPt_TpTpCalc = 0;
   ZdecayEnergy_TpTpCalc = 0;
   ZdecayEta_TpTpCalc = 0;
   ZdecayPhi_TpTpCalc = 0;
   ZdecayPt_TpTpCalc = 0;
   allTopsEnergy_TTbarMassCalc = 0;
   allTopsEta_TTbarMassCalc = 0;
   allTopsPhi_TTbarMassCalc = 0;
   allTopsPt_TTbarMassCalc = 0;
   aplanarityH_BestCalc = 0;
   aplanarityW_BestCalc = 0;
   aplanarityZ_BestCalc = 0;
   aplanaritytop_BestCalc = 0;
   bDisc1_BestCalc = 0;
   bDisc2_BestCalc = 0;
   bDisc_BestCalc = 0;
   bPrimeEnergy_TpTpCalc = 0;
   bPrimeEta_TpTpCalc = 0;
   bPrimeMass_TpTpCalc = 0;
   bPrimePhi_TpTpCalc = 0;
   bPrimePt_TpTpCalc = 0;
   bosonEnergy_TpTpCalc = 0;
   bosonEta_TpTpCalc = 0;
   bosonPhi_TpTpCalc = 0;
   bosonPt_TpTpCalc = 0;
   decorr_B_DeepAK8Calc = 0;
   decorr_H_DeepAK8Calc = 0;
   decorr_J_DeepAK8Calc = 0;
   decorr_T_DeepAK8Calc = 0;
   decorr_W_DeepAK8Calc = 0;
   decorr_Z_DeepAK8Calc = 0;
   dnn_B_DeepAK8Calc = 0;
   dnn_B_BestCalc = 0;
   dnn_H_DeepAK8Calc = 0;
   dnn_Higgs_BestCalc = 0;
   dnn_J_DeepAK8Calc = 0;
   dnn_QCD_BestCalc = 0;
   dnn_T_DeepAK8Calc = 0;
   dnn_Top_BestCalc = 0;
   dnn_W_BestCalc = 0;
   dnn_W_DeepAK8Calc = 0;
   dnn_Z_BestCalc = 0;
   dnn_Z_DeepAK8Calc = 0;
   elAEff_MultiLepCalc = 0;
   elChIso_MultiLepCalc = 0;
   elD0_MultiLepCalc = 0;
   elDEtaSCTkAtVtx_MultiLepCalc = 0;
   elDPhiSCTkAtVtx_MultiLepCalc = 0;
   elDR03TkSumPt_MultiLepCalc = 0;
   elDZ_MultiLepCalc = 0;
   elDeta_MultiLepCalc = 0;
   elDphi_MultiLepCalc = 0;
   elDxy_MultiLepCalc = 0;
   elEcalPFClusterIso_MultiLepCalc = 0;
   elEnergy_MultiLepCalc = 0;
   elEtaVtx_MultiLepCalc = 0;
   elEta_MultiLepCalc = 0;
   elGen_Reco_dr_MultiLepCalc = 0;
   elHcalPFClusterIso_MultiLepCalc = 0;
   elHoE_MultiLepCalc = 0;
   elIsLoose_MultiLepCalc = 0;
   elIsMedium_MultiLepCalc = 0;
   elIsTight_MultiLepCalc = 0;
   elIsVeto_MultiLepCalc = 0;
   elMVAValue_iso_MultiLepCalc = 0;
   elMVAValue_MultiLepCalc = 0;
   elMatchedEnergy_MultiLepCalc = 0;
   elMatchedEta_MultiLepCalc = 0;
   elMatchedPhi_MultiLepCalc = 0;
   elMatchedPt_MultiLepCalc = 0;
   elMiniIso_MultiLepCalc = 0;
   elMother_energy_MultiLepCalc = 0;
   elMother_eta_MultiLepCalc = 0;
   elMother_phi_MultiLepCalc = 0;
   elMother_pt_MultiLepCalc = 0;
   elNhIso_MultiLepCalc = 0;
   elOoemoop_MultiLepCalc = 0;
   elPFEta_MultiLepCalc = 0;
   elPFPhi_MultiLepCalc = 0;
   elPhIso_MultiLepCalc = 0;
   elPhiVtx_MultiLepCalc = 0;
   elPhi_MultiLepCalc = 0;
   elPt_MultiLepCalc = 0;
   elRelIso_MultiLepCalc = 0;
   elRhoIso_MultiLepCalc = 0;
   elSCE_MultiLepCalc = 0;
   elSihih_MultiLepCalc = 0;
   et_BestCalc = 0;
   eta_BestCalc = 0;
   evtWeightsMC_MultiLepCalc = 0;
   genBSLEnergy_MultiLepCalc = 0;
   genBSLEta_MultiLepCalc = 0;
   genBSLPhi_MultiLepCalc = 0;
   genBSLPt_MultiLepCalc = 0;
   genEnergy_MultiLepCalc = 0;
   genEta_MultiLepCalc = 0;
   genJetEnergy_MultiLepCalc = 0;
   genJetEta_MultiLepCalc = 0;
   genJetPhi_MultiLepCalc = 0;
   genJetPt_MultiLepCalc = 0;
   genPhi_MultiLepCalc = 0;
   genPt_MultiLepCalc = 0;
   isotropyH_BestCalc = 0;
   isotropyW_BestCalc = 0;
   isotropyZ_BestCalc = 0;
   isotropytop_BestCalc = 0;
   m1234H_BestCalc = 0;
   m1234W_BestCalc = 0;
   m1234Z_BestCalc = 0;
   m1234_jet_BestCalc = 0;
   m1234top_BestCalc = 0;
   m12H_BestCalc = 0;
   m12W_BestCalc = 0;
   m12Z_BestCalc = 0;
   m12_jet_BestCalc = 0;
   m12top_BestCalc = 0;
   m13H_BestCalc = 0;
   m13W_BestCalc = 0;
   m13Z_BestCalc = 0;
   m13_jet_BestCalc = 0;
   m13top_BestCalc = 0;
   m23H_BestCalc = 0;
   m23W_BestCalc = 0;
   m23Z_BestCalc = 0;
   m23_jet_BestCalc = 0;
   m23top_BestCalc = 0;
   mass_BestCalc = 0;
   muChIso_MultiLepCalc = 0;
   muChi2_MultiLepCalc = 0;
   muDxy_MultiLepCalc = 0;
   muDz_MultiLepCalc = 0;
   muEnergy_MultiLepCalc = 0;
   muEta_MultiLepCalc = 0;
   muGIso_MultiLepCalc = 0;
   muGen_Reco_dr_MultiLepCalc = 0;
   muInnerEta_MultiLepCalc = 0;
   muInnerPhi_MultiLepCalc = 0;
   muInnerPt_MultiLepCalc = 0;
   muMatchedEnergy_MultiLepCalc = 0;
   muMatchedEta_MultiLepCalc = 0;
   muMatchedPhi_MultiLepCalc = 0;
   muMatchedPt_MultiLepCalc = 0;
   muMiniIsoDB_MultiLepCalc = 0;
   muMiniIso_MultiLepCalc = 0;
   muMother_energy_MultiLepCalc = 0;
   muMother_eta_MultiLepCalc = 0;
   muMother_phi_MultiLepCalc = 0;
   muMother_pt_MultiLepCalc = 0;
   muNhIso_MultiLepCalc = 0;
   muPhi_MultiLepCalc = 0;
   muPt_MultiLepCalc = 0;
   muPuIso_MultiLepCalc = 0;
   muRelIso_MultiLepCalc = 0;
   pzOverp_H_BestCalc = 0;
   pzOverp_W_BestCalc = 0;
   pzOverp_Z_BestCalc = 0;
   pzOverp_jet_BestCalc = 0;
   pzOverp_top_BestCalc = 0;
   q_BestCalc = 0;
   quarkEnergy_TpTpCalc = 0;
   quarkEta_TpTpCalc = 0;
   quarkPhi_TpTpCalc = 0;
   quarkPt_TpTpCalc = 0;
   sphericityH_BestCalc = 0;
   sphericityW_BestCalc = 0;
   sphericityZ_BestCalc = 0;
   sphericitytop_BestCalc = 0;
   tPrimeEnergy_TpTpCalc = 0;
   tPrimeEta_TpTpCalc = 0;
   tPrimeMass_TpTpCalc = 0;
   tPrimePhi_TpTpCalc = 0;
   tPrimePt_TpTpCalc = 0;
   tau21_BestCalc = 0;
   tau32_BestCalc = 0;
   theJetAK8CHSEta_JetSubCalc = 0;
   theJetAK8CHSMass_JetSubCalc = 0;
   theJetAK8CHSPhi_JetSubCalc = 0;
   theJetAK8CHSPrunedMass_JetSubCalc = 0;
   theJetAK8CHSPt_JetSubCalc = 0;
   theJetAK8CHSSoftDropMass_JetSubCalc = 0;
   theJetAK8CHSTau1_JetSubCalc = 0;
   theJetAK8CHSTau2_JetSubCalc = 0;
   theJetAK8CHSTau3_JetSubCalc = 0;
   theJetAK8CSV_JetSubCalc = 0;
   theJetAK8DoubleB_JetSubCalc = 0;
   theJetAK8Energy_JetSubCalc = 0;
   theJetAK8Eta_JetSubCalc = 0;
   theJetAK8GenDR_JetSubCalc = 0;
   theJetAK8GenMass_JetSubCalc = 0;
   theJetAK8GenPt_JetSubCalc = 0;
   theJetAK8JetCharge_JetSubCalc = 0;
   theJetAK8Mass_JetSubCalc = 0;
   theJetAK8NjettinessTau1_JetSubCalc = 0;
   theJetAK8NjettinessTau2_JetSubCalc = 0;
   theJetAK8NjettinessTau3_JetSubCalc = 0;
   theJetAK8Phi_JetSubCalc = 0;
   theJetAK8Pt_JetSubCalc = 0;
   theJetAK8SDSubjetBTag_JetSubCalc = 0;
   theJetAK8SDSubjetCSVb_JetSubCalc = 0;
   theJetAK8SDSubjetCSVbb_JetSubCalc = 0;
   theJetAK8SDSubjetCSVc_JetSubCalc = 0;
   theJetAK8SDSubjetCSVudsg_JetSubCalc = 0;
   theJetAK8SDSubjetDR_JetSubCalc = 0;
   theJetAK8SDSubjetEta_JetSubCalc = 0;
   theJetAK8SDSubjetMass_JetSubCalc = 0;
   theJetAK8SDSubjetPhi_JetSubCalc = 0;
   theJetAK8SDSubjetPt_JetSubCalc = 0;
   theJetAK8SoftDropCorr_JetSubCalc = 0;
   theJetAK8SoftDropRaw_JetSubCalc = 0;
   theJetAK8SoftDrop_JMRdn_JetSubCalc = 0;
   theJetAK8SoftDrop_JMRup_JetSubCalc = 0;
   theJetAK8SoftDrop_JMSdn_JetSubCalc = 0;
   theJetAK8SoftDrop_JMSup_JetSubCalc = 0;
   theJetAK8SoftDrop_JetSubCalc = 0;
   theJetAK8SoftDropn2b1_JetSubCalc = 0;
   theJetAK8SoftDropn2b2_JetSubCalc = 0;
   theJetAK8SoftDropn3b1_JetSubCalc = 0;
   theJetAK8SoftDropn3b2_JetSubCalc = 0;
   theJetDeepCSVb_JetSubCalc = 0;
   theJetDeepCSVbb_JetSubCalc = 0;
   //theJetCSVc_JetSubCalc = 0;
   //theJetCSVudsg_JetSubCalc = 0;
   theJetEnergy_JetSubCalc = 0;
   theJetEta_JetSubCalc = 0;
   theJetPhi_JetSubCalc = 0;
   theJetPileupJetId_JetSubCalc = 0;
   theJetPt_JetSubCalc = 0;
   thrustH_BestCalc = 0;
   thrustW_BestCalc = 0;
   thrustZ_BestCalc = 0;
   thrusttop_BestCalc = 0;
   topEnergy_TTbarMassCalc = 0;
   topEta_TTbarMassCalc = 0;
   topMass_TTbarMassCalc = 0;
   topPhi_TTbarMassCalc = 0;
   topPt_TTbarMassCalc = 0;
   topWEnergy_TTbarMassCalc = 0;
   topWEta_TTbarMassCalc = 0;
   topWPhi_TTbarMassCalc = 0;
   topWPt_TTbarMassCalc = 0;
   topbEnergy_TTbarMassCalc = 0;
   topbEta_TTbarMassCalc = 0;
   topbPhi_TTbarMassCalc = 0;
   topbPt_TTbarMassCalc = 0;
   electron_hltfilters_MultiLepCalc = 0;
   muon_hltfilters_MultiLepCalc = 0;
   vsSelMCTriggersEl_MultiLepCalc = 0;
   vsSelMCTriggersMu_MultiLepCalc = 0;
   vsSelTriggersEl_MultiLepCalc = 0;
   vsSelTriggersMu_MultiLepCalc = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   inputTree = tree;
   fCurrent = -1;
   inputTree->SetMakeClass(1);

   inputTree->SetBranchAddress("flagBadMu_MultiLepCalc", &flagBadMu_MultiLepCalc, &b_flagBadMu_MultiLepCalc);
   inputTree->SetBranchAddress("flagDupMu_MultiLepCalc", &flagDupMu_MultiLepCalc, &b_flagDupMu_MultiLepCalc);
   inputTree->SetBranchAddress("isBHBH_TpTpCalc", &isBHBH_TpTpCalc, &b_isBHBH_TpTpCalc);
   inputTree->SetBranchAddress("isBHTW_TpTpCalc", &isBHTW_TpTpCalc, &b_isBHTW_TpTpCalc);
   inputTree->SetBranchAddress("isBWBW_TpTpCalc", &isBWBW_TpTpCalc, &b_isBWBW_TpTpCalc);
   inputTree->SetBranchAddress("isBZBH_TpTpCalc", &isBZBH_TpTpCalc, &b_isBZBH_TpTpCalc);
   inputTree->SetBranchAddress("isBZBZ_TpTpCalc", &isBZBZ_TpTpCalc, &b_isBZBZ_TpTpCalc);
   inputTree->SetBranchAddress("isBZTW_TpTpCalc", &isBZTW_TpTpCalc, &b_isBZTW_TpTpCalc);
   inputTree->SetBranchAddress("isTHBW_TpTpCalc", &isTHBW_TpTpCalc, &b_isTHBW_TpTpCalc);
   inputTree->SetBranchAddress("isTHTH_TpTpCalc", &isTHTH_TpTpCalc, &b_isTHTH_TpTpCalc);
   inputTree->SetBranchAddress("isTWTW_TpTpCalc", &isTWTW_TpTpCalc, &b_isTWTW_TpTpCalc);
   inputTree->SetBranchAddress("isTZBW_TpTpCalc", &isTZBW_TpTpCalc, &b_isTZBW_TpTpCalc);
   inputTree->SetBranchAddress("isTZTH_TpTpCalc", &isTZTH_TpTpCalc, &b_isTZTH_TpTpCalc);
   inputTree->SetBranchAddress("isTZTZ_TpTpCalc", &isTZTZ_TpTpCalc, &b_isTZTZ_TpTpCalc);
   inputTree->SetBranchAddress("isTau_MultiLepCalc", &isTau_MultiLepCalc, &b_isTau_MultiLepCalc);
   inputTree->SetBranchAddress("NLeptonDecays_TpTpCalc", &NLeptonDecays_TpTpCalc, &b_NLeptonDecays_TpTpCalc);
   inputTree->SetBranchAddress("NPartonsfromHEPUEP_MultiLepCalc", &NPartonsfromHEPUEP_MultiLepCalc, &b_NPartonsfromHEPUEP_MultiLepCalc);
   inputTree->SetBranchAddress("dataE_MultiLepCalc", &dataE_MultiLepCalc, &b_dataE_MultiLepCalc);
   inputTree->SetBranchAddress("dataM_MultiLepCalc", &dataM_MultiLepCalc, &b_dataM_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLID_MultiLepCalc", &genTDLID_MultiLepCalc, &b_genTDLID_MultiLepCalc);
   inputTree->SetBranchAddress("lumi_CommonCalc", &lumi_CommonCalc, &b_lumi_CommonCalc);
   inputTree->SetBranchAddress("nAllJets_CommonCalc", &nAllJets_CommonCalc, &b_nAllJets_CommonCalc);
   inputTree->SetBranchAddress("nLooseMuons_CommonCalc", &nLooseMuons_CommonCalc, &b_nLooseMuons_CommonCalc);
   inputTree->SetBranchAddress("nPV_MultiLepCalc", &nPV_MultiLepCalc, &b_nPV_MultiLepCalc);
   inputTree->SetBranchAddress("nPileupInteractions_MultiLepCalc", &nPileupInteractions_MultiLepCalc, &b_nPileupInteractions_MultiLepCalc);
   inputTree->SetBranchAddress("nSelBtagJets_CommonCalc", &nSelBtagJets_CommonCalc, &b_nSelBtagJets_CommonCalc);
   inputTree->SetBranchAddress("nSelElectrons_CommonCalc", &nSelElectrons_CommonCalc, &b_nSelElectrons_CommonCalc);
   inputTree->SetBranchAddress("nSelJets_CommonCalc", &nSelJets_CommonCalc, &b_nSelJets_CommonCalc);
   inputTree->SetBranchAddress("nTightMuons_CommonCalc", &nTightMuons_CommonCalc, &b_nTightMuons_CommonCalc);
   inputTree->SetBranchAddress("nTrueInteractions_MultiLepCalc", &nTrueInteractions_MultiLepCalc, &b_nTrueInteractions_MultiLepCalc);
   inputTree->SetBranchAddress("run_CommonCalc", &run_CommonCalc, &b_run_CommonCalc);
   inputTree->SetBranchAddress("event_CommonCalc", &event_CommonCalc, &b_event_CommonCalc);
   inputTree->SetBranchAddress("AK4HT_MultiLepCalc", &AK4HT_MultiLepCalc, &b_AK4HT_MultiLepCalc);
   inputTree->SetBranchAddress("HTfromHEPUEP_MultiLepCalc", &HTfromHEPUEP_MultiLepCalc, &b_HTfromHEPUEP_MultiLepCalc);
   inputTree->SetBranchAddress("L1NonPrefiringProbDown_CommonCalc", &L1NonPrefiringProbDown_CommonCalc, &b_L1NonPrefiringProbDown_CommonCalc);
   inputTree->SetBranchAddress("L1NonPrefiringProbUp_CommonCalc", &L1NonPrefiringProbUp_CommonCalc, &b_L1NonPrefiringProbUp_CommonCalc);
   inputTree->SetBranchAddress("L1NonPrefiringProb_CommonCalc", &L1NonPrefiringProb_CommonCalc, &b_L1NonPrefiringProb_CommonCalc);
   inputTree->SetBranchAddress("LHEweightorig_MultiLepCalc", &LHEweightorig_MultiLepCalc, &b_LHEweightorig_MultiLepCalc);
   inputTree->SetBranchAddress("MCWeight_MultiLepCalc", &MCWeight_MultiLepCalc, &b_MCWeight_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerdn_phi_MultiLepCalc", &corr_met_jerdn_phi_MultiLepCalc, &b_corr_met_jerdn_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerdn_MultiLepCalc", &corr_met_jerdn_MultiLepCalc, &b_corr_met_jerdn_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerup_phi_MultiLepCalc", &corr_met_jerup_phi_MultiLepCalc, &b_corr_met_jerup_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jerup_MultiLepCalc", &corr_met_jerup_MultiLepCalc, &b_corr_met_jerup_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesdn_phi_MultiLepCalc", &corr_met_jesdn_phi_MultiLepCalc, &b_corr_met_jesdn_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesdn_MultiLepCalc", &corr_met_jesdn_MultiLepCalc, &b_corr_met_jesdn_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesup_phi_MultiLepCalc", &corr_met_jesup_phi_MultiLepCalc, &b_corr_met_jesup_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_jesup_MultiLepCalc", &corr_met_jesup_MultiLepCalc, &b_corr_met_jesup_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_phi_MultiLepCalc", &corr_met_phi_MultiLepCalc, &b_corr_met_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_met_MultiLepCalc", &corr_met_MultiLepCalc, &b_corr_met_MultiLepCalc);
   inputTree->SetBranchAddress("corr_metnohf_phi_MultiLepCalc", &corr_metnohf_phi_MultiLepCalc, &b_corr_metnohf_phi_MultiLepCalc);
   inputTree->SetBranchAddress("corr_metnohf_MultiLepCalc", &corr_metnohf_MultiLepCalc, &b_corr_metnohf_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLEnergy_MultiLepCalc", &genTDLEnergy_MultiLepCalc, &b_genTDLEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLEta_MultiLepCalc", &genTDLEta_MultiLepCalc, &b_genTDLEta_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLPhi_MultiLepCalc", &genTDLPhi_MultiLepCalc, &b_genTDLPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genTDLPt_MultiLepCalc", &genTDLPt_MultiLepCalc, &b_genTDLPt_MultiLepCalc);
   inputTree->SetBranchAddress("met_phi_MultiLepCalc", &met_phi_MultiLepCalc, &b_met_phi_MultiLepCalc);
   inputTree->SetBranchAddress("met_MultiLepCalc", &met_MultiLepCalc, &b_met_MultiLepCalc);
   inputTree->SetBranchAddress("metnohf_phi_MultiLepCalc", &metnohf_phi_MultiLepCalc, &b_metnohf_phi_MultiLepCalc);
   inputTree->SetBranchAddress("metnohf_MultiLepCalc", &metnohf_MultiLepCalc, &b_metnohf_MultiLepCalc);
   inputTree->SetBranchAddress("theJetHT_JetSubCalc", &theJetHT_JetSubCalc, &b_theJetHT_JetSubCalc);
   inputTree->SetBranchAddress("theJetLeadPt_JetSubCalc", &theJetLeadPt_JetSubCalc, &b_theJetLeadPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetSubLeadPt_JetSubCalc", &theJetSubLeadPt_JetSubCalc, &b_theJetSubLeadPt_JetSubCalc);
   inputTree->SetBranchAddress("ttbarMass_TTbarMassCalc", &ttbarMass_TTbarMassCalc, &b_ttbarMass_TTbarMassCalc);
   inputTree->SetBranchAddress("AK4JetBTag_bSFdn_MultiLepCalc", &AK4JetBTag_bSFdn_MultiLepCalc, &b_AK4JetBTag_bSFdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_bSFup_MultiLepCalc", &AK4JetBTag_bSFup_MultiLepCalc, &b_AK4JetBTag_bSFup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_lSFdn_MultiLepCalc", &AK4JetBTag_lSFdn_MultiLepCalc, &b_AK4JetBTag_lSFdn_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_lSFup_MultiLepCalc", &AK4JetBTag_lSFup_MultiLepCalc, &b_AK4JetBTag_lSFup_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBTag_MultiLepCalc", &AK4JetBTag_MultiLepCalc, &b_AK4JetBTag_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetFlav_MultiLepCalc", &AK4JetFlav_MultiLepCalc, &b_AK4JetFlav_MultiLepCalc);
   inputTree->SetBranchAddress("HadronicVHtID_JetSubCalc", &HadronicVHtID_JetSubCalc, &b_HadronicVHtID_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtStatus_JetSubCalc", &HadronicVHtStatus_JetSubCalc, &b_HadronicVHtStatus_JetSubCalc);
   inputTree->SetBranchAddress("HdecayID_TpTpCalc", &HdecayID_TpTpCalc, &b_HdecayID_TpTpCalc);
   inputTree->SetBranchAddress("HdecayIndex_TpTpCalc", &HdecayIndex_TpTpCalc, &b_HdecayIndex_TpTpCalc);
   inputTree->SetBranchAddress("LHEweightids_MultiLepCalc", &LHEweightids_MultiLepCalc, &b_LHEweightids_MultiLepCalc);
   inputTree->SetBranchAddress("LeptonID_TpTpCalc", &LeptonID_TpTpCalc, &b_LeptonID_TpTpCalc);
   inputTree->SetBranchAddress("LeptonParentID_TpTpCalc", &LeptonParentID_TpTpCalc, &b_LeptonParentID_TpTpCalc);
   inputTree->SetBranchAddress("WdecayID_TpTpCalc", &WdecayID_TpTpCalc, &b_WdecayID_TpTpCalc);
   inputTree->SetBranchAddress("WdecayIndex_TpTpCalc", &WdecayIndex_TpTpCalc, &b_WdecayIndex_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayID_TpTpCalc", &ZdecayID_TpTpCalc, &b_ZdecayID_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayIndex_TpTpCalc", &ZdecayIndex_TpTpCalc, &b_ZdecayIndex_TpTpCalc);
   inputTree->SetBranchAddress("allTopsID_TTbarMassCalc", &allTopsID_TTbarMassCalc, &b_allTopsID_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsStatus_TTbarMassCalc", &allTopsStatus_TTbarMassCalc, &b_allTopsStatus_TTbarMassCalc);
   inputTree->SetBranchAddress("bPrimeID_TpTpCalc", &bPrimeID_TpTpCalc, &b_bPrimeID_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeNDaughters_TpTpCalc", &bPrimeNDaughters_TpTpCalc, &b_bPrimeNDaughters_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeStatus_TpTpCalc", &bPrimeStatus_TpTpCalc, &b_bPrimeStatus_TpTpCalc);
   inputTree->SetBranchAddress("bosonID_TpTpCalc", &bosonID_TpTpCalc, &b_bosonID_TpTpCalc);
   inputTree->SetBranchAddress("maxProb_JetSubCalc", &maxProb_JetSubCalc, &b_maxProb_JetSubCalc);
   inputTree->SetBranchAddress("dnn_largest_BestCalc", &dnn_largest_BestCalc, &b_dnn_largest_BestCalc);
   inputTree->SetBranchAddress("dnn_largest_DeepAK8Calc", &dnn_largest_DeepAK8Calc, &b_dnn_largest_DeepAK8Calc);
   inputTree->SetBranchAddress("decorr_largest_DeepAK8Calc", &decorr_largest_DeepAK8Calc, &b_decorr_largest_DeepAK8Calc);
   inputTree->SetBranchAddress("elChargeConsistent_MultiLepCalc", &elChargeConsistent_MultiLepCalc, &b_elChargeConsistent_MultiLepCalc);
   inputTree->SetBranchAddress("elCharge_MultiLepCalc", &elCharge_MultiLepCalc, &b_elCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elCtfCharge_MultiLepCalc", &elCtfCharge_MultiLepCalc, &b_elCtfCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elGsfCharge_MultiLepCalc", &elGsfCharge_MultiLepCalc, &b_elGsfCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elIsEBEE_MultiLepCalc", &elIsEBEE_MultiLepCalc, &b_elIsEBEE_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVALooseIso_MultiLepCalc", &elIsMVALooseIso_MultiLepCalc, &b_elIsMVALooseIso_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVALoose_MultiLepCalc", &elIsMVALoose_MultiLepCalc, &b_elIsMVALoose_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVATight80_MultiLepCalc", &elIsMVATight80_MultiLepCalc, &b_elIsMVATight80_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVATight90_MultiLepCalc", &elIsMVATight90_MultiLepCalc, &b_elIsMVATight90_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVATightIso80_MultiLepCalc", &elIsMVATightIso80_MultiLepCalc, &b_elIsMVATightIso80_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMVATightIso90_MultiLepCalc", &elIsMVATightIso90_MultiLepCalc, &b_elIsMVATightIso90_MultiLepCalc);
   inputTree->SetBranchAddress("elMHits_MultiLepCalc", &elMHits_MultiLepCalc, &b_elMHits_MultiLepCalc);
   inputTree->SetBranchAddress("elMatched_MultiLepCalc", &elMatched_MultiLepCalc, &b_elMatched_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_id_MultiLepCalc", &elMother_id_MultiLepCalc, &b_elMother_id_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_status_MultiLepCalc", &elMother_status_MultiLepCalc, &b_elMother_status_MultiLepCalc);
   inputTree->SetBranchAddress("elNotConversion_MultiLepCalc", &elNotConversion_MultiLepCalc, &b_elNotConversion_MultiLepCalc);
   inputTree->SetBranchAddress("elNumberOfMothers_MultiLepCalc", &elNumberOfMothers_MultiLepCalc, &b_elNumberOfMothers_MultiLepCalc);
   inputTree->SetBranchAddress("elPdgId_MultiLepCalc", &elPdgId_MultiLepCalc, &b_elPdgId_MultiLepCalc);
   inputTree->SetBranchAddress("elScPixCharge_MultiLepCalc", &elScPixCharge_MultiLepCalc, &b_elScPixCharge_MultiLepCalc);
   inputTree->SetBranchAddress("elStatus_MultiLepCalc", &elStatus_MultiLepCalc, &b_elStatus_MultiLepCalc);
   inputTree->SetBranchAddress("elVtxFitConv_MultiLepCalc", &elVtxFitConv_MultiLepCalc, &b_elVtxFitConv_MultiLepCalc);
   inputTree->SetBranchAddress("electron_1_hltmatched_MultiLepCalc", &electron_1_hltmatched_MultiLepCalc, &b_electron_1_hltmatched_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLID_MultiLepCalc", &genBSLID_MultiLepCalc, &b_genBSLID_MultiLepCalc);
   inputTree->SetBranchAddress("genID_MultiLepCalc", &genID_MultiLepCalc, &b_genID_MultiLepCalc);
   inputTree->SetBranchAddress("genIndex_MultiLepCalc", &genIndex_MultiLepCalc, &b_genIndex_MultiLepCalc);
   inputTree->SetBranchAddress("genMotherID_MultiLepCalc", &genMotherID_MultiLepCalc, &b_genMotherID_MultiLepCalc);
   inputTree->SetBranchAddress("genMotherIndex_MultiLepCalc", &genMotherIndex_MultiLepCalc, &b_genMotherIndex_MultiLepCalc);
   inputTree->SetBranchAddress("genStatus_MultiLepCalc", &genStatus_MultiLepCalc, &b_genStatus_MultiLepCalc);
   inputTree->SetBranchAddress("muCharge_MultiLepCalc", &muCharge_MultiLepCalc, &b_muCharge_MultiLepCalc);
   inputTree->SetBranchAddress("muGlobal_MultiLepCalc", &muGlobal_MultiLepCalc, &b_muGlobal_MultiLepCalc);
   inputTree->SetBranchAddress("muIsGlobalHighPt_MultiLepCalc", &muIsGlobalHighPt_MultiLepCalc, &b_muIsGlobalHighPt_MultiLepCalc);
   inputTree->SetBranchAddress("muIsLoose_MultiLepCalc", &muIsLoose_MultiLepCalc, &b_muIsLoose_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMediumPrompt_MultiLepCalc", &muIsMediumPrompt_MultiLepCalc, &b_muIsMediumPrompt_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMedium_MultiLepCalc", &muIsMedium_MultiLepCalc, &b_muIsMedium_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoLoose_MultiLepCalc", &muIsMiniIsoLoose_MultiLepCalc, &b_muIsMiniIsoLoose_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoMedium_MultiLepCalc", &muIsMiniIsoMedium_MultiLepCalc, &b_muIsMiniIsoMedium_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoTight_MultiLepCalc", &muIsMiniIsoTight_MultiLepCalc, &b_muIsMiniIsoTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMiniIsoVeryTight_MultiLepCalc", &muIsMiniIsoVeryTight_MultiLepCalc, &b_muIsMiniIsoVeryTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMvaLoose_MultiLepCalc", &muIsMvaLoose_MultiLepCalc, &b_muIsMvaLoose_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMvaMedium_MultiLepCalc", &muIsMvaMedium_MultiLepCalc, &b_muIsMvaMedium_MultiLepCalc);
   inputTree->SetBranchAddress("muIsMvaTight_MultiLepCalc", &muIsMvaTight_MultiLepCalc, &b_muIsMvaTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsTight_MultiLepCalc", &muIsTight_MultiLepCalc, &b_muIsTight_MultiLepCalc);
   inputTree->SetBranchAddress("muIsTrkHighPt_MultiLepCalc", &muIsTrkHighPt_MultiLepCalc, &b_muIsTrkHighPt_MultiLepCalc);
   inputTree->SetBranchAddress("muMatched_MultiLepCalc", &muMatched_MultiLepCalc, &b_muMatched_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_id_MultiLepCalc", &muMother_id_MultiLepCalc, &b_muMother_id_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_status_MultiLepCalc", &muMother_status_MultiLepCalc, &b_muMother_status_MultiLepCalc);
   inputTree->SetBranchAddress("muNMatchedStations_MultiLepCalc", &muNMatchedStations_MultiLepCalc, &b_muNMatchedStations_MultiLepCalc);
   inputTree->SetBranchAddress("muNTrackerLayers_MultiLepCalc", &muNTrackerLayers_MultiLepCalc, &b_muNTrackerLayers_MultiLepCalc);
   inputTree->SetBranchAddress("muNValMuHits_MultiLepCalc", &muNValMuHits_MultiLepCalc, &b_muNValMuHits_MultiLepCalc);
   inputTree->SetBranchAddress("muNValPixelHits_MultiLepCalc", &muNValPixelHits_MultiLepCalc, &b_muNValPixelHits_MultiLepCalc);
   inputTree->SetBranchAddress("muNumberOfMothers_MultiLepCalc", &muNumberOfMothers_MultiLepCalc, &b_muNumberOfMothers_MultiLepCalc);
   inputTree->SetBranchAddress("muPdgId_MultiLepCalc", &muPdgId_MultiLepCalc, &b_muPdgId_MultiLepCalc);
   inputTree->SetBranchAddress("muStatus_MultiLepCalc", &muStatus_MultiLepCalc, &b_muStatus_MultiLepCalc);
   inputTree->SetBranchAddress("muon_1_hltmatched_MultiLepCalc", &muon_1_hltmatched_MultiLepCalc, &b_muon_1_hltmatched_MultiLepCalc);
   inputTree->SetBranchAddress("quarkID_TpTpCalc", &quarkID_TpTpCalc, &b_quarkID_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeID_TpTpCalc", &tPrimeID_TpTpCalc, &b_tPrimeID_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeNDaughters_TpTpCalc", &tPrimeNDaughters_TpTpCalc, &b_tPrimeNDaughters_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeStatus_TpTpCalc", &tPrimeStatus_TpTpCalc, &b_tPrimeStatus_TpTpCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetHFlav_JetSubCalc", &theJetAK8SDSubjetHFlav_JetSubCalc, &b_theJetAK8SDSubjetHFlav_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetIndex_JetSubCalc", &theJetAK8SDSubjetIndex_JetSubCalc, &b_theJetAK8SDSubjetIndex_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVL_JetSubCalc", &theJetAK8SDSubjetNDeepCSVL_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVL_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc", &theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVMSF_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_bSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_bSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_lSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc", &theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc, &b_theJetAK8SDSubjetNDeepCSVM_lSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetSize_JetSubCalc", &theJetAK8SDSubjetSize_JetSubCalc, &b_theJetAK8SDSubjetSize_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8nDaughters_JetSubCalc", &theJetAK8nDaughters_JetSubCalc, &b_theJetAK8nDaughters_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_JetSubCalc", &theJetBTag_JetSubCalc, &b_theJetBTag_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_bSFdn_JetSubCalc", &theJetBTag_bSFdn_JetSubCalc, &b_theJetBTag_bSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_bSFup_JetSubCalc", &theJetBTag_bSFup_JetSubCalc, &b_theJetBTag_bSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_lSFdn_JetSubCalc", &theJetBTag_lSFdn_JetSubCalc, &b_theJetBTag_lSFdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetBTag_lSFup_JetSubCalc", &theJetBTag_lSFup_JetSubCalc, &b_theJetBTag_lSFup_JetSubCalc);
   inputTree->SetBranchAddress("theJetHFlav_JetSubCalc", &theJetHFlav_JetSubCalc, &b_theJetHFlav_JetSubCalc);
   inputTree->SetBranchAddress("theJetPFlav_JetSubCalc", &theJetPFlav_JetSubCalc, &b_theJetPFlav_JetSubCalc);
   inputTree->SetBranchAddress("theJetnDaughters_JetSubCalc", &theJetnDaughters_JetSubCalc, &b_theJetnDaughters_JetSubCalc);
   inputTree->SetBranchAddress("topID_TTbarMassCalc", &topID_TTbarMassCalc, &b_topID_TTbarMassCalc);
   inputTree->SetBranchAddress("topWID_TTbarMassCalc", &topWID_TTbarMassCalc, &b_topWID_TTbarMassCalc);
   inputTree->SetBranchAddress("topbID_TTbarMassCalc", &topbID_TTbarMassCalc, &b_topbID_TTbarMassCalc);
   inputTree->SetBranchAddress("viSelMCTriggersEl_MultiLepCalc", &viSelMCTriggersEl_MultiLepCalc, &b_viSelMCTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("viSelMCTriggersMu_MultiLepCalc", &viSelMCTriggersMu_MultiLepCalc, &b_viSelMCTriggersMu_MultiLepCalc);
   inputTree->SetBranchAddress("viSelTriggersEl_MultiLepCalc", &viSelTriggersEl_MultiLepCalc, &b_viSelTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("viSelTriggersMu_MultiLepCalc", &viSelTriggersMu_MultiLepCalc, &b_viSelTriggersMu_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBDeepCSVb_MultiLepCalc", &AK4JetBDeepCSVb_MultiLepCalc, &b_AK4JetBDeepCSVb_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBDeepCSVbb_MultiLepCalc", &AK4JetBDeepCSVbb_MultiLepCalc, &b_AK4JetBDeepCSVbb_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBDeepCSVc_MultiLepCalc", &AK4JetBDeepCSVc_MultiLepCalc, &b_AK4JetBDeepCSVc_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBDeepCSVudsg_MultiLepCalc", &AK4JetBDeepCSVudsg_MultiLepCalc, &b_AK4JetBDeepCSVudsg_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetBDisc_MultiLepCalc", &AK4JetBDisc_MultiLepCalc, &b_AK4JetBDisc_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEnergy_MultiLepCalc", &AK4JetEnergy_MultiLepCalc, &b_AK4JetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetEta_MultiLepCalc", &AK4JetEta_MultiLepCalc, &b_AK4JetEta_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPhi_MultiLepCalc", &AK4JetPhi_MultiLepCalc, &b_AK4JetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("AK4JetPt_MultiLepCalc", &AK4JetPt_MultiLepCalc, &b_AK4JetPt_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetCSV_BestCalc", &AK8JetCSV_BestCalc, &b_AK8JetCSV_BestCalc);
   inputTree->SetBranchAddress("AK8JetCSV_MultiLepCalc", &AK8JetCSV_MultiLepCalc, &b_AK8JetCSV_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_BestCalc", &AK8JetEnergy_BestCalc, &b_AK8JetEnergy_BestCalc);
   inputTree->SetBranchAddress("AK8JetEnergy_MultiLepCalc", &AK8JetEnergy_MultiLepCalc, &b_AK8JetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetEta_BestCalc", &AK8JetEta_BestCalc, &b_AK8JetEta_BestCalc);
   inputTree->SetBranchAddress("AK8JetEta_MultiLepCalc", &AK8JetEta_MultiLepCalc, &b_AK8JetEta_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPhi_BestCalc", &AK8JetPhi_BestCalc, &b_AK8JetPhi_BestCalc);
   inputTree->SetBranchAddress("AK8JetPhi_MultiLepCalc", &AK8JetPhi_MultiLepCalc, &b_AK8JetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("AK8JetPt_BestCalc", &AK8JetPt_BestCalc, &b_AK8JetPt_BestCalc);
   inputTree->SetBranchAddress("AK8JetPt_MultiLepCalc", &AK8JetPt_MultiLepCalc, &b_AK8JetPt_MultiLepCalc);
   inputTree->SetBranchAddress("FWmoment1H_BestCalc", &FWmoment1H_BestCalc, &b_FWmoment1H_BestCalc);
   inputTree->SetBranchAddress("FWmoment1W_BestCalc", &FWmoment1W_BestCalc, &b_FWmoment1W_BestCalc);
   inputTree->SetBranchAddress("FWmoment1Z_BestCalc", &FWmoment1Z_BestCalc, &b_FWmoment1Z_BestCalc);
   inputTree->SetBranchAddress("FWmoment1top_BestCalc", &FWmoment1top_BestCalc, &b_FWmoment1top_BestCalc);
   inputTree->SetBranchAddress("FWmoment2H_BestCalc", &FWmoment2H_BestCalc, &b_FWmoment2H_BestCalc);
   inputTree->SetBranchAddress("FWmoment2W_BestCalc", &FWmoment2W_BestCalc, &b_FWmoment2W_BestCalc);
   inputTree->SetBranchAddress("FWmoment2Z_BestCalc", &FWmoment2Z_BestCalc, &b_FWmoment2Z_BestCalc);
   inputTree->SetBranchAddress("FWmoment2top_BestCalc", &FWmoment2top_BestCalc, &b_FWmoment2top_BestCalc);
   inputTree->SetBranchAddress("FWmoment3H_BestCalc", &FWmoment3H_BestCalc, &b_FWmoment3H_BestCalc);
   inputTree->SetBranchAddress("FWmoment3W_BestCalc", &FWmoment3W_BestCalc, &b_FWmoment3W_BestCalc);
   inputTree->SetBranchAddress("FWmoment3Z_BestCalc", &FWmoment3Z_BestCalc, &b_FWmoment3Z_BestCalc);
   inputTree->SetBranchAddress("FWmoment3top_BestCalc", &FWmoment3top_BestCalc, &b_FWmoment3top_BestCalc);
   inputTree->SetBranchAddress("FWmoment4H_BestCalc", &FWmoment4H_BestCalc, &b_FWmoment4H_BestCalc);
   inputTree->SetBranchAddress("FWmoment4W_BestCalc", &FWmoment4W_BestCalc, &b_FWmoment4W_BestCalc);
   inputTree->SetBranchAddress("FWmoment4Z_BestCalc", &FWmoment4Z_BestCalc, &b_FWmoment4Z_BestCalc);
   inputTree->SetBranchAddress("FWmoment4top_BestCalc", &FWmoment4top_BestCalc, &b_FWmoment4top_BestCalc);
   inputTree->SetBranchAddress("HadronicVHtD0E_JetSubCalc", &HadronicVHtD0E_JetSubCalc, &b_HadronicVHtD0E_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD0Eta_JetSubCalc", &HadronicVHtD0Eta_JetSubCalc, &b_HadronicVHtD0Eta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD0Phi_JetSubCalc", &HadronicVHtD0Phi_JetSubCalc, &b_HadronicVHtD0Phi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD0Pt_JetSubCalc", &HadronicVHtD0Pt_JetSubCalc, &b_HadronicVHtD0Pt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1E_JetSubCalc", &HadronicVHtD1E_JetSubCalc, &b_HadronicVHtD1E_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1Eta_JetSubCalc", &HadronicVHtD1Eta_JetSubCalc, &b_HadronicVHtD1Eta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1Phi_JetSubCalc", &HadronicVHtD1Phi_JetSubCalc, &b_HadronicVHtD1Phi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD1Pt_JetSubCalc", &HadronicVHtD1Pt_JetSubCalc, &b_HadronicVHtD1Pt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2E_JetSubCalc", &HadronicVHtD2E_JetSubCalc, &b_HadronicVHtD2E_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2Eta_JetSubCalc", &HadronicVHtD2Eta_JetSubCalc, &b_HadronicVHtD2Eta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2Phi_JetSubCalc", &HadronicVHtD2Phi_JetSubCalc, &b_HadronicVHtD2Phi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtD2Pt_JetSubCalc", &HadronicVHtD2Pt_JetSubCalc, &b_HadronicVHtD2Pt_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtEnergy_JetSubCalc", &HadronicVHtEnergy_JetSubCalc, &b_HadronicVHtEnergy_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtEta_JetSubCalc", &HadronicVHtEta_JetSubCalc, &b_HadronicVHtEta_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtPhi_JetSubCalc", &HadronicVHtPhi_JetSubCalc, &b_HadronicVHtPhi_JetSubCalc);
   inputTree->SetBranchAddress("HadronicVHtPt_JetSubCalc", &HadronicVHtPt_JetSubCalc, &b_HadronicVHtPt_JetSubCalc);
   inputTree->SetBranchAddress("HdecayEnergy_TpTpCalc", &HdecayEnergy_TpTpCalc, &b_HdecayEnergy_TpTpCalc);
   inputTree->SetBranchAddress("HdecayEta_TpTpCalc", &HdecayEta_TpTpCalc, &b_HdecayEta_TpTpCalc);
   inputTree->SetBranchAddress("HdecayPhi_TpTpCalc", &HdecayPhi_TpTpCalc, &b_HdecayPhi_TpTpCalc);
   inputTree->SetBranchAddress("HdecayPt_TpTpCalc", &HdecayPt_TpTpCalc, &b_HdecayPt_TpTpCalc);
   inputTree->SetBranchAddress("LHEweights_MultiLepCalc", &LHEweights_MultiLepCalc, &b_LHEweights_MultiLepCalc);
   inputTree->SetBranchAddress("LeptonEnergy_TpTpCalc", &LeptonEnergy_TpTpCalc, &b_LeptonEnergy_TpTpCalc);
   inputTree->SetBranchAddress("LeptonEta_TpTpCalc", &LeptonEta_TpTpCalc, &b_LeptonEta_TpTpCalc);
   inputTree->SetBranchAddress("LeptonPhi_TpTpCalc", &LeptonPhi_TpTpCalc, &b_LeptonPhi_TpTpCalc);
   inputTree->SetBranchAddress("LeptonPt_TpTpCalc", &LeptonPt_TpTpCalc, &b_LeptonPt_TpTpCalc);
   inputTree->SetBranchAddress("Njets_H_BestCalc", &Njets_H_BestCalc, &b_Njets_H_BestCalc);
   inputTree->SetBranchAddress("Njets_W_BestCalc", &Njets_W_BestCalc, &b_Njets_W_BestCalc);
   inputTree->SetBranchAddress("Njets_Z_BestCalc", &Njets_Z_BestCalc, &b_Njets_Z_BestCalc);
   inputTree->SetBranchAddress("Njets_jet_BestCalc", &Njets_jet_BestCalc, &b_Njets_jet_BestCalc);
   inputTree->SetBranchAddress("Njets_orig_BestCalc", &Njets_orig_BestCalc, &b_Njets_orig_BestCalc);
   inputTree->SetBranchAddress("Njets_top_BestCalc", &Njets_top_BestCalc, &b_Njets_top_BestCalc);
   inputTree->SetBranchAddress("SDmass_BestCalc", &SDmass_BestCalc, &b_SDmass_BestCalc);
   inputTree->SetBranchAddress("WdecayEnergy_TpTpCalc", &WdecayEnergy_TpTpCalc, &b_WdecayEnergy_TpTpCalc);
   inputTree->SetBranchAddress("WdecayEta_TpTpCalc", &WdecayEta_TpTpCalc, &b_WdecayEta_TpTpCalc);
   inputTree->SetBranchAddress("WdecayPhi_TpTpCalc", &WdecayPhi_TpTpCalc, &b_WdecayPhi_TpTpCalc);
   inputTree->SetBranchAddress("WdecayPt_TpTpCalc", &WdecayPt_TpTpCalc, &b_WdecayPt_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayEnergy_TpTpCalc", &ZdecayEnergy_TpTpCalc, &b_ZdecayEnergy_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayEta_TpTpCalc", &ZdecayEta_TpTpCalc, &b_ZdecayEta_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayPhi_TpTpCalc", &ZdecayPhi_TpTpCalc, &b_ZdecayPhi_TpTpCalc);
   inputTree->SetBranchAddress("ZdecayPt_TpTpCalc", &ZdecayPt_TpTpCalc, &b_ZdecayPt_TpTpCalc);
   inputTree->SetBranchAddress("allTopsEnergy_TTbarMassCalc", &allTopsEnergy_TTbarMassCalc, &b_allTopsEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsEta_TTbarMassCalc", &allTopsEta_TTbarMassCalc, &b_allTopsEta_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsPhi_TTbarMassCalc", &allTopsPhi_TTbarMassCalc, &b_allTopsPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("allTopsPt_TTbarMassCalc", &allTopsPt_TTbarMassCalc, &b_allTopsPt_TTbarMassCalc);
   inputTree->SetBranchAddress("aplanarityH_BestCalc", &aplanarityH_BestCalc, &b_aplanarityH_BestCalc);
   inputTree->SetBranchAddress("aplanarityW_BestCalc", &aplanarityW_BestCalc, &b_aplanarityW_BestCalc);
   inputTree->SetBranchAddress("aplanarityZ_BestCalc", &aplanarityZ_BestCalc, &b_aplanarityZ_BestCalc);
   inputTree->SetBranchAddress("aplanaritytop_BestCalc", &aplanaritytop_BestCalc, &b_aplanaritytop_BestCalc);
   inputTree->SetBranchAddress("bDisc1_BestCalc", &bDisc1_BestCalc, &b_bDisc1_BestCalc);
   inputTree->SetBranchAddress("bDisc2_BestCalc", &bDisc2_BestCalc, &b_bDisc2_BestCalc);
   inputTree->SetBranchAddress("bDisc_BestCalc", &bDisc_BestCalc, &b_bDisc_BestCalc);
   inputTree->SetBranchAddress("bPrimeEnergy_TpTpCalc", &bPrimeEnergy_TpTpCalc, &b_bPrimeEnergy_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeEta_TpTpCalc", &bPrimeEta_TpTpCalc, &b_bPrimeEta_TpTpCalc);
   inputTree->SetBranchAddress("bPrimeMass_TpTpCalc", &bPrimeMass_TpTpCalc, &b_bPrimeMass_TpTpCalc);
   inputTree->SetBranchAddress("bPrimePhi_TpTpCalc", &bPrimePhi_TpTpCalc, &b_bPrimePhi_TpTpCalc);
   inputTree->SetBranchAddress("bPrimePt_TpTpCalc", &bPrimePt_TpTpCalc, &b_bPrimePt_TpTpCalc);
   inputTree->SetBranchAddress("bosonEnergy_TpTpCalc", &bosonEnergy_TpTpCalc, &b_bosonEnergy_TpTpCalc);
   inputTree->SetBranchAddress("bosonEta_TpTpCalc", &bosonEta_TpTpCalc, &b_bosonEta_TpTpCalc);
   inputTree->SetBranchAddress("bosonPhi_TpTpCalc", &bosonPhi_TpTpCalc, &b_bosonPhi_TpTpCalc);
   inputTree->SetBranchAddress("bosonPt_TpTpCalc", &bosonPt_TpTpCalc, &b_bosonPt_TpTpCalc);
   inputTree->SetBranchAddress("decorr_B_DeepAK8Calc", &decorr_B_DeepAK8Calc, &b_decorr_B_DeepAK8Calc);
   inputTree->SetBranchAddress("decorr_H_DeepAK8Calc", &decorr_H_DeepAK8Calc, &b_decorr_H_DeepAK8Calc);
   inputTree->SetBranchAddress("decorr_J_DeepAK8Calc", &decorr_J_DeepAK8Calc, &b_decorr_J_DeepAK8Calc);
   inputTree->SetBranchAddress("decorr_T_DeepAK8Calc", &decorr_T_DeepAK8Calc, &b_decorr_T_DeepAK8Calc);
   inputTree->SetBranchAddress("decorr_W_DeepAK8Calc", &decorr_W_DeepAK8Calc, &b_decorr_W_DeepAK8Calc);
   inputTree->SetBranchAddress("decorr_Z_DeepAK8Calc", &decorr_Z_DeepAK8Calc, &b_decorr_Z_DeepAK8Calc);
   inputTree->SetBranchAddress("dnn_B_DeepAK8Calc", &dnn_B_DeepAK8Calc, &b_dnn_B_DeepAK8Calc);
   inputTree->SetBranchAddress("dnn_B_BestCalc", &dnn_B_BestCalc, &b_dnn_B_BestCalc);
   inputTree->SetBranchAddress("dnn_H_DeepAK8Calc", &dnn_H_DeepAK8Calc, &b_dnn_H_DeepAK8Calc);
   inputTree->SetBranchAddress("dnn_Higgs_BestCalc", &dnn_Higgs_BestCalc, &b_dnn_Higgs_BestCalc);
   inputTree->SetBranchAddress("dnn_J_DeepAK8Calc", &dnn_J_DeepAK8Calc, &b_dnn_J_DeepAK8Calc);
   inputTree->SetBranchAddress("dnn_QCD_BestCalc", &dnn_QCD_BestCalc, &b_dnn_QCD_BestCalc);
   inputTree->SetBranchAddress("dnn_T_DeepAK8Calc", &dnn_T_DeepAK8Calc, &b_dnn_T_DeepAK8Calc);
   inputTree->SetBranchAddress("dnn_Top_BestCalc", &dnn_Top_BestCalc, &b_dnn_Top_BestCalc);
   inputTree->SetBranchAddress("dnn_W_BestCalc", &dnn_W_BestCalc, &b_dnn_W_BestCalc);
   inputTree->SetBranchAddress("dnn_W_DeepAK8Calc", &dnn_W_DeepAK8Calc, &b_dnn_W_DeepAK8Calc);
   inputTree->SetBranchAddress("dnn_Z_BestCalc", &dnn_Z_BestCalc, &b_dnn_Z_BestCalc);
   inputTree->SetBranchAddress("dnn_Z_DeepAK8Calc", &dnn_Z_DeepAK8Calc, &b_dnn_Z_DeepAK8Calc);
   inputTree->SetBranchAddress("elAEff_MultiLepCalc", &elAEff_MultiLepCalc, &b_elAEff_MultiLepCalc);
   inputTree->SetBranchAddress("elChIso_MultiLepCalc", &elChIso_MultiLepCalc, &b_elChIso_MultiLepCalc);
   inputTree->SetBranchAddress("elD0_MultiLepCalc", &elD0_MultiLepCalc, &b_elD0_MultiLepCalc);
   inputTree->SetBranchAddress("elDEtaSCTkAtVtx_MultiLepCalc", &elDEtaSCTkAtVtx_MultiLepCalc, &b_elDEtaSCTkAtVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elDPhiSCTkAtVtx_MultiLepCalc", &elDPhiSCTkAtVtx_MultiLepCalc, &b_elDPhiSCTkAtVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elDR03TkSumPt_MultiLepCalc", &elDR03TkSumPt_MultiLepCalc, &b_elDR03TkSumPt_MultiLepCalc);
   inputTree->SetBranchAddress("elDZ_MultiLepCalc", &elDZ_MultiLepCalc, &b_elDZ_MultiLepCalc);
   inputTree->SetBranchAddress("elDeta_MultiLepCalc", &elDeta_MultiLepCalc, &b_elDeta_MultiLepCalc);
   inputTree->SetBranchAddress("elDphi_MultiLepCalc", &elDphi_MultiLepCalc, &b_elDphi_MultiLepCalc);
   inputTree->SetBranchAddress("elDxy_MultiLepCalc", &elDxy_MultiLepCalc, &b_elDxy_MultiLepCalc);
   inputTree->SetBranchAddress("elEcalPFClusterIso_MultiLepCalc", &elEcalPFClusterIso_MultiLepCalc, &b_elEcalPFClusterIso_MultiLepCalc);
   inputTree->SetBranchAddress("elEnergy_MultiLepCalc", &elEnergy_MultiLepCalc, &b_elEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("elEtaVtx_MultiLepCalc", &elEtaVtx_MultiLepCalc, &b_elEtaVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elEta_MultiLepCalc", &elEta_MultiLepCalc, &b_elEta_MultiLepCalc);
   inputTree->SetBranchAddress("elGen_Reco_dr_MultiLepCalc", &elGen_Reco_dr_MultiLepCalc, &b_elGen_Reco_dr_MultiLepCalc);
   inputTree->SetBranchAddress("elHcalPFClusterIso_MultiLepCalc", &elHcalPFClusterIso_MultiLepCalc, &b_elHcalPFClusterIso_MultiLepCalc);
   inputTree->SetBranchAddress("elHoE_MultiLepCalc", &elHoE_MultiLepCalc, &b_elHoE_MultiLepCalc);
   inputTree->SetBranchAddress("elIsLoose_MultiLepCalc", &elIsLoose_MultiLepCalc, &b_elIsLoose_MultiLepCalc);
   inputTree->SetBranchAddress("elIsMedium_MultiLepCalc", &elIsMedium_MultiLepCalc, &b_elIsMedium_MultiLepCalc);
   inputTree->SetBranchAddress("elIsTight_MultiLepCalc", &elIsTight_MultiLepCalc, &b_elIsTight_MultiLepCalc);
   inputTree->SetBranchAddress("elIsVeto_MultiLepCalc", &elIsVeto_MultiLepCalc, &b_elIsVeto_MultiLepCalc);
   inputTree->SetBranchAddress("elMVAValue_iso_MultiLepCalc", &elMVAValue_iso_MultiLepCalc, &b_elMVAValue_iso_MultiLepCalc);
   inputTree->SetBranchAddress("elMVAValue_MultiLepCalc", &elMVAValue_MultiLepCalc, &b_elMVAValue_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedEnergy_MultiLepCalc", &elMatchedEnergy_MultiLepCalc, &b_elMatchedEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedEta_MultiLepCalc", &elMatchedEta_MultiLepCalc, &b_elMatchedEta_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedPhi_MultiLepCalc", &elMatchedPhi_MultiLepCalc, &b_elMatchedPhi_MultiLepCalc);
   inputTree->SetBranchAddress("elMatchedPt_MultiLepCalc", &elMatchedPt_MultiLepCalc, &b_elMatchedPt_MultiLepCalc);
   inputTree->SetBranchAddress("elMiniIso_MultiLepCalc", &elMiniIso_MultiLepCalc, &b_elMiniIso_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_energy_MultiLepCalc", &elMother_energy_MultiLepCalc, &b_elMother_energy_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_eta_MultiLepCalc", &elMother_eta_MultiLepCalc, &b_elMother_eta_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_phi_MultiLepCalc", &elMother_phi_MultiLepCalc, &b_elMother_phi_MultiLepCalc);
   inputTree->SetBranchAddress("elMother_pt_MultiLepCalc", &elMother_pt_MultiLepCalc, &b_elMother_pt_MultiLepCalc);
   inputTree->SetBranchAddress("elNhIso_MultiLepCalc", &elNhIso_MultiLepCalc, &b_elNhIso_MultiLepCalc);
   inputTree->SetBranchAddress("elOoemoop_MultiLepCalc", &elOoemoop_MultiLepCalc, &b_elOoemoop_MultiLepCalc);
   inputTree->SetBranchAddress("elPFEta_MultiLepCalc", &elPFEta_MultiLepCalc, &b_elPFEta_MultiLepCalc);
   inputTree->SetBranchAddress("elPFPhi_MultiLepCalc", &elPFPhi_MultiLepCalc, &b_elPFPhi_MultiLepCalc);
   inputTree->SetBranchAddress("elPhIso_MultiLepCalc", &elPhIso_MultiLepCalc, &b_elPhIso_MultiLepCalc);
   inputTree->SetBranchAddress("elPhiVtx_MultiLepCalc", &elPhiVtx_MultiLepCalc, &b_elPhiVtx_MultiLepCalc);
   inputTree->SetBranchAddress("elPhi_MultiLepCalc", &elPhi_MultiLepCalc, &b_elPhi_MultiLepCalc);
   inputTree->SetBranchAddress("elPt_MultiLepCalc", &elPt_MultiLepCalc, &b_elPt_MultiLepCalc);
   inputTree->SetBranchAddress("elRelIso_MultiLepCalc", &elRelIso_MultiLepCalc, &b_elRelIso_MultiLepCalc);
   inputTree->SetBranchAddress("elRhoIso_MultiLepCalc", &elRhoIso_MultiLepCalc, &b_elRhoIso_MultiLepCalc);
   inputTree->SetBranchAddress("elSCE_MultiLepCalc", &elSCE_MultiLepCalc, &b_elSCE_MultiLepCalc);
   inputTree->SetBranchAddress("elSihih_MultiLepCalc", &elSihih_MultiLepCalc, &b_elSihih_MultiLepCalc);
   inputTree->SetBranchAddress("et_BestCalc", &et_BestCalc, &b_et_BestCalc);
   inputTree->SetBranchAddress("eta_BestCalc", &eta_BestCalc, &b_eta_BestCalc);
   inputTree->SetBranchAddress("evtWeightsMC_MultiLepCalc", &evtWeightsMC_MultiLepCalc, &b_evtWeightsMC_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLEnergy_MultiLepCalc", &genBSLEnergy_MultiLepCalc, &b_genBSLEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLEta_MultiLepCalc", &genBSLEta_MultiLepCalc, &b_genBSLEta_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLPhi_MultiLepCalc", &genBSLPhi_MultiLepCalc, &b_genBSLPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genBSLPt_MultiLepCalc", &genBSLPt_MultiLepCalc, &b_genBSLPt_MultiLepCalc);
   inputTree->SetBranchAddress("genEnergy_MultiLepCalc", &genEnergy_MultiLepCalc, &b_genEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genEta_MultiLepCalc", &genEta_MultiLepCalc, &b_genEta_MultiLepCalc);
   inputTree->SetBranchAddress("genJetEnergy_MultiLepCalc", &genJetEnergy_MultiLepCalc, &b_genJetEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("genJetEta_MultiLepCalc", &genJetEta_MultiLepCalc, &b_genJetEta_MultiLepCalc);
   inputTree->SetBranchAddress("genJetPhi_MultiLepCalc", &genJetPhi_MultiLepCalc, &b_genJetPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genJetPt_MultiLepCalc", &genJetPt_MultiLepCalc, &b_genJetPt_MultiLepCalc);
   inputTree->SetBranchAddress("genPhi_MultiLepCalc", &genPhi_MultiLepCalc, &b_genPhi_MultiLepCalc);
   inputTree->SetBranchAddress("genPt_MultiLepCalc", &genPt_MultiLepCalc, &b_genPt_MultiLepCalc);
   inputTree->SetBranchAddress("isotropyH_BestCalc", &isotropyH_BestCalc, &b_isotropyH_BestCalc);
   inputTree->SetBranchAddress("isotropyW_BestCalc", &isotropyW_BestCalc, &b_isotropyW_BestCalc);
   inputTree->SetBranchAddress("isotropyZ_BestCalc", &isotropyZ_BestCalc, &b_isotropyZ_BestCalc);
   inputTree->SetBranchAddress("isotropytop_BestCalc", &isotropytop_BestCalc, &b_isotropytop_BestCalc);
   inputTree->SetBranchAddress("m1234H_BestCalc", &m1234H_BestCalc, &b_m1234H_BestCalc);
   inputTree->SetBranchAddress("m1234W_BestCalc", &m1234W_BestCalc, &b_m1234W_BestCalc);
   inputTree->SetBranchAddress("m1234Z_BestCalc", &m1234Z_BestCalc, &b_m1234Z_BestCalc);
   inputTree->SetBranchAddress("m1234_jet_BestCalc", &m1234_jet_BestCalc, &b_m1234_jet_BestCalc);
   inputTree->SetBranchAddress("m1234top_BestCalc", &m1234top_BestCalc, &b_m1234top_BestCalc);
   inputTree->SetBranchAddress("m12H_BestCalc", &m12H_BestCalc, &b_m12H_BestCalc);
   inputTree->SetBranchAddress("m12W_BestCalc", &m12W_BestCalc, &b_m12W_BestCalc);
   inputTree->SetBranchAddress("m12Z_BestCalc", &m12Z_BestCalc, &b_m12Z_BestCalc);
   inputTree->SetBranchAddress("m12_jet_BestCalc", &m12_jet_BestCalc, &b_m12_jet_BestCalc);
   inputTree->SetBranchAddress("m12top_BestCalc", &m12top_BestCalc, &b_m12top_BestCalc);
   inputTree->SetBranchAddress("m13H_BestCalc", &m13H_BestCalc, &b_m13H_BestCalc);
   inputTree->SetBranchAddress("m13W_BestCalc", &m13W_BestCalc, &b_m13W_BestCalc);
   inputTree->SetBranchAddress("m13Z_BestCalc", &m13Z_BestCalc, &b_m13Z_BestCalc);
   inputTree->SetBranchAddress("m13_jet_BestCalc", &m13_jet_BestCalc, &b_m13_jet_BestCalc);
   inputTree->SetBranchAddress("m13top_BestCalc", &m13top_BestCalc, &b_m13top_BestCalc);
   inputTree->SetBranchAddress("m23H_BestCalc", &m23H_BestCalc, &b_m23H_BestCalc);
   inputTree->SetBranchAddress("m23W_BestCalc", &m23W_BestCalc, &b_m23W_BestCalc);
   inputTree->SetBranchAddress("m23Z_BestCalc", &m23Z_BestCalc, &b_m23Z_BestCalc);
   inputTree->SetBranchAddress("m23_jet_BestCalc", &m23_jet_BestCalc, &b_m23_jet_BestCalc);
   inputTree->SetBranchAddress("m23top_BestCalc", &m23top_BestCalc, &b_m23top_BestCalc);
   inputTree->SetBranchAddress("mass_BestCalc", &mass_BestCalc, &b_mass_BestCalc);
   inputTree->SetBranchAddress("muChIso_MultiLepCalc", &muChIso_MultiLepCalc, &b_muChIso_MultiLepCalc);
   inputTree->SetBranchAddress("muChi2_MultiLepCalc", &muChi2_MultiLepCalc, &b_muChi2_MultiLepCalc);
   inputTree->SetBranchAddress("muDxy_MultiLepCalc", &muDxy_MultiLepCalc, &b_muDxy_MultiLepCalc);
   inputTree->SetBranchAddress("muDz_MultiLepCalc", &muDz_MultiLepCalc, &b_muDz_MultiLepCalc);
   inputTree->SetBranchAddress("muEnergy_MultiLepCalc", &muEnergy_MultiLepCalc, &b_muEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("muEta_MultiLepCalc", &muEta_MultiLepCalc, &b_muEta_MultiLepCalc);
   inputTree->SetBranchAddress("muGIso_MultiLepCalc", &muGIso_MultiLepCalc, &b_muGIso_MultiLepCalc);
   inputTree->SetBranchAddress("muGen_Reco_dr_MultiLepCalc", &muGen_Reco_dr_MultiLepCalc, &b_muGen_Reco_dr_MultiLepCalc);
   inputTree->SetBranchAddress("muInnerEta_MultiLepCalc", &muInnerEta_MultiLepCalc, &b_muInnerEta_MultiLepCalc);
   inputTree->SetBranchAddress("muInnerPhi_MultiLepCalc", &muInnerPhi_MultiLepCalc, &b_muInnerPhi_MultiLepCalc);
   inputTree->SetBranchAddress("muInnerPt_MultiLepCalc", &muInnerPt_MultiLepCalc, &b_muInnerPt_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedEnergy_MultiLepCalc", &muMatchedEnergy_MultiLepCalc, &b_muMatchedEnergy_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedEta_MultiLepCalc", &muMatchedEta_MultiLepCalc, &b_muMatchedEta_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedPhi_MultiLepCalc", &muMatchedPhi_MultiLepCalc, &b_muMatchedPhi_MultiLepCalc);
   inputTree->SetBranchAddress("muMatchedPt_MultiLepCalc", &muMatchedPt_MultiLepCalc, &b_muMatchedPt_MultiLepCalc);
   inputTree->SetBranchAddress("muMiniIsoDB_MultiLepCalc", &muMiniIsoDB_MultiLepCalc, &b_muMiniIsoDB_MultiLepCalc);
   inputTree->SetBranchAddress("muMiniIso_MultiLepCalc", &muMiniIso_MultiLepCalc, &b_muMiniIso_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_energy_MultiLepCalc", &muMother_energy_MultiLepCalc, &b_muMother_energy_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_eta_MultiLepCalc", &muMother_eta_MultiLepCalc, &b_muMother_eta_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_phi_MultiLepCalc", &muMother_phi_MultiLepCalc, &b_muMother_phi_MultiLepCalc);
   inputTree->SetBranchAddress("muMother_pt_MultiLepCalc", &muMother_pt_MultiLepCalc, &b_muMother_pt_MultiLepCalc);
   inputTree->SetBranchAddress("muNhIso_MultiLepCalc", &muNhIso_MultiLepCalc, &b_muNhIso_MultiLepCalc);
   inputTree->SetBranchAddress("muPhi_MultiLepCalc", &muPhi_MultiLepCalc, &b_muPhi_MultiLepCalc);
   inputTree->SetBranchAddress("muPt_MultiLepCalc", &muPt_MultiLepCalc, &b_muPt_MultiLepCalc);
   inputTree->SetBranchAddress("muPuIso_MultiLepCalc", &muPuIso_MultiLepCalc, &b_muPuIso_MultiLepCalc);
   inputTree->SetBranchAddress("muRelIso_MultiLepCalc", &muRelIso_MultiLepCalc, &b_muRelIso_MultiLepCalc);
   inputTree->SetBranchAddress("pzOverp_H_BestCalc", &pzOverp_H_BestCalc, &b_pzOverp_H_BestCalc);
   inputTree->SetBranchAddress("pzOverp_W_BestCalc", &pzOverp_W_BestCalc, &b_pzOverp_W_BestCalc);
   inputTree->SetBranchAddress("pzOverp_Z_BestCalc", &pzOverp_Z_BestCalc, &b_pzOverp_Z_BestCalc);
   inputTree->SetBranchAddress("pzOverp_jet_BestCalc", &pzOverp_jet_BestCalc, &b_pzOverp_jet_BestCalc);
   inputTree->SetBranchAddress("pzOverp_top_BestCalc", &pzOverp_top_BestCalc, &b_pzOverp_top_BestCalc);
   inputTree->SetBranchAddress("q_BestCalc", &q_BestCalc, &b_q_BestCalc);
   inputTree->SetBranchAddress("quarkEnergy_TpTpCalc", &quarkEnergy_TpTpCalc, &b_quarkEnergy_TpTpCalc);
   inputTree->SetBranchAddress("quarkEta_TpTpCalc", &quarkEta_TpTpCalc, &b_quarkEta_TpTpCalc);
   inputTree->SetBranchAddress("quarkPhi_TpTpCalc", &quarkPhi_TpTpCalc, &b_quarkPhi_TpTpCalc);
   inputTree->SetBranchAddress("quarkPt_TpTpCalc", &quarkPt_TpTpCalc, &b_quarkPt_TpTpCalc);
   inputTree->SetBranchAddress("sphericityH_BestCalc", &sphericityH_BestCalc, &b_sphericityH_BestCalc);
   inputTree->SetBranchAddress("sphericityW_BestCalc", &sphericityW_BestCalc, &b_sphericityW_BestCalc);
   inputTree->SetBranchAddress("sphericityZ_BestCalc", &sphericityZ_BestCalc, &b_sphericityZ_BestCalc);
   inputTree->SetBranchAddress("sphericitytop_BestCalc", &sphericitytop_BestCalc, &b_sphericitytop_BestCalc);
   inputTree->SetBranchAddress("tPrimeEnergy_TpTpCalc", &tPrimeEnergy_TpTpCalc, &b_tPrimeEnergy_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeEta_TpTpCalc", &tPrimeEta_TpTpCalc, &b_tPrimeEta_TpTpCalc);
   inputTree->SetBranchAddress("tPrimeMass_TpTpCalc", &tPrimeMass_TpTpCalc, &b_tPrimeMass_TpTpCalc);
   inputTree->SetBranchAddress("tPrimePhi_TpTpCalc", &tPrimePhi_TpTpCalc, &b_tPrimePhi_TpTpCalc);
   inputTree->SetBranchAddress("tPrimePt_TpTpCalc", &tPrimePt_TpTpCalc, &b_tPrimePt_TpTpCalc);
   inputTree->SetBranchAddress("tau21_BestCalc", &tau21_BestCalc, &b_tau21_BestCalc);
   inputTree->SetBranchAddress("tau32_BestCalc", &tau32_BestCalc, &b_tau32_BestCalc);
   inputTree->SetBranchAddress("theJetAK8CHSEta_JetSubCalc", &theJetAK8CHSEta_JetSubCalc, &b_theJetAK8CHSEta_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSMass_JetSubCalc", &theJetAK8CHSMass_JetSubCalc, &b_theJetAK8CHSMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSPhi_JetSubCalc", &theJetAK8CHSPhi_JetSubCalc, &b_theJetAK8CHSPhi_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSPrunedMass_JetSubCalc", &theJetAK8CHSPrunedMass_JetSubCalc, &b_theJetAK8CHSPrunedMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSPt_JetSubCalc", &theJetAK8CHSPt_JetSubCalc, &b_theJetAK8CHSPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSSoftDropMass_JetSubCalc", &theJetAK8CHSSoftDropMass_JetSubCalc, &b_theJetAK8CHSSoftDropMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSTau1_JetSubCalc", &theJetAK8CHSTau1_JetSubCalc, &b_theJetAK8CHSTau1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSTau2_JetSubCalc", &theJetAK8CHSTau2_JetSubCalc, &b_theJetAK8CHSTau2_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CHSTau3_JetSubCalc", &theJetAK8CHSTau3_JetSubCalc, &b_theJetAK8CHSTau3_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8CSV_JetSubCalc", &theJetAK8CSV_JetSubCalc, &b_theJetAK8CSV_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8DoubleB_JetSubCalc", &theJetAK8DoubleB_JetSubCalc, &b_theJetAK8DoubleB_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Energy_JetSubCalc", &theJetAK8Energy_JetSubCalc, &b_theJetAK8Energy_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Eta_JetSubCalc", &theJetAK8Eta_JetSubCalc, &b_theJetAK8Eta_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8GenDR_JetSubCalc", &theJetAK8GenDR_JetSubCalc, &b_theJetAK8GenDR_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8GenMass_JetSubCalc", &theJetAK8GenMass_JetSubCalc, &b_theJetAK8GenMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8GenPt_JetSubCalc", &theJetAK8GenPt_JetSubCalc, &b_theJetAK8GenPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8JetCharge_JetSubCalc", &theJetAK8JetCharge_JetSubCalc, &b_theJetAK8JetCharge_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Mass_JetSubCalc", &theJetAK8Mass_JetSubCalc, &b_theJetAK8Mass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau1_JetSubCalc", &theJetAK8NjettinessTau1_JetSubCalc, &b_theJetAK8NjettinessTau1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau2_JetSubCalc", &theJetAK8NjettinessTau2_JetSubCalc, &b_theJetAK8NjettinessTau2_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8NjettinessTau3_JetSubCalc", &theJetAK8NjettinessTau3_JetSubCalc, &b_theJetAK8NjettinessTau3_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Phi_JetSubCalc", &theJetAK8Phi_JetSubCalc, &b_theJetAK8Phi_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8Pt_JetSubCalc", &theJetAK8Pt_JetSubCalc, &b_theJetAK8Pt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetBTag_JetSubCalc", &theJetAK8SDSubjetBTag_JetSubCalc, &b_theJetAK8SDSubjetBTag_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVb_JetSubCalc", &theJetAK8SDSubjetCSVb_JetSubCalc, &b_theJetAK8SDSubjetCSVb_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVbb_JetSubCalc", &theJetAK8SDSubjetCSVbb_JetSubCalc, &b_theJetAK8SDSubjetCSVbb_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVc_JetSubCalc", &theJetAK8SDSubjetCSVc_JetSubCalc, &b_theJetAK8SDSubjetCSVc_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetCSVudsg_JetSubCalc", &theJetAK8SDSubjetCSVudsg_JetSubCalc, &b_theJetAK8SDSubjetCSVudsg_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetDR_JetSubCalc", &theJetAK8SDSubjetDR_JetSubCalc, &b_theJetAK8SDSubjetDR_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetEta_JetSubCalc", &theJetAK8SDSubjetEta_JetSubCalc, &b_theJetAK8SDSubjetEta_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetMass_JetSubCalc", &theJetAK8SDSubjetMass_JetSubCalc, &b_theJetAK8SDSubjetMass_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetPhi_JetSubCalc", &theJetAK8SDSubjetPhi_JetSubCalc, &b_theJetAK8SDSubjetPhi_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SDSubjetPt_JetSubCalc", &theJetAK8SDSubjetPt_JetSubCalc, &b_theJetAK8SDSubjetPt_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropCorr_JetSubCalc", &theJetAK8SoftDropCorr_JetSubCalc, &b_theJetAK8SoftDropCorr_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropRaw_JetSubCalc", &theJetAK8SoftDropRaw_JetSubCalc, &b_theJetAK8SoftDropRaw_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMRdn_JetSubCalc", &theJetAK8SoftDrop_JMRdn_JetSubCalc, &b_theJetAK8SoftDrop_JMRdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMRup_JetSubCalc", &theJetAK8SoftDrop_JMRup_JetSubCalc, &b_theJetAK8SoftDrop_JMRup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMSdn_JetSubCalc", &theJetAK8SoftDrop_JMSdn_JetSubCalc, &b_theJetAK8SoftDrop_JMSdn_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JMSup_JetSubCalc", &theJetAK8SoftDrop_JMSup_JetSubCalc, &b_theJetAK8SoftDrop_JMSup_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDrop_JetSubCalc", &theJetAK8SoftDrop_JetSubCalc, &b_theJetAK8SoftDrop_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn2b1_JetSubCalc", &theJetAK8SoftDropn2b1_JetSubCalc, &b_theJetAK8SoftDropn2b1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn2b2_JetSubCalc", &theJetAK8SoftDropn2b2_JetSubCalc, &b_theJetAK8SoftDropn2b2_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn3b1_JetSubCalc", &theJetAK8SoftDropn3b1_JetSubCalc, &b_theJetAK8SoftDropn3b1_JetSubCalc);
   inputTree->SetBranchAddress("theJetAK8SoftDropn3b2_JetSubCalc", &theJetAK8SoftDropn3b2_JetSubCalc, &b_theJetAK8SoftDropn3b2_JetSubCalc);
   inputTree->SetBranchAddress("theJetDeepCSVb_JetSubCalc", &theJetDeepCSVb_JetSubCalc, &b_theJetDeepCSVb_JetSubCalc);
   inputTree->SetBranchAddress("theJetDeepCSVbb_JetSubCalc", &theJetDeepCSVbb_JetSubCalc, &b_theJetDeepCSVbb_JetSubCalc);
   //inputTree->SetBranchAddress("theJetCSVc_JetSubCalc", &theJetCSVc_JetSubCalc, &b_theJetCSVc_JetSubCalc);
   //inputTree->SetBranchAddress("theJetCSVudsg_JetSubCalc", &theJetCSVudsg_JetSubCalc, &b_theJetCSVudsg_JetSubCalc);
   inputTree->SetBranchAddress("theJetEnergy_JetSubCalc", &theJetEnergy_JetSubCalc, &b_theJetEnergy_JetSubCalc);
   inputTree->SetBranchAddress("theJetEta_JetSubCalc", &theJetEta_JetSubCalc, &b_theJetEta_JetSubCalc);
   inputTree->SetBranchAddress("theJetPhi_JetSubCalc", &theJetPhi_JetSubCalc, &b_theJetPhi_JetSubCalc);
   inputTree->SetBranchAddress("theJetPileupJetId_JetSubCalc", &theJetPileupJetId_JetSubCalc, &b_theJetPileupJetId_JetSubCalc);
   inputTree->SetBranchAddress("theJetPt_JetSubCalc", &theJetPt_JetSubCalc, &b_theJetPt_JetSubCalc);
   inputTree->SetBranchAddress("thrustH_BestCalc", &thrustH_BestCalc, &b_thrustH_BestCalc);
   inputTree->SetBranchAddress("thrustW_BestCalc", &thrustW_BestCalc, &b_thrustW_BestCalc);
   inputTree->SetBranchAddress("thrustZ_BestCalc", &thrustZ_BestCalc, &b_thrustZ_BestCalc);
   inputTree->SetBranchAddress("thrusttop_BestCalc", &thrusttop_BestCalc, &b_thrusttop_BestCalc);
   inputTree->SetBranchAddress("topEnergy_TTbarMassCalc", &topEnergy_TTbarMassCalc, &b_topEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("topEta_TTbarMassCalc", &topEta_TTbarMassCalc, &b_topEta_TTbarMassCalc);
   inputTree->SetBranchAddress("topMass_TTbarMassCalc", &topMass_TTbarMassCalc, &b_topMass_TTbarMassCalc);
   inputTree->SetBranchAddress("topPhi_TTbarMassCalc", &topPhi_TTbarMassCalc, &b_topPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("topPt_TTbarMassCalc", &topPt_TTbarMassCalc, &b_topPt_TTbarMassCalc);
   inputTree->SetBranchAddress("topWEnergy_TTbarMassCalc", &topWEnergy_TTbarMassCalc, &b_topWEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("topWEta_TTbarMassCalc", &topWEta_TTbarMassCalc, &b_topWEta_TTbarMassCalc);
   inputTree->SetBranchAddress("topWPhi_TTbarMassCalc", &topWPhi_TTbarMassCalc, &b_topWPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("topWPt_TTbarMassCalc", &topWPt_TTbarMassCalc, &b_topWPt_TTbarMassCalc);
   inputTree->SetBranchAddress("topbEnergy_TTbarMassCalc", &topbEnergy_TTbarMassCalc, &b_topbEnergy_TTbarMassCalc);
   inputTree->SetBranchAddress("topbEta_TTbarMassCalc", &topbEta_TTbarMassCalc, &b_topbEta_TTbarMassCalc);
   inputTree->SetBranchAddress("topbPhi_TTbarMassCalc", &topbPhi_TTbarMassCalc, &b_topbPhi_TTbarMassCalc);
   inputTree->SetBranchAddress("topbPt_TTbarMassCalc", &topbPt_TTbarMassCalc, &b_topbPt_TTbarMassCalc);
   inputTree->SetBranchAddress("electron_hltfilters_MultiLepCalc", &electron_hltfilters_MultiLepCalc, &b_electron_hltfilters_MultiLepCalc);
   inputTree->SetBranchAddress("muon_hltfilters_MultiLepCalc", &muon_hltfilters_MultiLepCalc, &b_muon_hltfilters_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelMCTriggersEl_MultiLepCalc", &vsSelMCTriggersEl_MultiLepCalc, &b_vsSelMCTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelMCTriggersMu_MultiLepCalc", &vsSelMCTriggersMu_MultiLepCalc, &b_vsSelMCTriggersMu_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelTriggersEl_MultiLepCalc", &vsSelTriggersEl_MultiLepCalc, &b_vsSelTriggersEl_MultiLepCalc);
   inputTree->SetBranchAddress("vsSelTriggersMu_MultiLepCalc", &vsSelTriggersMu_MultiLepCalc, &b_vsSelTriggersMu_MultiLepCalc);
   Notify();
}

Bool_t step1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void step1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!inputTree) return;
   inputTree->Show(entry);
}
Int_t step1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef step1_cxx
