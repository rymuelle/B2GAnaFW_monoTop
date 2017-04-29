//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr 28 15:06:23 2017 by ROOT version 6.06/01
// from TTree B2GTree/B2G TTree Ntuple
// found on file: B2GTTreeNtupleExtra_MC_80X.root
//////////////////////////////////////////////////////////

#ifndef B2GTTree_h
#define B2GTTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class B2GTTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          evt_RunNumber;
   UInt_t          evt_LumiBlock;
   ULong64_t       evt_EventNumber;
   Int_t           pu_NtrueInt;
   Int_t           Flag_BadPFMuonFilter;
   Int_t           Flag_BadChargedCandidateFilter;
   UInt_t          met_size;
   Float_t         met_Pt[1];   //[met_size]
   Float_t         met_Phi[1];   //[met_size]
   UInt_t          puppimet_size;
   Float_t         puppimet_Pt[1];   //[puppimet_size]
   Float_t         puppimet_Phi[1];   //[puppimet_size]
   UInt_t          el_size;
   Float_t         el_Pt[5];   //[el_size]
   Float_t         el_Eta[5];   //[el_size]
   Float_t         el_Phi[5];   //[el_size]
   Float_t         el_E[5];   //[el_size]
   Float_t         el_Charge[5];   //[el_size]
   Float_t         el_Key[5];   //[el_size]
   Float_t         el_Iso03[5];   //[el_size]
   Float_t         el_Iso03db[5];   //[el_size]
   Float_t         el_MiniIso[5];   //[el_size]
   Float_t         el_Dxy[5];   //[el_size]
   Float_t         el_Dz[5];   //[el_size]
   Float_t         el_DB[5];   //[el_size]
   Float_t         el_DBerr[5];   //[el_size]
   Float_t         el_SCEta[5];   //[el_size]
   Float_t         el_vidVeto[5];   //[el_size]
   Float_t         el_vidLoose[5];   //[el_size]
   Float_t         el_vidMedium[5];   //[el_size]
   Float_t         el_vidTight[5];   //[el_size]
   Float_t         el_vidHEEP[5];   //[el_size]
   Float_t         el_vidVetonoiso[5];   //[el_size]
   Float_t         el_vidLoosenoiso[5];   //[el_size]
   Float_t         el_vidMediumnoiso[5];   //[el_size]
   Float_t         el_vidTightnoiso[5];   //[el_size]
   Float_t         el_vidHEEPnoiso[5];   //[el_size]
   Float_t         el_vidMvaGPvalue[5];   //[el_size]
   Float_t         el_vidMvaGPcateg[5];   //[el_size]
   Float_t         el_vidMvaHZZvalue[5];   //[el_size]
   Float_t         el_vidMvaHZZcateg[5];   //[el_size]
   UInt_t          mu_size;
   Float_t         mu_Pt[42];   //[mu_size]
   Float_t         mu_Eta[42];   //[mu_size]
   Float_t         mu_Phi[42];   //[mu_size]
   Float_t         mu_E[42];   //[mu_size]
   Float_t         mu_Charge[42];   //[mu_size]
   Float_t         mu_Key[42];   //[mu_size]
   Float_t         mu_Iso04[42];   //[mu_size]
   Float_t         mu_MiniIso[42];   //[mu_size]
   Float_t         mu_Dxy[42];   //[mu_size]
   Float_t         mu_Dz[42];   //[mu_size]
   Float_t         mu_DB[42];   //[mu_size]
   Float_t         mu_DBerr[42];   //[mu_size]
   Float_t         mu_IsSoftMuon[42];   //[mu_size]
   Float_t         mu_IsLooseMuon[42];   //[mu_size]
   Float_t         mu_IsMediumMuon[42];   //[mu_size]
   Float_t         mu_IsMediumMuon2016[42];   //[mu_size]
   Float_t         mu_IsTightMuon[42];   //[mu_size]
   Float_t         mu_IsHighPtMuon[42];   //[mu_size]
   UInt_t          jetAK4CHS_size;
   Float_t         jetAK4CHS_Pt[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_Eta[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_Phi[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_E[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_Charge[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_CSVv2[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_CMVAv2[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_CvsL[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_CvsB[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenPartonEta[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenPartonPhi[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenPartonPt[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenPartonE[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenPartonCharge[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_PartonFlavour[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_HadronFlavour[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenJetEta[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenJetPhi[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenJetPt[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenJetE[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_GenJetCharge[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_jecFactor0[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_jecUncertainty[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_JERSF[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_JERSFUp[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_JERSFDown[27];   //[jetAK4CHS_size]
   Float_t         jetAK4CHS_SmearedPt[27];   //[jetAK4CHS_size]
   vector<vector<int> > *jetAK4CHS_Keys;
   UInt_t          jetAK8CHS_size;
   Float_t         jetAK8CHS_Pt[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_Eta[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_Phi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_E[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_Charge[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_CSVv2[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_CMVAv2[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_CvsL[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_CvsB[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenPartonEta[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenPartonPhi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenPartonPt[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenPartonE[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenPartonCharge[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_PartonFlavour[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_HadronFlavour[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenJetEta[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenJetPhi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenJetPt[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenJetE[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_GenJetCharge[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_jecFactor0[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_jecUncertainty[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_JERSF[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_JERSFUp[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_JERSFDown[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SmearedPt[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_vSubjetIndex0[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_vSubjetIndex1[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_tau1CHS[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_tau2CHS[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_tau3CHS[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_softDropMassCHS[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_softDropMassPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_PtPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_EtaPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_PhiPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_MassPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_tau1Puppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_tau2Puppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_tau3Puppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_uncorrSDMassPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_corrSDMassPuppi[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_PhotonIndex[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubwGammatIndex[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_PhotonSubjetFrac[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetPt0[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetPt1[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetPt2[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetEta0[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetEta1[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetEta2[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetPhi0[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetPhi1[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetPhi2[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetEne0[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetEne1[3];   //[jetAK8CHS_size]
   Float_t         jetAK8CHS_SubjetEne2[3];   //[jetAK8CHS_size]
   vector<vector<int> > *jetAK8CHS_Keys;
   UInt_t          jetAK8Puppi_size;
   Float_t         jetAK8Puppi_Pt[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_Eta[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_Phi[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_E[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_Charge[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_CSVv2[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_CMVAv2[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_CvsL[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_CvsB[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenPartonEta[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenPartonPhi[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenPartonPt[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenPartonE[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenPartonCharge[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_PartonFlavour[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_HadronFlavour[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenJetEta[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenJetPhi[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenJetPt[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenJetE[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_GenJetCharge[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_jecFactor0[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_jecUncertainty[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_JERSF[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_JERSFUp[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_JERSFDown[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_SmearedPt[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DoubleBAK8[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DoubleBCA15[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_vSubjetIndex0[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_vSubjetIndex1[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_tau1[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_tau2[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_tau3[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_softDropMass[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_filteredMass[4];   //[jetAK8Puppi_size]
   vector<vector<int> > *jetAK8Puppi_Keys;
   UInt_t          subjetAK8CHS_size;
   Float_t         subjetAK8CHS_Pt[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_Eta[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_Phi[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_E[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_Charge[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_CSVv2[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_CMVAv2[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_CvsL[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_CvsB[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenPartonEta[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenPartonPhi[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenPartonPt[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenPartonE[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenPartonCharge[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_PartonFlavour[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_HadronFlavour[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenJetEta[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenJetPhi[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenJetPt[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenJetE[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_GenJetCharge[6];   //[subjetAK8CHS_size]
   Float_t         subjetAK8CHS_jecFactor0[6];   //[subjetAK8CHS_size]
   vector<vector<int> > *subjetAK8CHS_Keys;
   UInt_t          subjetAK8Puppi_size;
   Float_t         subjetAK8Puppi_Pt[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_Eta[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_Phi[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_E[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_Charge[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_CSVv2[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_CMVAv2[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_CvsL[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_CvsB[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenPartonEta[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenPartonPhi[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenPartonPt[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenPartonE[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenPartonCharge[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_PartonFlavour[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_HadronFlavour[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenJetEta[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenJetPhi[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenJetPt[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenJetE[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_GenJetCharge[6];   //[subjetAK8Puppi_size]
   Float_t         subjetAK8Puppi_jecFactor0[6];   //[subjetAK8Puppi_size]
   vector<vector<int> > *subjetAK8Puppi_Keys;
   UInt_t          genjetAK8SD_size;
   Float_t         genjetAK8SD_Pt[37];   //[genjetAK8SD_size]
   Float_t         genjetAK8SD_Eta[37];   //[genjetAK8SD_size]
   Float_t         genjetAK8SD_Phi[37];   //[genjetAK8SD_size]
   Float_t         genjetAK8SD_E[37];   //[genjetAK8SD_size]
   Float_t         genjetAK8SD_Charge[37];   //[genjetAK8SD_size]
   Int_t           Flag_HBHENoiseFilter;
   Int_t           Flag_HBHENoiseIsoFilter;
   Int_t           Flag_CSCTightHaloFilter;
   Int_t           Flag_CSCTightHaloTrkMuUnvetoFilter;
   Int_t           Flag_CSCTightHalo2015Filter;
   Int_t           Flag_globalTightHalo2016Filter;
   Int_t           Flag_globalSuperTightHalo2016Filter;
   Int_t           Flag_HcalStripHaloFilter;
   Int_t           Flag_hcalLaserEventFilter;
   Int_t           Flag_EcalDeadCellTriggerPrimitiveFilter;
   Int_t           Flag_EcalDeadCellBoundaryEnergyFilter;
   Int_t           Flag_goodVertices;
   Int_t           Flag_eeBadScFilter;
   Int_t           Flag_ecalLaserCorrFilter;
   Int_t           Flag_trkPOGFilters;
   Int_t           Flag_chargedHadronTrackResolutionFilter;
   Int_t           Flag_muonBadTrackFilter;
   Int_t           Flag_trkPOG_manystripclus53X;
   Int_t           Flag_trkPOG_toomanystripclus53X;
   Int_t           Flag_trkPOG_logErrorTooManyClusters;
   Int_t           Flag_METFilters;
   Int_t           Flag_badMuons;
   Int_t           Flag_duplicateMuons;
   Int_t           Flag_noBadMuons;
   Int_t           HLT_PFJet40;
   Int_t           HLT_PFJet40_prescale;
   Int_t           HLT_PFJet60;
   Int_t           HLT_PFJet60_prescale;
   Int_t           HLT_PFJet80;
   Int_t           HLT_PFJet80_prescale;
   Int_t           HLT_PFJet140;
   Int_t           HLT_PFJet140_prescale;
   Int_t           HLT_PFJet200;
   Int_t           HLT_PFJet200_prescale;
   Int_t           HLT_PFJet260;
   Int_t           HLT_PFJet260_prescale;
   Int_t           HLT_PFJet320;
   Int_t           HLT_PFJet320_prescale;
   Int_t           HLT_PFJet400;
   Int_t           HLT_PFJet400_prescale;
   Int_t           HLT_PFJet450;
   Int_t           HLT_PFJet450_prescale;
   Int_t           HLT_PFJet500;
   Int_t           HLT_PFJet500_prescale;
   Int_t           HLT_AK8PFJet40;
   Int_t           HLT_AK8PFJet40_prescale;
   Int_t           HLT_AK8PFJet60;
   Int_t           HLT_AK8PFJet60_prescale;
   Int_t           HLT_AK8PFJet80;
   Int_t           HLT_AK8PFJet80_prescale;
   Int_t           HLT_AK8PFJet140;
   Int_t           HLT_AK8PFJet140_prescale;
   Int_t           HLT_AK8PFJet200;
   Int_t           HLT_AK8PFJet200_prescale;
   Int_t           HLT_AK8PFJet260;
   Int_t           HLT_AK8PFJet260_prescale;
   Int_t           HLT_AK8PFJet320;
   Int_t           HLT_AK8PFJet320_prescale;
   Int_t           HLT_AK8PFJet360_TrimMass30;
   Int_t           HLT_AK8PFJet360_TrimMass30_prescale;
   Int_t           HLT_AK8PFJet400_TrimMass30;
   Int_t           HLT_AK8PFJet400_TrimMass30_prescale;
   Int_t           HLT_AK8PFJet400;
   Int_t           HLT_AK8PFJet400_prescale;
   Int_t           HLT_AK8PFJet450;
   Int_t           HLT_AK8PFJet450_prescale;
   Int_t           HLT_AK8PFJet500;
   Int_t           HLT_AK8PFJet500_prescale;
   Int_t           HLT_PFHT125;
   Int_t           HLT_PFHT125_prescale;
   Int_t           HLT_PFHT200;
   Int_t           HLT_PFHT200_prescale;
   Int_t           HLT_PFHT250;
   Int_t           HLT_PFHT250_prescale;
   Int_t           HLT_PFHT300;
   Int_t           HLT_PFHT300_prescale;
   Int_t           HLT_PFHT350;
   Int_t           HLT_PFHT350_prescale;
   Int_t           HLT_PFHT400;
   Int_t           HLT_PFHT400_prescale;
   Int_t           HLT_PFHT475;
   Int_t           HLT_PFHT475_prescale;
   Int_t           HLT_PFHT600;
   Int_t           HLT_PFHT600_prescale;
   Int_t           HLT_PFHT650;
   Int_t           HLT_PFHT650_prescale;
   Int_t           HLT_PFHT800;
   Int_t           HLT_PFHT800_prescale;
   Int_t           HLT_PFHT900;
   Int_t           HLT_PFHT900_prescale;
   Int_t           HLT_AK8PFHT650_TrimR0p1PT0p03Mass50;
   Int_t           HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_prescale;
   Int_t           HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;
   Int_t           HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_prescale;
   Int_t           HLT_AK8PFHT750_TrimMass50;
   Int_t           HLT_AK8PFHT750_TrimMass50_prescale;
   Int_t           HLT_AK8PFHT800_TrimMass50;
   Int_t           HLT_AK8PFHT800_TrimMass50_prescale;
   Int_t           HLT_PFHT550_4JetPt50;
   Int_t           HLT_PFHT550_4JetPt50_prescale;
   Int_t           HLT_PFHT650_4JetPt50;
   Int_t           HLT_PFHT650_4JetPt50_prescale;
   Int_t           HLT_PFHT750_4JetPt50;
   Int_t           HLT_PFHT750_4JetPt50_prescale;
   Int_t           HLT_PFHT750_4JetPt70;
   Int_t           HLT_PFHT750_4JetPt70_prescale;
   Int_t           HLT_PFHT750_4JetPt80;
   Int_t           HLT_PFHT750_4JetPt80_prescale;
   Int_t           HLT_PFHT800_4JetPt50;
   Int_t           HLT_PFHT800_4JetPt50_prescale;
   Int_t           HLT_PFHT850_4JetPt50;
   Int_t           HLT_PFHT850_4JetPt50_prescale;
   Int_t           HLT_AK8DiPFJet250_200_TrimMass30;
   Int_t           HLT_AK8DiPFJet250_200_TrimMass30_prescale;
   Int_t           HLT_AK8DiPFJet280_200_TrimMass30;
   Int_t           HLT_AK8DiPFJet280_200_TrimMass30_prescale;
   Int_t           HLT_AK8DiPFJet300_200_TrimMass30;
   Int_t           HLT_AK8DiPFJet300_200_TrimMass30_prescale;
   Int_t           HLT_MET100;
   Int_t           HLT_MET100_prescale;
   Int_t           HLT_MET150;
   Int_t           HLT_MET150_prescale;
   Int_t           HLT_MET200;
   Int_t           HLT_MET200_prescale;
   Int_t           HLT_MET250;
   Int_t           HLT_MET250_prescale;
   Int_t           HLT_MET300;
   Int_t           HLT_MET300_prescale;
   Int_t           HLT_MET600;
   Int_t           HLT_MET600_prescale;
   Int_t           HLT_MET700;
   Int_t           HLT_MET700_prescale;
   Int_t           HLT_PFMET170_BeamHaloCleaned;
   Int_t           HLT_PFMET170_BeamHaloCleaned_prescale;
   Int_t           HLT_PFMET170_HBHECleaned;
   Int_t           HLT_PFMET170_HBHECleaned_prescale;
   Int_t           HLT_PFMET170_HBHE_BeamHaloCleaned;
   Int_t           HLT_PFMET170_HBHE_BeamHaloCleaned_prescale;
   Int_t           HLT_PFMET170_JetIdCleaned;
   Int_t           HLT_PFMET170_JetIdCleaned_prescale;
   Int_t           HLT_PFMET170_NoiseCleaned;
   Int_t           HLT_PFMET170_NoiseCleaned_prescale;
   Int_t           HLT_PFMET170_NotCleaned;
   Int_t           HLT_PFMET170_NotCleaned_prescale;
   Int_t           HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned;
   Int_t           HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned_prescale;
   Int_t           HLT_PFMET300;
   Int_t           HLT_PFMET300_prescale;
   Int_t           HLT_PFMET400;
   Int_t           HLT_PFMET400_prescale;
   Int_t           HLT_PFMET500;
   Int_t           HLT_PFMET500_prescale;
   Int_t           HLT_PFMET600;
   Int_t           HLT_PFMET600_prescale;
   Int_t           HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067;
   Int_t           HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_prescale;
   Int_t           HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight;
   Int_t           HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_prescale;
   Int_t           HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned;
   Int_t           HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned_prescale;
   Int_t           HLT_PFMET100_PFMHT100_IDTight;
   Int_t           HLT_PFMET100_PFMHT100_IDTight_prescale;
   Int_t           HLT_PFMET110_PFMHT110_IDTight;
   Int_t           HLT_PFMET110_PFMHT110_IDTight_prescale;
   Int_t           HLT_PFMET120_PFMHT120_IDTight;
   Int_t           HLT_PFMET120_PFMHT120_IDTight_prescale;
   Int_t           HLT_PFMET90_PFMHT90_IDTight;
   Int_t           HLT_PFMET90_PFMHT90_IDTight_prescale;
   Int_t           HLT_PFMETNoMu100_PFMHTNoMu100_IDTight;
   Int_t           HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_prescale;
   Int_t           HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Int_t           HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_prescale;
   Int_t           HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Int_t           HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_prescale;
   Int_t           HLT_PFMETNoMu90_PFMHTNoMu90_IDTight;
   Int_t           HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_prescale;
   Int_t           HLT_Mu17;
   Int_t           HLT_Mu17_prescale;
   Int_t           HLT_Mu20;
   Int_t           HLT_Mu20_prescale;
   Int_t           HLT_Mu27;
   Int_t           HLT_Mu27_prescale;
   Int_t           HLT_Mu50;
   Int_t           HLT_Mu50_prescale;
   Int_t           HLT_Mu55;
   Int_t           HLT_Mu55_prescale;
   Int_t           HLT_TkMu17;
   Int_t           HLT_TkMu17_prescale;
   Int_t           HLT_TkMu20;
   Int_t           HLT_TkMu20_prescale;
   Int_t           HLT_TkMu27;
   Int_t           HLT_TkMu27_prescale;
   Int_t           HLT_TkMu50;
   Int_t           HLT_TkMu50_prescale;
   Int_t           HLT_IsoMu18;
   Int_t           HLT_IsoMu18_prescale;
   Int_t           HLT_IsoMu20;
   Int_t           HLT_IsoMu20_prescale;
   Int_t           HLT_IsoMu22;
   Int_t           HLT_IsoMu22_prescale;
   Int_t           HLT_IsoMu24;
   Int_t           HLT_IsoMu24_prescale;
   Int_t           HLT_IsoMu27;
   Int_t           HLT_IsoMu27_prescale;
   Int_t           HLT_IsoTkMu18;
   Int_t           HLT_IsoTkMu18_prescale;
   Int_t           HLT_IsoTkMu20;
   Int_t           HLT_IsoTkMu20_prescale;
   Int_t           HLT_IsoTkMu22;
   Int_t           HLT_IsoTkMu22_prescale;
   Int_t           HLT_IsoTkMu24;
   Int_t           HLT_IsoTkMu24_prescale;
   Int_t           HLT_IsoTkMu27;
   Int_t           HLT_IsoTkMu27_prescale;
   Int_t           HLT_Ele17_CaloIdL_GsfTrkIdVL;
   Int_t           HLT_Ele17_CaloIdL_GsfTrkIdVL_prescale;
   Int_t           HLT_Ele22_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele22_eta2p1_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele23_WPLoose_Gsf;
   Int_t           HLT_Ele23_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele24_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele24_eta2p1_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele25_WPTight_Gsf;
   Int_t           HLT_Ele25_WPTight_Gsf_prescale;
   Int_t           HLT_Ele25_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele25_eta2p1_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele25_eta2p1_WPTight_Gsf;
   Int_t           HLT_Ele25_eta2p1_WPTight_Gsf_prescale;
   Int_t           HLT_Ele27_WPLoose_Gsf;
   Int_t           HLT_Ele27_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele27_WPTight_Gsf;
   Int_t           HLT_Ele27_WPTight_Gsf_prescale;
   Int_t           HLT_Ele27_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele27_eta2p1_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele27_eta2p1_WPTight_Gsf;
   Int_t           HLT_Ele27_eta2p1_WPTight_Gsf_prescale;
   Int_t           HLT_Ele30_WPTight_Gsf;
   Int_t           HLT_Ele30_WPTight_Gsf_prescale;
   Int_t           HLT_Ele30_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele30_eta2p1_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele30_eta2p1_WPTight_Gsf;
   Int_t           HLT_Ele30_eta2p1_WPTight_Gsf_prescale;
   Int_t           HLT_Ele32_WPTight_Gsf;
   Int_t           HLT_Ele32_WPTight_Gsf_prescale;
   Int_t           HLT_Ele32_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele32_eta2p1_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele32_eta2p1_WPTight_Gsf;
   Int_t           HLT_Ele32_eta2p1_WPTight_Gsf_prescale;
   Int_t           HLT_Ele35_WPLoose_Gsf;
   Int_t           HLT_Ele35_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele45_WPLoose_Gsf;
   Int_t           HLT_Ele45_WPLoose_Gsf_prescale;
   Int_t           HLT_Ele105_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele105_CaloIdVT_GsfTrkIdT_prescale;
   Int_t           HLT_Ele115_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele115_CaloIdVT_GsfTrkIdT_prescale;
   Int_t           HLT_Ele145_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele145_CaloIdVT_GsfTrkIdT_prescale;
   Int_t           HLT_Ele200_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele200_CaloIdVT_GsfTrkIdT_prescale;
   Int_t           HLT_Ele250_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele250_CaloIdVT_GsfTrkIdT_prescale;
   Int_t           HLT_Ele300_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele300_CaloIdVT_GsfTrkIdT_prescale;
   Int_t           HLT_Mu30_eta2p1_PFJet150_PFJet50;
   Int_t           HLT_Mu30_eta2p1_PFJet150_PFJet50_prescale;
   Int_t           HLT_Mu40_eta2p1_PFJet200_PFJet50;
   Int_t           HLT_Mu40_eta2p1_PFJet200_PFJet50_prescale;
   Int_t           HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50;
   Int_t           HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_prescale;
   Int_t           HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50;
   Int_t           HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_prescale;
   Int_t           evt_NGoodVtx;
   Int_t           evt_LHA_PDF_ID;
   Int_t           evt_NIsoTrk;
   Float_t         evt_MR;
   Float_t         evt_MTR;
   Float_t         evt_R;
   Float_t         evt_R2;
   Float_t         evt_MR_Smear;
   Float_t         evt_MTR_Smear;
   Float_t         evt_XSec;
   Float_t         evt_Gen_Weight;
   Float_t         evt_Gen_Ht;
   Float_t         SUSY_Stop_Mass;
   Float_t         SUSY_Gluino_Mass;
   Float_t         SUSY_LSP_Mass;
   UInt_t          gen_size;
   Int_t           gen_ID[58];   //[gen_size]
   Int_t           gen_Status[58];   //[gen_size]
   Int_t           gen_Mom0ID[58];   //[gen_size]
   Int_t           gen_Mom0Status[58];   //[gen_size]
   Int_t           gen_Mom1ID[58];   //[gen_size]
   Int_t           gen_Mom1Status[58];   //[gen_size]
   Int_t           gen_Dau0ID[58];   //[gen_size]
   Int_t           gen_Dau0Status[58];   //[gen_size]
   Int_t           gen_Dau1ID[58];   //[gen_size]
   Int_t           gen_Dau1Status[58];   //[gen_size]
   Int_t           jetAK8Puppi_HasNearGenTop[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_NearGenTopIsHadronic[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_NearGenWIsHadronic[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_NearGenWToENu[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_NearGenWToMuNu[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_NearGenWToTauNu[4];   //[jetAK8Puppi_size]
   UInt_t          jetAK4Puppi_size;
   Int_t           jetAK4Puppi_looseJetID[12];   //[jetAK4Puppi_size]
   Int_t           jetAK4Puppi_tightJetID[12];   //[jetAK4Puppi_size]
   Int_t           jetAK4Puppi_tightLepVetoJetID[12];   //[jetAK4Puppi_size]
   Int_t           jetAK8Puppi_looseJetID[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_tightJetID[4];   //[jetAK8Puppi_size]
   Int_t           jetAK8Puppi_tightLepVetoJetID[4];   //[jetAK8Puppi_size]
   Int_t           subjetAK8Puppi_looseJetID[6];   //[subjetAK8Puppi_size]
   Int_t           subjetAK8Puppi_tightJetID[6];   //[subjetAK8Puppi_size]
   Int_t           subjetAK8Puppi_tightLepVetoJetID[6];   //[subjetAK8Puppi_size]
   Int_t           el_IsPartOfNearAK4Jet[5];   //[el_size]
   Int_t           el_IsPartOfNearAK8Jet[5];   //[el_size]
   Int_t           el_IsPartOfNearSubjet[5];   //[el_size]
   Int_t           mu_IsPartOfNearAK4Jet[42];   //[mu_size]
   Int_t           mu_IsPartOfNearAK8Jet[42];   //[mu_size]
   Int_t           mu_IsPartOfNearSubjet[42];   //[mu_size]
   UInt_t          scale_size;
   Float_t         scale_Weights[1];   //[scale_size]
   UInt_t          pdf_size;
   Float_t         pdf_Weights[1];   //[pdf_size]
   UInt_t          alphas_size;
   Float_t         alphas_Weights[1];   //[alphas_size]
   UInt_t          metsyst_size;
   Float_t         metsyst_Pt[14];   //[metsyst_size]
   Float_t         metsyst_Phi[14];   //[metsyst_size]
   UInt_t          puppimetsyst_size;
   Float_t         puppimetsyst_Pt[14];   //[puppimetsyst_size]
   Float_t         puppimetsyst_Phi[14];   //[puppimetsyst_size]
   Float_t         gen_Pt[58];   //[gen_size]
   Float_t         gen_Eta[58];   //[gen_size]
   Float_t         gen_Phi[58];   //[gen_size]
   Float_t         gen_E[58];   //[gen_size]
   Float_t         gen_Mass[58];   //[gen_size]
   Float_t         gen_Charge[58];   //[gen_size]
   Float_t         jetAK8Puppi_maxSubjetCSVv2[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_maxSubjetCMVAv2[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DRNearGenTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DRNearGenWFromTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DRNearGenBFromTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DRNearGenLepFromSLTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_DRNearGenNuFromSLTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_PtNearGenTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_PtNearGenBFromTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_PtNearGenWFromTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_PtNearGenLepFromSLTop[4];   //[jetAK8Puppi_size]
   Float_t         jetAK8Puppi_PtNearGenNuFromSLTop[4];   //[jetAK8Puppi_size]
   Float_t         el_DRNearGenEleFromSLTop[5];   //[el_size]
   Float_t         el_PtNearGenEleFromSLTop[5];   //[el_size]
   Float_t         el_PtNearGenTop[5];   //[el_size]
   Float_t         el_LepAK4JetFrac[5];   //[el_size]
   Float_t         el_LepAK8JetFrac[5];   //[el_size]
   Float_t         el_LepSubjetFrac[5];   //[el_size]
   Float_t         el_LepAK4JetMassDrop[5];   //[el_size]
   Float_t         el_LepAK8JetMassDrop[5];   //[el_size]
   Float_t         el_LepSubjetMassDrop[5];   //[el_size]
   Float_t         el_AK4JetV1DR[5];   //[el_size]
   Float_t         el_AK4JetV2DR[5];   //[el_size]
   Float_t         el_AK4JetV3DR[5];   //[el_size]
   Float_t         el_AK8JetV1DR[5];   //[el_size]
   Float_t         el_AK8JetV2DR[5];   //[el_size]
   Float_t         el_AK8JetV3DR[5];   //[el_size]
   Float_t         el_SubjetV1DR[5];   //[el_size]
   Float_t         el_SubjetV2DR[5];   //[el_size]
   Float_t         el_SubjetV3DR[5];   //[el_size]
   Float_t         el_AK4JetV1PtRel[5];   //[el_size]
   Float_t         el_AK4JetV2PtRel[5];   //[el_size]
   Float_t         el_AK4JetV3PtRel[5];   //[el_size]
   Float_t         el_AK8JetV1PtRel[5];   //[el_size]
   Float_t         el_AK8JetV2PtRel[5];   //[el_size]
   Float_t         el_AK8JetV3PtRel[5];   //[el_size]
   Float_t         el_SubjetV1PtRel[5];   //[el_size]
   Float_t         el_SubjetV2PtRel[5];   //[el_size]
   Float_t         el_SubjetV3PtRel[5];   //[el_size]
   Float_t         mu_DRNearGenMuFromSLTop[42];   //[mu_size]
   Float_t         mu_PtNearGenMuFromSLTop[42];   //[mu_size]
   Float_t         mu_PtNearGenTop[42];   //[mu_size]
   Float_t         mu_LepAK4JetFrac[42];   //[mu_size]
   Float_t         mu_LepAK8JetFrac[42];   //[mu_size]
   Float_t         mu_LepSubjetFrac[42];   //[mu_size]
   Float_t         mu_LepAK4JetMassDrop[42];   //[mu_size]
   Float_t         mu_LepAK8JetMassDrop[42];   //[mu_size]
   Float_t         mu_LepSubjetMassDrop[42];   //[mu_size]
   Float_t         mu_AK4JetV1DR[42];   //[mu_size]
   Float_t         mu_AK4JetV2DR[42];   //[mu_size]
   Float_t         mu_AK4JetV3DR[42];   //[mu_size]
   Float_t         mu_AK8JetV1DR[42];   //[mu_size]
   Float_t         mu_AK8JetV2DR[42];   //[mu_size]
   Float_t         mu_AK8JetV3DR[42];   //[mu_size]
   Float_t         mu_SubjetV1DR[42];   //[mu_size]
   Float_t         mu_SubjetV2DR[42];   //[mu_size]
   Float_t         mu_SubjetV3DR[42];   //[mu_size]
   Float_t         mu_AK4JetV1PtRel[42];   //[mu_size]
   Float_t         mu_AK4JetV2PtRel[42];   //[mu_size]
   Float_t         mu_AK4JetV3PtRel[42];   //[mu_size]
   Float_t         mu_AK8JetV1PtRel[42];   //[mu_size]
   Float_t         mu_AK8JetV2PtRel[42];   //[mu_size]
   Float_t         mu_AK8JetV3PtRel[42];   //[mu_size]
   Float_t         mu_SubjetV1PtRel[42];   //[mu_size]
   Float_t         mu_SubjetV2PtRel[42];   //[mu_size]
   Float_t         mu_SubjetV3PtRel[42];   //[mu_size]

   // List of branches
   TBranch        *b_evt_RunNumber;   //!
   TBranch        *b_evt_LumiBlock;   //!
   TBranch        *b_evt_EventNumber;   //!
   TBranch        *b_pu_NtrueInt;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_met_size;   //!
   TBranch        *b_met_Pt;   //!
   TBranch        *b_met_Phi;   //!
   TBranch        *b_puppimet_size;   //!
   TBranch        *b_puppimet_Pt;   //!
   TBranch        *b_puppimet_Phi;   //!
   TBranch        *b_el_size;   //!
   TBranch        *b_el_Pt;   //!
   TBranch        *b_el_Eta;   //!
   TBranch        *b_el_Phi;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Charge;   //!
   TBranch        *b_el_Key;   //!
   TBranch        *b_el_Iso03;   //!
   TBranch        *b_el_Iso03db;   //!
   TBranch        *b_el_MiniIso;   //!
   TBranch        *b_el_Dxy;   //!
   TBranch        *b_el_Dz;   //!
   TBranch        *b_el_DB;   //!
   TBranch        *b_el_DBerr;   //!
   TBranch        *b_el_SCEta;   //!
   TBranch        *b_el_vidVeto;   //!
   TBranch        *b_el_vidLoose;   //!
   TBranch        *b_el_vidMedium;   //!
   TBranch        *b_el_vidTight;   //!
   TBranch        *b_el_vidHEEP;   //!
   TBranch        *b_el_vidVetonoiso;   //!
   TBranch        *b_el_vidLoosenoiso;   //!
   TBranch        *b_el_vidMediumnoiso;   //!
   TBranch        *b_el_vidTightnoiso;   //!
   TBranch        *b_el_vidHEEPnoiso;   //!
   TBranch        *b_el_vidMvaGPvalue;   //!
   TBranch        *b_el_vidMvaGPcateg;   //!
   TBranch        *b_el_vidMvaHZZvalue;   //!
   TBranch        *b_el_vidMvaHZZcateg;   //!
   TBranch        *b_mu_size;   //!
   TBranch        *b_mu_Pt;   //!
   TBranch        *b_mu_Eta;   //!
   TBranch        *b_mu_Phi;   //!
   TBranch        *b_mu_E;   //!
   TBranch        *b_mu_Charge;   //!
   TBranch        *b_mu_Key;   //!
   TBranch        *b_mu_Iso04;   //!
   TBranch        *b_mu_MiniIso;   //!
   TBranch        *b_mu_Dxy;   //!
   TBranch        *b_mu_Dz;   //!
   TBranch        *b_mu_DB;   //!
   TBranch        *b_mu_DBerr;   //!
   TBranch        *b_mu_IsSoftMuon;   //!
   TBranch        *b_mu_IsLooseMuon;   //!
   TBranch        *b_mu_IsMediumMuon;   //!
   TBranch        *b_mu_IsMediumMuon2016;   //!
   TBranch        *b_mu_IsTightMuon;   //!
   TBranch        *b_mu_IsHighPtMuon;   //!
   TBranch        *b_jetAK4CHS_size;   //!
   TBranch        *b_jetAK4CHS_Pt;   //!
   TBranch        *b_jetAK4CHS_Eta;   //!
   TBranch        *b_jetAK4CHS_Phi;   //!
   TBranch        *b_jetAK4CHS_E;   //!
   TBranch        *b_jetAK4CHS_Charge;   //!
   TBranch        *b_jetAK4CHS_CSVv2;   //!
   TBranch        *b_jetAK4CHS_CMVAv2;   //!
   TBranch        *b_jetAK4CHS_CvsL;   //!
   TBranch        *b_jetAK4CHS_CvsB;   //!
   TBranch        *b_jetAK4CHS_GenPartonEta;   //!
   TBranch        *b_jetAK4CHS_GenPartonPhi;   //!
   TBranch        *b_jetAK4CHS_GenPartonPt;   //!
   TBranch        *b_jetAK4CHS_GenPartonE;   //!
   TBranch        *b_jetAK4CHS_GenPartonCharge;   //!
   TBranch        *b_jetAK4CHS_PartonFlavour;   //!
   TBranch        *b_jetAK4CHS_HadronFlavour;   //!
   TBranch        *b_jetAK4CHS_GenJetEta;   //!
   TBranch        *b_jetAK4CHS_GenJetPhi;   //!
   TBranch        *b_jetAK4CHS_GenJetPt;   //!
   TBranch        *b_jetAK4CHS_GenJetE;   //!
   TBranch        *b_jetAK4CHS_GenJetCharge;   //!
   TBranch        *b_jetAK4CHS_jecFactor0;   //!
   TBranch        *b_jetAK4CHS_jecUncertainty;   //!
   TBranch        *b_jetAK4CHS_JERSF;   //!
   TBranch        *b_jetAK4CHS_JERSFUp;   //!
   TBranch        *b_jetAK4CHS_JERSFDown;   //!
   TBranch        *b_jetAK4CHS_SmearedPt;   //!
   TBranch        *b_jetAK4CHS_Keys;   //!
   TBranch        *b_jetAK8CHS_size;   //!
   TBranch        *b_jetAK8CHS_Pt;   //!
   TBranch        *b_jetAK8CHS_Eta;   //!
   TBranch        *b_jetAK8CHS_Phi;   //!
   TBranch        *b_jetAK8CHS_E;   //!
   TBranch        *b_jetAK8CHS_Charge;   //!
   TBranch        *b_jetAK8CHS_CSVv2;   //!
   TBranch        *b_jetAK8CHS_CMVAv2;   //!
   TBranch        *b_jetAK8CHS_CvsL;   //!
   TBranch        *b_jetAK8CHS_CvsB;   //!
   TBranch        *b_jetAK8CHS_GenPartonEta;   //!
   TBranch        *b_jetAK8CHS_GenPartonPhi;   //!
   TBranch        *b_jetAK8CHS_GenPartonPt;   //!
   TBranch        *b_jetAK8CHS_GenPartonE;   //!
   TBranch        *b_jetAK8CHS_GenPartonCharge;   //!
   TBranch        *b_jetAK8CHS_PartonFlavour;   //!
   TBranch        *b_jetAK8CHS_HadronFlavour;   //!
   TBranch        *b_jetAK8CHS_GenJetEta;   //!
   TBranch        *b_jetAK8CHS_GenJetPhi;   //!
   TBranch        *b_jetAK8CHS_GenJetPt;   //!
   TBranch        *b_jetAK8CHS_GenJetE;   //!
   TBranch        *b_jetAK8CHS_GenJetCharge;   //!
   TBranch        *b_jetAK8CHS_jecFactor0;   //!
   TBranch        *b_jetAK8CHS_jecUncertainty;   //!
   TBranch        *b_jetAK8CHS_JERSF;   //!
   TBranch        *b_jetAK8CHS_JERSFUp;   //!
   TBranch        *b_jetAK8CHS_JERSFDown;   //!
   TBranch        *b_jetAK8CHS_SmearedPt;   //!
   TBranch        *b_jetAK8CHS_vSubjetIndex0;   //!
   TBranch        *b_jetAK8CHS_vSubjetIndex1;   //!
   TBranch        *b_jetAK8CHS_tau1CHS;   //!
   TBranch        *b_jetAK8CHS_tau2CHS;   //!
   TBranch        *b_jetAK8CHS_tau3CHS;   //!
   TBranch        *b_jetAK8CHS_softDropMassCHS;   //!
   TBranch        *b_jetAK8CHS_softDropMassPuppi;   //!
   TBranch        *b_jetAK8CHS_PtPuppi;   //!
   TBranch        *b_jetAK8CHS_EtaPuppi;   //!
   TBranch        *b_jetAK8CHS_PhiPuppi;   //!
   TBranch        *b_jetAK8CHS_MassPuppi;   //!
   TBranch        *b_jetAK8CHS_tau1Puppi;   //!
   TBranch        *b_jetAK8CHS_tau2Puppi;   //!
   TBranch        *b_jetAK8CHS_tau3Puppi;   //!
   TBranch        *b_jetAK8CHS_uncorrSDMassPuppi;   //!
   TBranch        *b_jetAK8CHS_corrSDMassPuppi;   //!
   TBranch        *b_jetAK8CHS_PhotonIndex;   //!
   TBranch        *b_jetAK8CHS_SubwGammatIndex;   //!
   TBranch        *b_jetAK8CHS_PhotonSubjetFrac;   //!
   TBranch        *b_jetAK8CHS_SubjetPt0;   //!
   TBranch        *b_jetAK8CHS_SubjetPt1;   //!
   TBranch        *b_jetAK8CHS_SubjetPt2;   //!
   TBranch        *b_jetAK8CHS_SubjetEta0;   //!
   TBranch        *b_jetAK8CHS_SubjetEta1;   //!
   TBranch        *b_jetAK8CHS_SubjetEta2;   //!
   TBranch        *b_jetAK8CHS_SubjetPhi0;   //!
   TBranch        *b_jetAK8CHS_SubjetPhi1;   //!
   TBranch        *b_jetAK8CHS_SubjetPhi2;   //!
   TBranch        *b_jetAK8CHS_SubjetEne0;   //!
   TBranch        *b_jetAK8CHS_SubjetEne1;   //!
   TBranch        *b_jetAK8CHS_SubjetEne2;   //!
   TBranch        *b_jetAK8CHS_Keys;   //!
   TBranch        *b_jetAK8Puppi_size;   //!
   TBranch        *b_jetAK8Puppi_Pt;   //!
   TBranch        *b_jetAK8Puppi_Eta;   //!
   TBranch        *b_jetAK8Puppi_Phi;   //!
   TBranch        *b_jetAK8Puppi_E;   //!
   TBranch        *b_jetAK8Puppi_Charge;   //!
   TBranch        *b_jetAK8Puppi_CSVv2;   //!
   TBranch        *b_jetAK8Puppi_CMVAv2;   //!
   TBranch        *b_jetAK8Puppi_CvsL;   //!
   TBranch        *b_jetAK8Puppi_CvsB;   //!
   TBranch        *b_jetAK8Puppi_GenPartonEta;   //!
   TBranch        *b_jetAK8Puppi_GenPartonPhi;   //!
   TBranch        *b_jetAK8Puppi_GenPartonPt;   //!
   TBranch        *b_jetAK8Puppi_GenPartonE;   //!
   TBranch        *b_jetAK8Puppi_GenPartonCharge;   //!
   TBranch        *b_jetAK8Puppi_PartonFlavour;   //!
   TBranch        *b_jetAK8Puppi_HadronFlavour;   //!
   TBranch        *b_jetAK8Puppi_GenJetEta;   //!
   TBranch        *b_jetAK8Puppi_GenJetPhi;   //!
   TBranch        *b_jetAK8Puppi_GenJetPt;   //!
   TBranch        *b_jetAK8Puppi_GenJetE;   //!
   TBranch        *b_jetAK8Puppi_GenJetCharge;   //!
   TBranch        *b_jetAK8Puppi_jecFactor0;   //!
   TBranch        *b_jetAK8Puppi_jecUncertainty;   //!
   TBranch        *b_jetAK8Puppi_JERSF;   //!
   TBranch        *b_jetAK8Puppi_JERSFUp;   //!
   TBranch        *b_jetAK8Puppi_JERSFDown;   //!
   TBranch        *b_jetAK8Puppi_SmearedPt;   //!
   TBranch        *b_jetAK8Puppi_DoubleBAK8;   //!
   TBranch        *b_jetAK8Puppi_DoubleBCA15;   //!
   TBranch        *b_jetAK8Puppi_vSubjetIndex0;   //!
   TBranch        *b_jetAK8Puppi_vSubjetIndex1;   //!
   TBranch        *b_jetAK8Puppi_tau1;   //!
   TBranch        *b_jetAK8Puppi_tau2;   //!
   TBranch        *b_jetAK8Puppi_tau3;   //!
   TBranch        *b_jetAK8Puppi_softDropMass;   //!
   TBranch        *b_jetAK8Puppi_filteredMass;   //!
   TBranch        *b_jetAK8Puppi_Keys;   //!
   TBranch        *b_subjetAK8CHS_size;   //!
   TBranch        *b_subjetAK8CHS_Pt;   //!
   TBranch        *b_subjetAK8CHS_Eta;   //!
   TBranch        *b_subjetAK8CHS_Phi;   //!
   TBranch        *b_subjetAK8CHS_E;   //!
   TBranch        *b_subjetAK8CHS_Charge;   //!
   TBranch        *b_subjetAK8CHS_CSVv2;   //!
   TBranch        *b_subjetAK8CHS_CMVAv2;   //!
   TBranch        *b_subjetAK8CHS_CvsL;   //!
   TBranch        *b_subjetAK8CHS_CvsB;   //!
   TBranch        *b_subjetAK8CHS_GenPartonEta;   //!
   TBranch        *b_subjetAK8CHS_GenPartonPhi;   //!
   TBranch        *b_subjetAK8CHS_GenPartonPt;   //!
   TBranch        *b_subjetAK8CHS_GenPartonE;   //!
   TBranch        *b_subjetAK8CHS_GenPartonCharge;   //!
   TBranch        *b_subjetAK8CHS_PartonFlavour;   //!
   TBranch        *b_subjetAK8CHS_HadronFlavour;   //!
   TBranch        *b_subjetAK8CHS_GenJetEta;   //!
   TBranch        *b_subjetAK8CHS_GenJetPhi;   //!
   TBranch        *b_subjetAK8CHS_GenJetPt;   //!
   TBranch        *b_subjetAK8CHS_GenJetE;   //!
   TBranch        *b_subjetAK8CHS_GenJetCharge;   //!
   TBranch        *b_subjetAK8CHS_jecFactor0;   //!
   TBranch        *b_subjetAK8CHS_Keys;   //!
   TBranch        *b_subjetAK8Puppi_size;   //!
   TBranch        *b_subjetAK8Puppi_Pt;   //!
   TBranch        *b_subjetAK8Puppi_Eta;   //!
   TBranch        *b_subjetAK8Puppi_Phi;   //!
   TBranch        *b_subjetAK8Puppi_E;   //!
   TBranch        *b_subjetAK8Puppi_Charge;   //!
   TBranch        *b_subjetAK8Puppi_CSVv2;   //!
   TBranch        *b_subjetAK8Puppi_CMVAv2;   //!
   TBranch        *b_subjetAK8Puppi_CvsL;   //!
   TBranch        *b_subjetAK8Puppi_CvsB;   //!
   TBranch        *b_subjetAK8Puppi_GenPartonEta;   //!
   TBranch        *b_subjetAK8Puppi_GenPartonPhi;   //!
   TBranch        *b_subjetAK8Puppi_GenPartonPt;   //!
   TBranch        *b_subjetAK8Puppi_GenPartonE;   //!
   TBranch        *b_subjetAK8Puppi_GenPartonCharge;   //!
   TBranch        *b_subjetAK8Puppi_PartonFlavour;   //!
   TBranch        *b_subjetAK8Puppi_HadronFlavour;   //!
   TBranch        *b_subjetAK8Puppi_GenJetEta;   //!
   TBranch        *b_subjetAK8Puppi_GenJetPhi;   //!
   TBranch        *b_subjetAK8Puppi_GenJetPt;   //!
   TBranch        *b_subjetAK8Puppi_GenJetE;   //!
   TBranch        *b_subjetAK8Puppi_GenJetCharge;   //!
   TBranch        *b_subjetAK8Puppi_jecFactor0;   //!
   TBranch        *b_subjetAK8Puppi_Keys;   //!
   TBranch        *b_genjetAK8SD_size;   //!
   TBranch        *b_genjetAK8SD_Pt;   //!
   TBranch        *b_genjetAK8SD_Eta;   //!
   TBranch        *b_genjetAK8SD_Phi;   //!
   TBranch        *b_genjetAK8SD_E;   //!
   TBranch        *b_genjetAK8SD_Charge;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_badMuons;   //!
   TBranch        *b_Flag_duplicateMuons;   //!
   TBranch        *b_Flag_noBadMuons;   //!
   TBranch        *b_HLT_PFJet40;   //!
   TBranch        *b_HLT_PFJet40_prescale;   //!
   TBranch        *b_HLT_PFJet60;   //!
   TBranch        *b_HLT_PFJet60_prescale;   //!
   TBranch        *b_HLT_PFJet80;   //!
   TBranch        *b_HLT_PFJet80_prescale;   //!
   TBranch        *b_HLT_PFJet140;   //!
   TBranch        *b_HLT_PFJet140_prescale;   //!
   TBranch        *b_HLT_PFJet200;   //!
   TBranch        *b_HLT_PFJet200_prescale;   //!
   TBranch        *b_HLT_PFJet260;   //!
   TBranch        *b_HLT_PFJet260_prescale;   //!
   TBranch        *b_HLT_PFJet320;   //!
   TBranch        *b_HLT_PFJet320_prescale;   //!
   TBranch        *b_HLT_PFJet400;   //!
   TBranch        *b_HLT_PFJet400_prescale;   //!
   TBranch        *b_HLT_PFJet450;   //!
   TBranch        *b_HLT_PFJet450_prescale;   //!
   TBranch        *b_HLT_PFJet500;   //!
   TBranch        *b_HLT_PFJet500_prescale;   //!
   TBranch        *b_HLT_AK8PFJet40;   //!
   TBranch        *b_HLT_AK8PFJet40_prescale;   //!
   TBranch        *b_HLT_AK8PFJet60;   //!
   TBranch        *b_HLT_AK8PFJet60_prescale;   //!
   TBranch        *b_HLT_AK8PFJet80;   //!
   TBranch        *b_HLT_AK8PFJet80_prescale;   //!
   TBranch        *b_HLT_AK8PFJet140;   //!
   TBranch        *b_HLT_AK8PFJet140_prescale;   //!
   TBranch        *b_HLT_AK8PFJet200;   //!
   TBranch        *b_HLT_AK8PFJet200_prescale;   //!
   TBranch        *b_HLT_AK8PFJet260;   //!
   TBranch        *b_HLT_AK8PFJet260_prescale;   //!
   TBranch        *b_HLT_AK8PFJet320;   //!
   TBranch        *b_HLT_AK8PFJet320_prescale;   //!
   TBranch        *b_HLT_AK8PFJet360_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet360_TrimMass30_prescale;   //!
   TBranch        *b_HLT_AK8PFJet400_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet400_TrimMass30_prescale;   //!
   TBranch        *b_HLT_AK8PFJet400;   //!
   TBranch        *b_HLT_AK8PFJet400_prescale;   //!
   TBranch        *b_HLT_AK8PFJet450;   //!
   TBranch        *b_HLT_AK8PFJet450_prescale;   //!
   TBranch        *b_HLT_AK8PFJet500;   //!
   TBranch        *b_HLT_AK8PFJet500_prescale;   //!
   TBranch        *b_HLT_PFHT125;   //!
   TBranch        *b_HLT_PFHT125_prescale;   //!
   TBranch        *b_HLT_PFHT200;   //!
   TBranch        *b_HLT_PFHT200_prescale;   //!
   TBranch        *b_HLT_PFHT250;   //!
   TBranch        *b_HLT_PFHT250_prescale;   //!
   TBranch        *b_HLT_PFHT300;   //!
   TBranch        *b_HLT_PFHT300_prescale;   //!
   TBranch        *b_HLT_PFHT350;   //!
   TBranch        *b_HLT_PFHT350_prescale;   //!
   TBranch        *b_HLT_PFHT400;   //!
   TBranch        *b_HLT_PFHT400_prescale;   //!
   TBranch        *b_HLT_PFHT475;   //!
   TBranch        *b_HLT_PFHT475_prescale;   //!
   TBranch        *b_HLT_PFHT600;   //!
   TBranch        *b_HLT_PFHT600_prescale;   //!
   TBranch        *b_HLT_PFHT650;   //!
   TBranch        *b_HLT_PFHT650_prescale;   //!
   TBranch        *b_HLT_PFHT800;   //!
   TBranch        *b_HLT_PFHT800_prescale;   //!
   TBranch        *b_HLT_PFHT900;   //!
   TBranch        *b_HLT_PFHT900_prescale;   //!
   TBranch        *b_HLT_AK8PFHT650_TrimR0p1PT0p03Mass50;   //!
   TBranch        *b_HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_prescale;   //!
   TBranch        *b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;   //!
   TBranch        *b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_prescale;   //!
   TBranch        *b_HLT_AK8PFHT750_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT750_TrimMass50_prescale;   //!
   TBranch        *b_HLT_AK8PFHT800_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT800_TrimMass50_prescale;   //!
   TBranch        *b_HLT_PFHT550_4JetPt50;   //!
   TBranch        *b_HLT_PFHT550_4JetPt50_prescale;   //!
   TBranch        *b_HLT_PFHT650_4JetPt50;   //!
   TBranch        *b_HLT_PFHT650_4JetPt50_prescale;   //!
   TBranch        *b_HLT_PFHT750_4JetPt50;   //!
   TBranch        *b_HLT_PFHT750_4JetPt50_prescale;   //!
   TBranch        *b_HLT_PFHT750_4JetPt70;   //!
   TBranch        *b_HLT_PFHT750_4JetPt70_prescale;   //!
   TBranch        *b_HLT_PFHT750_4JetPt80;   //!
   TBranch        *b_HLT_PFHT750_4JetPt80_prescale;   //!
   TBranch        *b_HLT_PFHT800_4JetPt50;   //!
   TBranch        *b_HLT_PFHT800_4JetPt50_prescale;   //!
   TBranch        *b_HLT_PFHT850_4JetPt50;   //!
   TBranch        *b_HLT_PFHT850_4JetPt50_prescale;   //!
   TBranch        *b_HLT_AK8DiPFJet250_200_TrimMass30;   //!
   TBranch        *b_HLT_AK8DiPFJet250_200_TrimMass30_prescale;   //!
   TBranch        *b_HLT_AK8DiPFJet280_200_TrimMass30;   //!
   TBranch        *b_HLT_AK8DiPFJet280_200_TrimMass30_prescale;   //!
   TBranch        *b_HLT_AK8DiPFJet300_200_TrimMass30;   //!
   TBranch        *b_HLT_AK8DiPFJet300_200_TrimMass30_prescale;   //!
   TBranch        *b_HLT_MET100;   //!
   TBranch        *b_HLT_MET100_prescale;   //!
   TBranch        *b_HLT_MET150;   //!
   TBranch        *b_HLT_MET150_prescale;   //!
   TBranch        *b_HLT_MET200;   //!
   TBranch        *b_HLT_MET200_prescale;   //!
   TBranch        *b_HLT_MET250;   //!
   TBranch        *b_HLT_MET250_prescale;   //!
   TBranch        *b_HLT_MET300;   //!
   TBranch        *b_HLT_MET300_prescale;   //!
   TBranch        *b_HLT_MET600;   //!
   TBranch        *b_HLT_MET600_prescale;   //!
   TBranch        *b_HLT_MET700;   //!
   TBranch        *b_HLT_MET700_prescale;   //!
   TBranch        *b_HLT_PFMET170_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMET170_BeamHaloCleaned_prescale;   //!
   TBranch        *b_HLT_PFMET170_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET170_HBHECleaned_prescale;   //!
   TBranch        *b_HLT_PFMET170_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMET170_HBHE_BeamHaloCleaned_prescale;   //!
   TBranch        *b_HLT_PFMET170_JetIdCleaned;   //!
   TBranch        *b_HLT_PFMET170_JetIdCleaned_prescale;   //!
   TBranch        *b_HLT_PFMET170_NoiseCleaned;   //!
   TBranch        *b_HLT_PFMET170_NoiseCleaned_prescale;   //!
   TBranch        *b_HLT_PFMET170_NotCleaned;   //!
   TBranch        *b_HLT_PFMET170_NotCleaned_prescale;   //!
   TBranch        *b_HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned_prescale;   //!
   TBranch        *b_HLT_PFMET300;   //!
   TBranch        *b_HLT_PFMET300_prescale;   //!
   TBranch        *b_HLT_PFMET400;   //!
   TBranch        *b_HLT_PFMET400_prescale;   //!
   TBranch        *b_HLT_PFMET500;   //!
   TBranch        *b_HLT_PFMET500_prescale;   //!
   TBranch        *b_HLT_PFMET600;   //!
   TBranch        *b_HLT_PFMET600_prescale;   //!
   TBranch        *b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067;   //!
   TBranch        *b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_prescale;   //!
   TBranch        *b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight;   //!
   TBranch        *b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned_prescale;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMET90_PFMHT90_IDTight;   //!
   TBranch        *b_HLT_PFMET90_PFMHT90_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_prescale;   //!
   TBranch        *b_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_prescale;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_HLT_Mu17_prescale;   //!
   TBranch        *b_HLT_Mu20;   //!
   TBranch        *b_HLT_Mu20_prescale;   //!
   TBranch        *b_HLT_Mu27;   //!
   TBranch        *b_HLT_Mu27_prescale;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_Mu50_prescale;   //!
   TBranch        *b_HLT_Mu55;   //!
   TBranch        *b_HLT_Mu55_prescale;   //!
   TBranch        *b_HLT_TkMu17;   //!
   TBranch        *b_HLT_TkMu17_prescale;   //!
   TBranch        *b_HLT_TkMu20;   //!
   TBranch        *b_HLT_TkMu20_prescale;   //!
   TBranch        *b_HLT_TkMu27;   //!
   TBranch        *b_HLT_TkMu27_prescale;   //!
   TBranch        *b_HLT_TkMu50;   //!
   TBranch        *b_HLT_TkMu50_prescale;   //!
   TBranch        *b_HLT_IsoMu18;   //!
   TBranch        *b_HLT_IsoMu18_prescale;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_IsoMu20_prescale;   //!
   TBranch        *b_HLT_IsoMu22;   //!
   TBranch        *b_HLT_IsoMu22_prescale;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoMu24_prescale;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_IsoMu27_prescale;   //!
   TBranch        *b_HLT_IsoTkMu18;   //!
   TBranch        *b_HLT_IsoTkMu18_prescale;   //!
   TBranch        *b_HLT_IsoTkMu20;   //!
   TBranch        *b_HLT_IsoTkMu20_prescale;   //!
   TBranch        *b_HLT_IsoTkMu22;   //!
   TBranch        *b_HLT_IsoTkMu22_prescale;   //!
   TBranch        *b_HLT_IsoTkMu24;   //!
   TBranch        *b_HLT_IsoTkMu24_prescale;   //!
   TBranch        *b_HLT_IsoTkMu27;   //!
   TBranch        *b_HLT_IsoTkMu27_prescale;   //!
   TBranch        *b_HLT_Ele17_CaloIdL_GsfTrkIdVL;   //!
   TBranch        *b_HLT_Ele17_CaloIdL_GsfTrkIdVL_prescale;   //!
   TBranch        *b_HLT_Ele22_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele22_eta2p1_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele23_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele23_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele25_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele25_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele25_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele25_eta2p1_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele25_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele25_eta2p1_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele27_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele27_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele30_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele30_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele32_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele32_eta2p1_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele32_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_eta2p1_WPTight_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele35_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele45_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele45_WPLoose_Gsf_prescale;   //!
   TBranch        *b_HLT_Ele105_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele105_CaloIdVT_GsfTrkIdT_prescale;   //!
   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT_prescale;   //!
   TBranch        *b_HLT_Ele145_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele145_CaloIdVT_GsfTrkIdT_prescale;   //!
   TBranch        *b_HLT_Ele200_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele200_CaloIdVT_GsfTrkIdT_prescale;   //!
   TBranch        *b_HLT_Ele250_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele250_CaloIdVT_GsfTrkIdT_prescale;   //!
   TBranch        *b_HLT_Ele300_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele300_CaloIdVT_GsfTrkIdT_prescale;   //!
   TBranch        *b_HLT_Mu30_eta2p1_PFJet150_PFJet50;   //!
   TBranch        *b_HLT_Mu30_eta2p1_PFJet150_PFJet50_prescale;   //!
   TBranch        *b_HLT_Mu40_eta2p1_PFJet200_PFJet50;   //!
   TBranch        *b_HLT_Mu40_eta2p1_PFJet200_PFJet50_prescale;   //!
   TBranch        *b_HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50;   //!
   TBranch        *b_HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_prescale;   //!
   TBranch        *b_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50;   //!
   TBranch        *b_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_prescale;   //!
   TBranch        *b_evt_NGoodVtx;   //!
   TBranch        *b_evt_LHA_PDF_ID;   //!
   TBranch        *b_evt_NIsoTrk;   //!
   TBranch        *b_evt_MR;   //!
   TBranch        *b_evt_MTR;   //!
   TBranch        *b_evt_R;   //!
   TBranch        *b_evt_R2;   //!
   TBranch        *b_evt_MR_Smear;   //!
   TBranch        *b_evt_MTR_Smear;   //!
   TBranch        *b_evt_XSec;   //!
   TBranch        *b_evt_Gen_Weight;   //!
   TBranch        *b_evt_Gen_Ht;   //!
   TBranch        *b_SUSY_Stop_Mass;   //!
   TBranch        *b_SUSY_Gluino_Mass;   //!
   TBranch        *b_SUSY_LSP_Mass;   //!
   TBranch        *b_gen_size;   //!
   TBranch        *b_gen_ID;   //!
   TBranch        *b_gen_Status;   //!
   TBranch        *b_gen_Mom0ID;   //!
   TBranch        *b_gen_Mom0Status;   //!
   TBranch        *b_gen_Mom1ID;   //!
   TBranch        *b_gen_Mom1Status;   //!
   TBranch        *b_gen_Dau0ID;   //!
   TBranch        *b_gen_Dau0Status;   //!
   TBranch        *b_gen_Dau1ID;   //!
   TBranch        *b_gen_Dau1Status;   //!
   TBranch        *b_jetAK8Puppi_HasNearGenTop;   //!
   TBranch        *b_jetAK8Puppi_NearGenTopIsHadronic;   //!
   TBranch        *b_jetAK8Puppi_NearGenWIsHadronic;   //!
   TBranch        *b_jetAK8Puppi_NearGenWToENu;   //!
   TBranch        *b_jetAK8Puppi_NearGenWToMuNu;   //!
   TBranch        *b_jetAK8Puppi_NearGenWToTauNu;   //!
   TBranch        *b_jetAK4Puppi_size;   //!
   TBranch        *b_jetAK4Puppi_looseJetID;   //!
   TBranch        *b_jetAK4Puppi_tightJetID;   //!
   TBranch        *b_jetAK4Puppi_tightLepVetoJetID;   //!
   TBranch        *b_jetAK8Puppi_looseJetID;   //!
   TBranch        *b_jetAK8Puppi_tightJetID;   //!
   TBranch        *b_jetAK8Puppi_tightLepVetoJetID;   //!
   TBranch        *b_subjetAK8Puppi_looseJetID;   //!
   TBranch        *b_subjetAK8Puppi_tightJetID;   //!
   TBranch        *b_subjetAK8Puppi_tightLepVetoJetID;   //!
   TBranch        *b_el_IsPartOfNearAK4Jet;   //!
   TBranch        *b_el_IsPartOfNearAK8Jet;   //!
   TBranch        *b_el_IsPartOfNearSubjet;   //!
   TBranch        *b_mu_IsPartOfNearAK4Jet;   //!
   TBranch        *b_mu_IsPartOfNearAK8Jet;   //!
   TBranch        *b_mu_IsPartOfNearSubjet;   //!
   TBranch        *b_scale_size;   //!
   TBranch        *b_scale_Weights;   //!
   TBranch        *b_pdf_size;   //!
   TBranch        *b_pdf_Weights;   //!
   TBranch        *b_alphas_size;   //!
   TBranch        *b_alphas_Weights;   //!
   TBranch        *b_metsyst_size;   //!
   TBranch        *b_metsyst_Pt;   //!
   TBranch        *b_metsyst_Phi;   //!
   TBranch        *b_puppimetsyst_size;   //!
   TBranch        *b_puppimetsyst_Pt;   //!
   TBranch        *b_puppimetsyst_Phi;   //!
   TBranch        *b_gen_Pt;   //!
   TBranch        *b_gen_Eta;   //!
   TBranch        *b_gen_Phi;   //!
   TBranch        *b_gen_E;   //!
   TBranch        *b_gen_Mass;   //!
   TBranch        *b_gen_Charge;   //!
   TBranch        *b_jetAK8Puppi_maxSubjetCSVv2;   //!
   TBranch        *b_jetAK8Puppi_maxSubjetCMVAv2;   //!
   TBranch        *b_jetAK8Puppi_DRNearGenTop;   //!
   TBranch        *b_jetAK8Puppi_DRNearGenWFromTop;   //!
   TBranch        *b_jetAK8Puppi_DRNearGenBFromTop;   //!
   TBranch        *b_jetAK8Puppi_DRNearGenLepFromSLTop;   //!
   TBranch        *b_jetAK8Puppi_DRNearGenNuFromSLTop;   //!
   TBranch        *b_jetAK8Puppi_PtNearGenTop;   //!
   TBranch        *b_jetAK8Puppi_PtNearGenBFromTop;   //!
   TBranch        *b_jetAK8Puppi_PtNearGenWFromTop;   //!
   TBranch        *b_jetAK8Puppi_PtNearGenLepFromSLTop;   //!
   TBranch        *b_jetAK8Puppi_PtNearGenNuFromSLTop;   //!
   TBranch        *b_el_DRNearGenEleFromSLTop;   //!
   TBranch        *b_el_PtNearGenEleFromSLTop;   //!
   TBranch        *b_el_PtNearGenTop;   //!
   TBranch        *b_el_LepAK4JetFrac;   //!
   TBranch        *b_el_LepAK8JetFrac;   //!
   TBranch        *b_el_LepSubjetFrac;   //!
   TBranch        *b_el_LepAK4JetMassDrop;   //!
   TBranch        *b_el_LepAK8JetMassDrop;   //!
   TBranch        *b_el_LepSubjetMassDrop;   //!
   TBranch        *b_el_AK4JetV1DR;   //!
   TBranch        *b_el_AK4JetV2DR;   //!
   TBranch        *b_el_AK4JetV3DR;   //!
   TBranch        *b_el_AK8JetV1DR;   //!
   TBranch        *b_el_AK8JetV2DR;   //!
   TBranch        *b_el_AK8JetV3DR;   //!
   TBranch        *b_el_SubjetV1DR;   //!
   TBranch        *b_el_SubjetV2DR;   //!
   TBranch        *b_el_SubjetV3DR;   //!
   TBranch        *b_el_AK4JetV1PtRel;   //!
   TBranch        *b_el_AK4JetV2PtRel;   //!
   TBranch        *b_el_AK4JetV3PtRel;   //!
   TBranch        *b_el_AK8JetV1PtRel;   //!
   TBranch        *b_el_AK8JetV2PtRel;   //!
   TBranch        *b_el_AK8JetV3PtRel;   //!
   TBranch        *b_el_SubjetV1PtRel;   //!
   TBranch        *b_el_SubjetV2PtRel;   //!
   TBranch        *b_el_SubjetV3PtRel;   //!
   TBranch        *b_mu_DRNearGenMuFromSLTop;   //!
   TBranch        *b_mu_PtNearGenMuFromSLTop;   //!
   TBranch        *b_mu_PtNearGenTop;   //!
   TBranch        *b_mu_LepAK4JetFrac;   //!
   TBranch        *b_mu_LepAK8JetFrac;   //!
   TBranch        *b_mu_LepSubjetFrac;   //!
   TBranch        *b_mu_LepAK4JetMassDrop;   //!
   TBranch        *b_mu_LepAK8JetMassDrop;   //!
   TBranch        *b_mu_LepSubjetMassDrop;   //!
   TBranch        *b_mu_AK4JetV1DR;   //!
   TBranch        *b_mu_AK4JetV2DR;   //!
   TBranch        *b_mu_AK4JetV3DR;   //!
   TBranch        *b_mu_AK8JetV1DR;   //!
   TBranch        *b_mu_AK8JetV2DR;   //!
   TBranch        *b_mu_AK8JetV3DR;   //!
   TBranch        *b_mu_SubjetV1DR;   //!
   TBranch        *b_mu_SubjetV2DR;   //!
   TBranch        *b_mu_SubjetV3DR;   //!
   TBranch        *b_mu_AK4JetV1PtRel;   //!
   TBranch        *b_mu_AK4JetV2PtRel;   //!
   TBranch        *b_mu_AK4JetV3PtRel;   //!
   TBranch        *b_mu_AK8JetV1PtRel;   //!
   TBranch        *b_mu_AK8JetV2PtRel;   //!
   TBranch        *b_mu_AK8JetV3PtRel;   //!
   TBranch        *b_mu_SubjetV1PtRel;   //!
   TBranch        *b_mu_SubjetV2PtRel;   //!
   TBranch        *b_mu_SubjetV3PtRel;   //!

   B2GTTree(TTree *tree=0);
   virtual ~B2GTTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(std::string outFileName);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef B2GTTree_cxx
B2GTTree::B2GTTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("B2GTTreeNtupleExtra_MC_80X.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("B2GTTreeNtupleExtra_MC_80X.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("B2GTTreeNtupleExtra_MC_80X.root:/B2GTTreeMaker");
      dir->GetObject("B2GTree",tree);

   }
   Init(tree);
}

B2GTTree::~B2GTTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t B2GTTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t B2GTTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void B2GTTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jetAK4CHS_Keys = 0;
   jetAK8CHS_Keys = 0;
   jetAK8Puppi_Keys = 0;
   subjetAK8CHS_Keys = 0;
   subjetAK8Puppi_Keys = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evt_RunNumber", &evt_RunNumber, &b_evt_RunNumber);
   fChain->SetBranchAddress("evt_LumiBlock", &evt_LumiBlock, &b_evt_LumiBlock);
   fChain->SetBranchAddress("evt_EventNumber", &evt_EventNumber, &b_evt_EventNumber);
   fChain->SetBranchAddress("pu_NtrueInt", &pu_NtrueInt, &b_pu_NtrueInt);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("met_size", &met_size, &b_met_size);
   fChain->SetBranchAddress("met_Pt", met_Pt, &b_met_Pt);
   fChain->SetBranchAddress("met_Phi", met_Phi, &b_met_Phi);
   fChain->SetBranchAddress("puppimet_size", &puppimet_size, &b_puppimet_size);
   fChain->SetBranchAddress("puppimet_Pt", puppimet_Pt, &b_puppimet_Pt);
   fChain->SetBranchAddress("puppimet_Phi", puppimet_Phi, &b_puppimet_Phi);
   fChain->SetBranchAddress("el_size", &el_size, &b_el_size);
   fChain->SetBranchAddress("el_Pt", el_Pt, &b_el_Pt);
   fChain->SetBranchAddress("el_Eta", el_Eta, &b_el_Eta);
   fChain->SetBranchAddress("el_Phi", el_Phi, &b_el_Phi);
   fChain->SetBranchAddress("el_E", el_E, &b_el_E);
   fChain->SetBranchAddress("el_Charge", el_Charge, &b_el_Charge);
   fChain->SetBranchAddress("el_Key", el_Key, &b_el_Key);
   fChain->SetBranchAddress("el_Iso03", el_Iso03, &b_el_Iso03);
   fChain->SetBranchAddress("el_Iso03db", el_Iso03db, &b_el_Iso03db);
   fChain->SetBranchAddress("el_MiniIso", el_MiniIso, &b_el_MiniIso);
   fChain->SetBranchAddress("el_Dxy", el_Dxy, &b_el_Dxy);
   fChain->SetBranchAddress("el_Dz", el_Dz, &b_el_Dz);
   fChain->SetBranchAddress("el_DB", el_DB, &b_el_DB);
   fChain->SetBranchAddress("el_DBerr", el_DBerr, &b_el_DBerr);
   fChain->SetBranchAddress("el_SCEta", el_SCEta, &b_el_SCEta);
   fChain->SetBranchAddress("el_vidVeto", el_vidVeto, &b_el_vidVeto);
   fChain->SetBranchAddress("el_vidLoose", el_vidLoose, &b_el_vidLoose);
   fChain->SetBranchAddress("el_vidMedium", el_vidMedium, &b_el_vidMedium);
   fChain->SetBranchAddress("el_vidTight", el_vidTight, &b_el_vidTight);
   fChain->SetBranchAddress("el_vidHEEP", el_vidHEEP, &b_el_vidHEEP);
   fChain->SetBranchAddress("el_vidVetonoiso", el_vidVetonoiso, &b_el_vidVetonoiso);
   fChain->SetBranchAddress("el_vidLoosenoiso", el_vidLoosenoiso, &b_el_vidLoosenoiso);
   fChain->SetBranchAddress("el_vidMediumnoiso", el_vidMediumnoiso, &b_el_vidMediumnoiso);
   fChain->SetBranchAddress("el_vidTightnoiso", el_vidTightnoiso, &b_el_vidTightnoiso);
   fChain->SetBranchAddress("el_vidHEEPnoiso", el_vidHEEPnoiso, &b_el_vidHEEPnoiso);
   fChain->SetBranchAddress("el_vidMvaGPvalue", el_vidMvaGPvalue, &b_el_vidMvaGPvalue);
   fChain->SetBranchAddress("el_vidMvaGPcateg", el_vidMvaGPcateg, &b_el_vidMvaGPcateg);
   fChain->SetBranchAddress("el_vidMvaHZZvalue", el_vidMvaHZZvalue, &b_el_vidMvaHZZvalue);
   fChain->SetBranchAddress("el_vidMvaHZZcateg", el_vidMvaHZZcateg, &b_el_vidMvaHZZcateg);
   fChain->SetBranchAddress("mu_size", &mu_size, &b_mu_size);
   fChain->SetBranchAddress("mu_Pt", mu_Pt, &b_mu_Pt);
   fChain->SetBranchAddress("mu_Eta", mu_Eta, &b_mu_Eta);
   fChain->SetBranchAddress("mu_Phi", mu_Phi, &b_mu_Phi);
   fChain->SetBranchAddress("mu_E", mu_E, &b_mu_E);
   fChain->SetBranchAddress("mu_Charge", mu_Charge, &b_mu_Charge);
   fChain->SetBranchAddress("mu_Key", mu_Key, &b_mu_Key);
   fChain->SetBranchAddress("mu_Iso04", mu_Iso04, &b_mu_Iso04);
   fChain->SetBranchAddress("mu_MiniIso", mu_MiniIso, &b_mu_MiniIso);
   fChain->SetBranchAddress("mu_Dxy", mu_Dxy, &b_mu_Dxy);
   fChain->SetBranchAddress("mu_Dz", mu_Dz, &b_mu_Dz);
   fChain->SetBranchAddress("mu_DB", mu_DB, &b_mu_DB);
   fChain->SetBranchAddress("mu_DBerr", mu_DBerr, &b_mu_DBerr);
   fChain->SetBranchAddress("mu_IsSoftMuon", mu_IsSoftMuon, &b_mu_IsSoftMuon);
   fChain->SetBranchAddress("mu_IsLooseMuon", mu_IsLooseMuon, &b_mu_IsLooseMuon);
   fChain->SetBranchAddress("mu_IsMediumMuon", mu_IsMediumMuon, &b_mu_IsMediumMuon);
   fChain->SetBranchAddress("mu_IsMediumMuon2016", mu_IsMediumMuon2016, &b_mu_IsMediumMuon2016);
   fChain->SetBranchAddress("mu_IsTightMuon", mu_IsTightMuon, &b_mu_IsTightMuon);
   fChain->SetBranchAddress("mu_IsHighPtMuon", mu_IsHighPtMuon, &b_mu_IsHighPtMuon);
   fChain->SetBranchAddress("jetAK4CHS_size", &jetAK4CHS_size, &b_jetAK4CHS_size);
   fChain->SetBranchAddress("jetAK4CHS_Pt", jetAK4CHS_Pt, &b_jetAK4CHS_Pt);
   fChain->SetBranchAddress("jetAK4CHS_Eta", jetAK4CHS_Eta, &b_jetAK4CHS_Eta);
   fChain->SetBranchAddress("jetAK4CHS_Phi", jetAK4CHS_Phi, &b_jetAK4CHS_Phi);
   fChain->SetBranchAddress("jetAK4CHS_E", jetAK4CHS_E, &b_jetAK4CHS_E);
   fChain->SetBranchAddress("jetAK4CHS_Charge", jetAK4CHS_Charge, &b_jetAK4CHS_Charge);
   fChain->SetBranchAddress("jetAK4CHS_CSVv2", jetAK4CHS_CSVv2, &b_jetAK4CHS_CSVv2);
   fChain->SetBranchAddress("jetAK4CHS_CMVAv2", jetAK4CHS_CMVAv2, &b_jetAK4CHS_CMVAv2);
   fChain->SetBranchAddress("jetAK4CHS_CvsL", jetAK4CHS_CvsL, &b_jetAK4CHS_CvsL);
   fChain->SetBranchAddress("jetAK4CHS_CvsB", jetAK4CHS_CvsB, &b_jetAK4CHS_CvsB);
   fChain->SetBranchAddress("jetAK4CHS_GenPartonEta", jetAK4CHS_GenPartonEta, &b_jetAK4CHS_GenPartonEta);
   fChain->SetBranchAddress("jetAK4CHS_GenPartonPhi", jetAK4CHS_GenPartonPhi, &b_jetAK4CHS_GenPartonPhi);
   fChain->SetBranchAddress("jetAK4CHS_GenPartonPt", jetAK4CHS_GenPartonPt, &b_jetAK4CHS_GenPartonPt);
   fChain->SetBranchAddress("jetAK4CHS_GenPartonE", jetAK4CHS_GenPartonE, &b_jetAK4CHS_GenPartonE);
   fChain->SetBranchAddress("jetAK4CHS_GenPartonCharge", jetAK4CHS_GenPartonCharge, &b_jetAK4CHS_GenPartonCharge);
   fChain->SetBranchAddress("jetAK4CHS_PartonFlavour", jetAK4CHS_PartonFlavour, &b_jetAK4CHS_PartonFlavour);
   fChain->SetBranchAddress("jetAK4CHS_HadronFlavour", jetAK4CHS_HadronFlavour, &b_jetAK4CHS_HadronFlavour);
   fChain->SetBranchAddress("jetAK4CHS_GenJetEta", jetAK4CHS_GenJetEta, &b_jetAK4CHS_GenJetEta);
   fChain->SetBranchAddress("jetAK4CHS_GenJetPhi", jetAK4CHS_GenJetPhi, &b_jetAK4CHS_GenJetPhi);
   fChain->SetBranchAddress("jetAK4CHS_GenJetPt", jetAK4CHS_GenJetPt, &b_jetAK4CHS_GenJetPt);
   fChain->SetBranchAddress("jetAK4CHS_GenJetE", jetAK4CHS_GenJetE, &b_jetAK4CHS_GenJetE);
   fChain->SetBranchAddress("jetAK4CHS_GenJetCharge", jetAK4CHS_GenJetCharge, &b_jetAK4CHS_GenJetCharge);
   fChain->SetBranchAddress("jetAK4CHS_jecFactor0", jetAK4CHS_jecFactor0, &b_jetAK4CHS_jecFactor0);
   fChain->SetBranchAddress("jetAK4CHS_jecUncertainty", jetAK4CHS_jecUncertainty, &b_jetAK4CHS_jecUncertainty);
   fChain->SetBranchAddress("jetAK4CHS_JERSF", jetAK4CHS_JERSF, &b_jetAK4CHS_JERSF);
   fChain->SetBranchAddress("jetAK4CHS_JERSFUp", jetAK4CHS_JERSFUp, &b_jetAK4CHS_JERSFUp);
   fChain->SetBranchAddress("jetAK4CHS_JERSFDown", jetAK4CHS_JERSFDown, &b_jetAK4CHS_JERSFDown);
   fChain->SetBranchAddress("jetAK4CHS_SmearedPt", jetAK4CHS_SmearedPt, &b_jetAK4CHS_SmearedPt);
   fChain->SetBranchAddress("jetAK4CHS_Keys", &jetAK4CHS_Keys, &b_jetAK4CHS_Keys);
   fChain->SetBranchAddress("jetAK8CHS_size", &jetAK8CHS_size, &b_jetAK8CHS_size);
   fChain->SetBranchAddress("jetAK8CHS_Pt", jetAK8CHS_Pt, &b_jetAK8CHS_Pt);
   fChain->SetBranchAddress("jetAK8CHS_Eta", jetAK8CHS_Eta, &b_jetAK8CHS_Eta);
   fChain->SetBranchAddress("jetAK8CHS_Phi", jetAK8CHS_Phi, &b_jetAK8CHS_Phi);
   fChain->SetBranchAddress("jetAK8CHS_E", jetAK8CHS_E, &b_jetAK8CHS_E);
   fChain->SetBranchAddress("jetAK8CHS_Charge", jetAK8CHS_Charge, &b_jetAK8CHS_Charge);
   fChain->SetBranchAddress("jetAK8CHS_CSVv2", jetAK8CHS_CSVv2, &b_jetAK8CHS_CSVv2);
   fChain->SetBranchAddress("jetAK8CHS_CMVAv2", jetAK8CHS_CMVAv2, &b_jetAK8CHS_CMVAv2);
   fChain->SetBranchAddress("jetAK8CHS_CvsL", jetAK8CHS_CvsL, &b_jetAK8CHS_CvsL);
   fChain->SetBranchAddress("jetAK8CHS_CvsB", jetAK8CHS_CvsB, &b_jetAK8CHS_CvsB);
   fChain->SetBranchAddress("jetAK8CHS_GenPartonEta", jetAK8CHS_GenPartonEta, &b_jetAK8CHS_GenPartonEta);
   fChain->SetBranchAddress("jetAK8CHS_GenPartonPhi", jetAK8CHS_GenPartonPhi, &b_jetAK8CHS_GenPartonPhi);
   fChain->SetBranchAddress("jetAK8CHS_GenPartonPt", jetAK8CHS_GenPartonPt, &b_jetAK8CHS_GenPartonPt);
   fChain->SetBranchAddress("jetAK8CHS_GenPartonE", jetAK8CHS_GenPartonE, &b_jetAK8CHS_GenPartonE);
   fChain->SetBranchAddress("jetAK8CHS_GenPartonCharge", jetAK8CHS_GenPartonCharge, &b_jetAK8CHS_GenPartonCharge);
   fChain->SetBranchAddress("jetAK8CHS_PartonFlavour", jetAK8CHS_PartonFlavour, &b_jetAK8CHS_PartonFlavour);
   fChain->SetBranchAddress("jetAK8CHS_HadronFlavour", jetAK8CHS_HadronFlavour, &b_jetAK8CHS_HadronFlavour);
   fChain->SetBranchAddress("jetAK8CHS_GenJetEta", jetAK8CHS_GenJetEta, &b_jetAK8CHS_GenJetEta);
   fChain->SetBranchAddress("jetAK8CHS_GenJetPhi", jetAK8CHS_GenJetPhi, &b_jetAK8CHS_GenJetPhi);
   fChain->SetBranchAddress("jetAK8CHS_GenJetPt", jetAK8CHS_GenJetPt, &b_jetAK8CHS_GenJetPt);
   fChain->SetBranchAddress("jetAK8CHS_GenJetE", jetAK8CHS_GenJetE, &b_jetAK8CHS_GenJetE);
   fChain->SetBranchAddress("jetAK8CHS_GenJetCharge", jetAK8CHS_GenJetCharge, &b_jetAK8CHS_GenJetCharge);
   fChain->SetBranchAddress("jetAK8CHS_jecFactor0", jetAK8CHS_jecFactor0, &b_jetAK8CHS_jecFactor0);
   fChain->SetBranchAddress("jetAK8CHS_jecUncertainty", jetAK8CHS_jecUncertainty, &b_jetAK8CHS_jecUncertainty);
   fChain->SetBranchAddress("jetAK8CHS_JERSF", jetAK8CHS_JERSF, &b_jetAK8CHS_JERSF);
   fChain->SetBranchAddress("jetAK8CHS_JERSFUp", jetAK8CHS_JERSFUp, &b_jetAK8CHS_JERSFUp);
   fChain->SetBranchAddress("jetAK8CHS_JERSFDown", jetAK8CHS_JERSFDown, &b_jetAK8CHS_JERSFDown);
   fChain->SetBranchAddress("jetAK8CHS_SmearedPt", jetAK8CHS_SmearedPt, &b_jetAK8CHS_SmearedPt);
   fChain->SetBranchAddress("jetAK8CHS_vSubjetIndex0", jetAK8CHS_vSubjetIndex0, &b_jetAK8CHS_vSubjetIndex0);
   fChain->SetBranchAddress("jetAK8CHS_vSubjetIndex1", jetAK8CHS_vSubjetIndex1, &b_jetAK8CHS_vSubjetIndex1);
   fChain->SetBranchAddress("jetAK8CHS_tau1CHS", jetAK8CHS_tau1CHS, &b_jetAK8CHS_tau1CHS);
   fChain->SetBranchAddress("jetAK8CHS_tau2CHS", jetAK8CHS_tau2CHS, &b_jetAK8CHS_tau2CHS);
   fChain->SetBranchAddress("jetAK8CHS_tau3CHS", jetAK8CHS_tau3CHS, &b_jetAK8CHS_tau3CHS);
   fChain->SetBranchAddress("jetAK8CHS_softDropMassCHS", jetAK8CHS_softDropMassCHS, &b_jetAK8CHS_softDropMassCHS);
   fChain->SetBranchAddress("jetAK8CHS_softDropMassPuppi", jetAK8CHS_softDropMassPuppi, &b_jetAK8CHS_softDropMassPuppi);
   fChain->SetBranchAddress("jetAK8CHS_PtPuppi", jetAK8CHS_PtPuppi, &b_jetAK8CHS_PtPuppi);
   fChain->SetBranchAddress("jetAK8CHS_EtaPuppi", jetAK8CHS_EtaPuppi, &b_jetAK8CHS_EtaPuppi);
   fChain->SetBranchAddress("jetAK8CHS_PhiPuppi", jetAK8CHS_PhiPuppi, &b_jetAK8CHS_PhiPuppi);
   fChain->SetBranchAddress("jetAK8CHS_MassPuppi", jetAK8CHS_MassPuppi, &b_jetAK8CHS_MassPuppi);
   fChain->SetBranchAddress("jetAK8CHS_tau1Puppi", jetAK8CHS_tau1Puppi, &b_jetAK8CHS_tau1Puppi);
   fChain->SetBranchAddress("jetAK8CHS_tau2Puppi", jetAK8CHS_tau2Puppi, &b_jetAK8CHS_tau2Puppi);
   fChain->SetBranchAddress("jetAK8CHS_tau3Puppi", jetAK8CHS_tau3Puppi, &b_jetAK8CHS_tau3Puppi);
   fChain->SetBranchAddress("jetAK8CHS_uncorrSDMassPuppi", jetAK8CHS_uncorrSDMassPuppi, &b_jetAK8CHS_uncorrSDMassPuppi);
   fChain->SetBranchAddress("jetAK8CHS_corrSDMassPuppi", jetAK8CHS_corrSDMassPuppi, &b_jetAK8CHS_corrSDMassPuppi);
   fChain->SetBranchAddress("jetAK8CHS_PhotonIndex", jetAK8CHS_PhotonIndex, &b_jetAK8CHS_PhotonIndex);
   fChain->SetBranchAddress("jetAK8CHS_SubwGammatIndex", jetAK8CHS_SubwGammatIndex, &b_jetAK8CHS_SubwGammatIndex);
   fChain->SetBranchAddress("jetAK8CHS_PhotonSubjetFrac", jetAK8CHS_PhotonSubjetFrac, &b_jetAK8CHS_PhotonSubjetFrac);
   fChain->SetBranchAddress("jetAK8CHS_SubjetPt0", jetAK8CHS_SubjetPt0, &b_jetAK8CHS_SubjetPt0);
   fChain->SetBranchAddress("jetAK8CHS_SubjetPt1", jetAK8CHS_SubjetPt1, &b_jetAK8CHS_SubjetPt1);
   fChain->SetBranchAddress("jetAK8CHS_SubjetPt2", jetAK8CHS_SubjetPt2, &b_jetAK8CHS_SubjetPt2);
   fChain->SetBranchAddress("jetAK8CHS_SubjetEta0", jetAK8CHS_SubjetEta0, &b_jetAK8CHS_SubjetEta0);
   fChain->SetBranchAddress("jetAK8CHS_SubjetEta1", jetAK8CHS_SubjetEta1, &b_jetAK8CHS_SubjetEta1);
   fChain->SetBranchAddress("jetAK8CHS_SubjetEta2", jetAK8CHS_SubjetEta2, &b_jetAK8CHS_SubjetEta2);
   fChain->SetBranchAddress("jetAK8CHS_SubjetPhi0", jetAK8CHS_SubjetPhi0, &b_jetAK8CHS_SubjetPhi0);
   fChain->SetBranchAddress("jetAK8CHS_SubjetPhi1", jetAK8CHS_SubjetPhi1, &b_jetAK8CHS_SubjetPhi1);
   fChain->SetBranchAddress("jetAK8CHS_SubjetPhi2", jetAK8CHS_SubjetPhi2, &b_jetAK8CHS_SubjetPhi2);
   fChain->SetBranchAddress("jetAK8CHS_SubjetEne0", jetAK8CHS_SubjetEne0, &b_jetAK8CHS_SubjetEne0);
   fChain->SetBranchAddress("jetAK8CHS_SubjetEne1", jetAK8CHS_SubjetEne1, &b_jetAK8CHS_SubjetEne1);
   fChain->SetBranchAddress("jetAK8CHS_SubjetEne2", jetAK8CHS_SubjetEne2, &b_jetAK8CHS_SubjetEne2);
   fChain->SetBranchAddress("jetAK8CHS_Keys", &jetAK8CHS_Keys, &b_jetAK8CHS_Keys);
   fChain->SetBranchAddress("jetAK8Puppi_size", &jetAK8Puppi_size, &b_jetAK8Puppi_size);
   fChain->SetBranchAddress("jetAK8Puppi_Pt", jetAK8Puppi_Pt, &b_jetAK8Puppi_Pt);
   fChain->SetBranchAddress("jetAK8Puppi_Eta", jetAK8Puppi_Eta, &b_jetAK8Puppi_Eta);
   fChain->SetBranchAddress("jetAK8Puppi_Phi", jetAK8Puppi_Phi, &b_jetAK8Puppi_Phi);
   fChain->SetBranchAddress("jetAK8Puppi_E", jetAK8Puppi_E, &b_jetAK8Puppi_E);
   fChain->SetBranchAddress("jetAK8Puppi_Charge", jetAK8Puppi_Charge, &b_jetAK8Puppi_Charge);
   fChain->SetBranchAddress("jetAK8Puppi_CSVv2", jetAK8Puppi_CSVv2, &b_jetAK8Puppi_CSVv2);
   fChain->SetBranchAddress("jetAK8Puppi_CMVAv2", jetAK8Puppi_CMVAv2, &b_jetAK8Puppi_CMVAv2);
   fChain->SetBranchAddress("jetAK8Puppi_CvsL", jetAK8Puppi_CvsL, &b_jetAK8Puppi_CvsL);
   fChain->SetBranchAddress("jetAK8Puppi_CvsB", jetAK8Puppi_CvsB, &b_jetAK8Puppi_CvsB);
   fChain->SetBranchAddress("jetAK8Puppi_GenPartonEta", jetAK8Puppi_GenPartonEta, &b_jetAK8Puppi_GenPartonEta);
   fChain->SetBranchAddress("jetAK8Puppi_GenPartonPhi", jetAK8Puppi_GenPartonPhi, &b_jetAK8Puppi_GenPartonPhi);
   fChain->SetBranchAddress("jetAK8Puppi_GenPartonPt", jetAK8Puppi_GenPartonPt, &b_jetAK8Puppi_GenPartonPt);
   fChain->SetBranchAddress("jetAK8Puppi_GenPartonE", jetAK8Puppi_GenPartonE, &b_jetAK8Puppi_GenPartonE);
   fChain->SetBranchAddress("jetAK8Puppi_GenPartonCharge", jetAK8Puppi_GenPartonCharge, &b_jetAK8Puppi_GenPartonCharge);
   fChain->SetBranchAddress("jetAK8Puppi_PartonFlavour", jetAK8Puppi_PartonFlavour, &b_jetAK8Puppi_PartonFlavour);
   fChain->SetBranchAddress("jetAK8Puppi_HadronFlavour", jetAK8Puppi_HadronFlavour, &b_jetAK8Puppi_HadronFlavour);
   fChain->SetBranchAddress("jetAK8Puppi_GenJetEta", jetAK8Puppi_GenJetEta, &b_jetAK8Puppi_GenJetEta);
   fChain->SetBranchAddress("jetAK8Puppi_GenJetPhi", jetAK8Puppi_GenJetPhi, &b_jetAK8Puppi_GenJetPhi);
   fChain->SetBranchAddress("jetAK8Puppi_GenJetPt", jetAK8Puppi_GenJetPt, &b_jetAK8Puppi_GenJetPt);
   fChain->SetBranchAddress("jetAK8Puppi_GenJetE", jetAK8Puppi_GenJetE, &b_jetAK8Puppi_GenJetE);
   fChain->SetBranchAddress("jetAK8Puppi_GenJetCharge", jetAK8Puppi_GenJetCharge, &b_jetAK8Puppi_GenJetCharge);
   fChain->SetBranchAddress("jetAK8Puppi_jecFactor0", jetAK8Puppi_jecFactor0, &b_jetAK8Puppi_jecFactor0);
   fChain->SetBranchAddress("jetAK8Puppi_jecUncertainty", jetAK8Puppi_jecUncertainty, &b_jetAK8Puppi_jecUncertainty);
   fChain->SetBranchAddress("jetAK8Puppi_JERSF", jetAK8Puppi_JERSF, &b_jetAK8Puppi_JERSF);
   fChain->SetBranchAddress("jetAK8Puppi_JERSFUp", jetAK8Puppi_JERSFUp, &b_jetAK8Puppi_JERSFUp);
   fChain->SetBranchAddress("jetAK8Puppi_JERSFDown", jetAK8Puppi_JERSFDown, &b_jetAK8Puppi_JERSFDown);
   fChain->SetBranchAddress("jetAK8Puppi_SmearedPt", jetAK8Puppi_SmearedPt, &b_jetAK8Puppi_SmearedPt);
   fChain->SetBranchAddress("jetAK8Puppi_DoubleBAK8", jetAK8Puppi_DoubleBAK8, &b_jetAK8Puppi_DoubleBAK8);
   fChain->SetBranchAddress("jetAK8Puppi_DoubleBCA15", jetAK8Puppi_DoubleBCA15, &b_jetAK8Puppi_DoubleBCA15);
   fChain->SetBranchAddress("jetAK8Puppi_vSubjetIndex0", jetAK8Puppi_vSubjetIndex0, &b_jetAK8Puppi_vSubjetIndex0);
   fChain->SetBranchAddress("jetAK8Puppi_vSubjetIndex1", jetAK8Puppi_vSubjetIndex1, &b_jetAK8Puppi_vSubjetIndex1);
   fChain->SetBranchAddress("jetAK8Puppi_tau1", jetAK8Puppi_tau1, &b_jetAK8Puppi_tau1);
   fChain->SetBranchAddress("jetAK8Puppi_tau2", jetAK8Puppi_tau2, &b_jetAK8Puppi_tau2);
   fChain->SetBranchAddress("jetAK8Puppi_tau3", jetAK8Puppi_tau3, &b_jetAK8Puppi_tau3);
   fChain->SetBranchAddress("jetAK8Puppi_softDropMass", jetAK8Puppi_softDropMass, &b_jetAK8Puppi_softDropMass);
   fChain->SetBranchAddress("jetAK8Puppi_filteredMass", jetAK8Puppi_filteredMass, &b_jetAK8Puppi_filteredMass);
   fChain->SetBranchAddress("jetAK8Puppi_Keys", &jetAK8Puppi_Keys, &b_jetAK8Puppi_Keys);
   fChain->SetBranchAddress("subjetAK8CHS_size", &subjetAK8CHS_size, &b_subjetAK8CHS_size);
   fChain->SetBranchAddress("subjetAK8CHS_Pt", subjetAK8CHS_Pt, &b_subjetAK8CHS_Pt);
   fChain->SetBranchAddress("subjetAK8CHS_Eta", subjetAK8CHS_Eta, &b_subjetAK8CHS_Eta);
   fChain->SetBranchAddress("subjetAK8CHS_Phi", subjetAK8CHS_Phi, &b_subjetAK8CHS_Phi);
   fChain->SetBranchAddress("subjetAK8CHS_E", subjetAK8CHS_E, &b_subjetAK8CHS_E);
   fChain->SetBranchAddress("subjetAK8CHS_Charge", subjetAK8CHS_Charge, &b_subjetAK8CHS_Charge);
   fChain->SetBranchAddress("subjetAK8CHS_CSVv2", subjetAK8CHS_CSVv2, &b_subjetAK8CHS_CSVv2);
   fChain->SetBranchAddress("subjetAK8CHS_CMVAv2", subjetAK8CHS_CMVAv2, &b_subjetAK8CHS_CMVAv2);
   fChain->SetBranchAddress("subjetAK8CHS_CvsL", subjetAK8CHS_CvsL, &b_subjetAK8CHS_CvsL);
   fChain->SetBranchAddress("subjetAK8CHS_CvsB", subjetAK8CHS_CvsB, &b_subjetAK8CHS_CvsB);
   fChain->SetBranchAddress("subjetAK8CHS_GenPartonEta", subjetAK8CHS_GenPartonEta, &b_subjetAK8CHS_GenPartonEta);
   fChain->SetBranchAddress("subjetAK8CHS_GenPartonPhi", subjetAK8CHS_GenPartonPhi, &b_subjetAK8CHS_GenPartonPhi);
   fChain->SetBranchAddress("subjetAK8CHS_GenPartonPt", subjetAK8CHS_GenPartonPt, &b_subjetAK8CHS_GenPartonPt);
   fChain->SetBranchAddress("subjetAK8CHS_GenPartonE", subjetAK8CHS_GenPartonE, &b_subjetAK8CHS_GenPartonE);
   fChain->SetBranchAddress("subjetAK8CHS_GenPartonCharge", subjetAK8CHS_GenPartonCharge, &b_subjetAK8CHS_GenPartonCharge);
   fChain->SetBranchAddress("subjetAK8CHS_PartonFlavour", subjetAK8CHS_PartonFlavour, &b_subjetAK8CHS_PartonFlavour);
   fChain->SetBranchAddress("subjetAK8CHS_HadronFlavour", subjetAK8CHS_HadronFlavour, &b_subjetAK8CHS_HadronFlavour);
   fChain->SetBranchAddress("subjetAK8CHS_GenJetEta", subjetAK8CHS_GenJetEta, &b_subjetAK8CHS_GenJetEta);
   fChain->SetBranchAddress("subjetAK8CHS_GenJetPhi", subjetAK8CHS_GenJetPhi, &b_subjetAK8CHS_GenJetPhi);
   fChain->SetBranchAddress("subjetAK8CHS_GenJetPt", subjetAK8CHS_GenJetPt, &b_subjetAK8CHS_GenJetPt);
   fChain->SetBranchAddress("subjetAK8CHS_GenJetE", subjetAK8CHS_GenJetE, &b_subjetAK8CHS_GenJetE);
   fChain->SetBranchAddress("subjetAK8CHS_GenJetCharge", subjetAK8CHS_GenJetCharge, &b_subjetAK8CHS_GenJetCharge);
   fChain->SetBranchAddress("subjetAK8CHS_jecFactor0", subjetAK8CHS_jecFactor0, &b_subjetAK8CHS_jecFactor0);
   fChain->SetBranchAddress("subjetAK8CHS_Keys", &subjetAK8CHS_Keys, &b_subjetAK8CHS_Keys);
   fChain->SetBranchAddress("subjetAK8Puppi_size", &subjetAK8Puppi_size, &b_subjetAK8Puppi_size);
   fChain->SetBranchAddress("subjetAK8Puppi_Pt", subjetAK8Puppi_Pt, &b_subjetAK8Puppi_Pt);
   fChain->SetBranchAddress("subjetAK8Puppi_Eta", subjetAK8Puppi_Eta, &b_subjetAK8Puppi_Eta);
   fChain->SetBranchAddress("subjetAK8Puppi_Phi", subjetAK8Puppi_Phi, &b_subjetAK8Puppi_Phi);
   fChain->SetBranchAddress("subjetAK8Puppi_E", subjetAK8Puppi_E, &b_subjetAK8Puppi_E);
   fChain->SetBranchAddress("subjetAK8Puppi_Charge", subjetAK8Puppi_Charge, &b_subjetAK8Puppi_Charge);
   fChain->SetBranchAddress("subjetAK8Puppi_CSVv2", subjetAK8Puppi_CSVv2, &b_subjetAK8Puppi_CSVv2);
   fChain->SetBranchAddress("subjetAK8Puppi_CMVAv2", subjetAK8Puppi_CMVAv2, &b_subjetAK8Puppi_CMVAv2);
   fChain->SetBranchAddress("subjetAK8Puppi_CvsL", subjetAK8Puppi_CvsL, &b_subjetAK8Puppi_CvsL);
   fChain->SetBranchAddress("subjetAK8Puppi_CvsB", subjetAK8Puppi_CvsB, &b_subjetAK8Puppi_CvsB);
   fChain->SetBranchAddress("subjetAK8Puppi_GenPartonEta", subjetAK8Puppi_GenPartonEta, &b_subjetAK8Puppi_GenPartonEta);
   fChain->SetBranchAddress("subjetAK8Puppi_GenPartonPhi", subjetAK8Puppi_GenPartonPhi, &b_subjetAK8Puppi_GenPartonPhi);
   fChain->SetBranchAddress("subjetAK8Puppi_GenPartonPt", subjetAK8Puppi_GenPartonPt, &b_subjetAK8Puppi_GenPartonPt);
   fChain->SetBranchAddress("subjetAK8Puppi_GenPartonE", subjetAK8Puppi_GenPartonE, &b_subjetAK8Puppi_GenPartonE);
   fChain->SetBranchAddress("subjetAK8Puppi_GenPartonCharge", subjetAK8Puppi_GenPartonCharge, &b_subjetAK8Puppi_GenPartonCharge);
   fChain->SetBranchAddress("subjetAK8Puppi_PartonFlavour", subjetAK8Puppi_PartonFlavour, &b_subjetAK8Puppi_PartonFlavour);
   fChain->SetBranchAddress("subjetAK8Puppi_HadronFlavour", subjetAK8Puppi_HadronFlavour, &b_subjetAK8Puppi_HadronFlavour);
   fChain->SetBranchAddress("subjetAK8Puppi_GenJetEta", subjetAK8Puppi_GenJetEta, &b_subjetAK8Puppi_GenJetEta);
   fChain->SetBranchAddress("subjetAK8Puppi_GenJetPhi", subjetAK8Puppi_GenJetPhi, &b_subjetAK8Puppi_GenJetPhi);
   fChain->SetBranchAddress("subjetAK8Puppi_GenJetPt", subjetAK8Puppi_GenJetPt, &b_subjetAK8Puppi_GenJetPt);
   fChain->SetBranchAddress("subjetAK8Puppi_GenJetE", subjetAK8Puppi_GenJetE, &b_subjetAK8Puppi_GenJetE);
   fChain->SetBranchAddress("subjetAK8Puppi_GenJetCharge", subjetAK8Puppi_GenJetCharge, &b_subjetAK8Puppi_GenJetCharge);
   fChain->SetBranchAddress("subjetAK8Puppi_jecFactor0", subjetAK8Puppi_jecFactor0, &b_subjetAK8Puppi_jecFactor0);
   fChain->SetBranchAddress("subjetAK8Puppi_Keys", &subjetAK8Puppi_Keys, &b_subjetAK8Puppi_Keys);
   fChain->SetBranchAddress("genjetAK8SD_size", &genjetAK8SD_size, &b_genjetAK8SD_size);
   fChain->SetBranchAddress("genjetAK8SD_Pt", genjetAK8SD_Pt, &b_genjetAK8SD_Pt);
   fChain->SetBranchAddress("genjetAK8SD_Eta", genjetAK8SD_Eta, &b_genjetAK8SD_Eta);
   fChain->SetBranchAddress("genjetAK8SD_Phi", genjetAK8SD_Phi, &b_genjetAK8SD_Phi);
   fChain->SetBranchAddress("genjetAK8SD_E", genjetAK8SD_E, &b_genjetAK8SD_E);
   fChain->SetBranchAddress("genjetAK8SD_Charge", genjetAK8SD_Charge, &b_genjetAK8SD_Charge);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_badMuons", &Flag_badMuons, &b_Flag_badMuons);
   fChain->SetBranchAddress("Flag_duplicateMuons", &Flag_duplicateMuons, &b_Flag_duplicateMuons);
   fChain->SetBranchAddress("Flag_noBadMuons", &Flag_noBadMuons, &b_Flag_noBadMuons);
   fChain->SetBranchAddress("HLT_PFJet40", &HLT_PFJet40, &b_HLT_PFJet40);
   fChain->SetBranchAddress("HLT_PFJet40_prescale", &HLT_PFJet40_prescale, &b_HLT_PFJet40_prescale);
   fChain->SetBranchAddress("HLT_PFJet60", &HLT_PFJet60, &b_HLT_PFJet60);
   fChain->SetBranchAddress("HLT_PFJet60_prescale", &HLT_PFJet60_prescale, &b_HLT_PFJet60_prescale);
   fChain->SetBranchAddress("HLT_PFJet80", &HLT_PFJet80, &b_HLT_PFJet80);
   fChain->SetBranchAddress("HLT_PFJet80_prescale", &HLT_PFJet80_prescale, &b_HLT_PFJet80_prescale);
   fChain->SetBranchAddress("HLT_PFJet140", &HLT_PFJet140, &b_HLT_PFJet140);
   fChain->SetBranchAddress("HLT_PFJet140_prescale", &HLT_PFJet140_prescale, &b_HLT_PFJet140_prescale);
   fChain->SetBranchAddress("HLT_PFJet200", &HLT_PFJet200, &b_HLT_PFJet200);
   fChain->SetBranchAddress("HLT_PFJet200_prescale", &HLT_PFJet200_prescale, &b_HLT_PFJet200_prescale);
   fChain->SetBranchAddress("HLT_PFJet260", &HLT_PFJet260, &b_HLT_PFJet260);
   fChain->SetBranchAddress("HLT_PFJet260_prescale", &HLT_PFJet260_prescale, &b_HLT_PFJet260_prescale);
   fChain->SetBranchAddress("HLT_PFJet320", &HLT_PFJet320, &b_HLT_PFJet320);
   fChain->SetBranchAddress("HLT_PFJet320_prescale", &HLT_PFJet320_prescale, &b_HLT_PFJet320_prescale);
   fChain->SetBranchAddress("HLT_PFJet400", &HLT_PFJet400, &b_HLT_PFJet400);
   fChain->SetBranchAddress("HLT_PFJet400_prescale", &HLT_PFJet400_prescale, &b_HLT_PFJet400_prescale);
   fChain->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
   fChain->SetBranchAddress("HLT_PFJet450_prescale", &HLT_PFJet450_prescale, &b_HLT_PFJet450_prescale);
   fChain->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
   fChain->SetBranchAddress("HLT_PFJet500_prescale", &HLT_PFJet500_prescale, &b_HLT_PFJet500_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet40", &HLT_AK8PFJet40, &b_HLT_AK8PFJet40);
   fChain->SetBranchAddress("HLT_AK8PFJet40_prescale", &HLT_AK8PFJet40_prescale, &b_HLT_AK8PFJet40_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet60", &HLT_AK8PFJet60, &b_HLT_AK8PFJet60);
   fChain->SetBranchAddress("HLT_AK8PFJet60_prescale", &HLT_AK8PFJet60_prescale, &b_HLT_AK8PFJet60_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet80", &HLT_AK8PFJet80, &b_HLT_AK8PFJet80);
   fChain->SetBranchAddress("HLT_AK8PFJet80_prescale", &HLT_AK8PFJet80_prescale, &b_HLT_AK8PFJet80_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet140", &HLT_AK8PFJet140, &b_HLT_AK8PFJet140);
   fChain->SetBranchAddress("HLT_AK8PFJet140_prescale", &HLT_AK8PFJet140_prescale, &b_HLT_AK8PFJet140_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet200", &HLT_AK8PFJet200, &b_HLT_AK8PFJet200);
   fChain->SetBranchAddress("HLT_AK8PFJet200_prescale", &HLT_AK8PFJet200_prescale, &b_HLT_AK8PFJet200_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet260", &HLT_AK8PFJet260, &b_HLT_AK8PFJet260);
   fChain->SetBranchAddress("HLT_AK8PFJet260_prescale", &HLT_AK8PFJet260_prescale, &b_HLT_AK8PFJet260_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet320", &HLT_AK8PFJet320, &b_HLT_AK8PFJet320);
   fChain->SetBranchAddress("HLT_AK8PFJet320_prescale", &HLT_AK8PFJet320_prescale, &b_HLT_AK8PFJet320_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30_prescale", &HLT_AK8PFJet360_TrimMass30_prescale, &b_HLT_AK8PFJet360_TrimMass30_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet400_TrimMass30", &HLT_AK8PFJet400_TrimMass30, &b_HLT_AK8PFJet400_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet400_TrimMass30_prescale", &HLT_AK8PFJet400_TrimMass30_prescale, &b_HLT_AK8PFJet400_TrimMass30_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet400", &HLT_AK8PFJet400, &b_HLT_AK8PFJet400);
   fChain->SetBranchAddress("HLT_AK8PFJet400_prescale", &HLT_AK8PFJet400_prescale, &b_HLT_AK8PFJet400_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet450", &HLT_AK8PFJet450, &b_HLT_AK8PFJet450);
   fChain->SetBranchAddress("HLT_AK8PFJet450_prescale", &HLT_AK8PFJet450_prescale, &b_HLT_AK8PFJet450_prescale);
   fChain->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
   fChain->SetBranchAddress("HLT_AK8PFJet500_prescale", &HLT_AK8PFJet500_prescale, &b_HLT_AK8PFJet500_prescale);
   fChain->SetBranchAddress("HLT_PFHT125", &HLT_PFHT125, &b_HLT_PFHT125);
   fChain->SetBranchAddress("HLT_PFHT125_prescale", &HLT_PFHT125_prescale, &b_HLT_PFHT125_prescale);
   fChain->SetBranchAddress("HLT_PFHT200", &HLT_PFHT200, &b_HLT_PFHT200);
   fChain->SetBranchAddress("HLT_PFHT200_prescale", &HLT_PFHT200_prescale, &b_HLT_PFHT200_prescale);
   fChain->SetBranchAddress("HLT_PFHT250", &HLT_PFHT250, &b_HLT_PFHT250);
   fChain->SetBranchAddress("HLT_PFHT250_prescale", &HLT_PFHT250_prescale, &b_HLT_PFHT250_prescale);
   fChain->SetBranchAddress("HLT_PFHT300", &HLT_PFHT300, &b_HLT_PFHT300);
   fChain->SetBranchAddress("HLT_PFHT300_prescale", &HLT_PFHT300_prescale, &b_HLT_PFHT300_prescale);
   fChain->SetBranchAddress("HLT_PFHT350", &HLT_PFHT350, &b_HLT_PFHT350);
   fChain->SetBranchAddress("HLT_PFHT350_prescale", &HLT_PFHT350_prescale, &b_HLT_PFHT350_prescale);
   fChain->SetBranchAddress("HLT_PFHT400", &HLT_PFHT400, &b_HLT_PFHT400);
   fChain->SetBranchAddress("HLT_PFHT400_prescale", &HLT_PFHT400_prescale, &b_HLT_PFHT400_prescale);
   fChain->SetBranchAddress("HLT_PFHT475", &HLT_PFHT475, &b_HLT_PFHT475);
   fChain->SetBranchAddress("HLT_PFHT475_prescale", &HLT_PFHT475_prescale, &b_HLT_PFHT475_prescale);
   fChain->SetBranchAddress("HLT_PFHT600", &HLT_PFHT600, &b_HLT_PFHT600);
   fChain->SetBranchAddress("HLT_PFHT600_prescale", &HLT_PFHT600_prescale, &b_HLT_PFHT600_prescale);
   fChain->SetBranchAddress("HLT_PFHT650", &HLT_PFHT650, &b_HLT_PFHT650);
   fChain->SetBranchAddress("HLT_PFHT650_prescale", &HLT_PFHT650_prescale, &b_HLT_PFHT650_prescale);
   fChain->SetBranchAddress("HLT_PFHT800", &HLT_PFHT800, &b_HLT_PFHT800);
   fChain->SetBranchAddress("HLT_PFHT800_prescale", &HLT_PFHT800_prescale, &b_HLT_PFHT800_prescale);
   fChain->SetBranchAddress("HLT_PFHT900", &HLT_PFHT900, &b_HLT_PFHT900);
   fChain->SetBranchAddress("HLT_PFHT900_prescale", &HLT_PFHT900_prescale, &b_HLT_PFHT900_prescale);
   fChain->SetBranchAddress("HLT_AK8PFHT650_TrimR0p1PT0p03Mass50", &HLT_AK8PFHT650_TrimR0p1PT0p03Mass50, &b_HLT_AK8PFHT650_TrimR0p1PT0p03Mass50);
   fChain->SetBranchAddress("HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_prescale", &HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_prescale, &b_HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_prescale);
   fChain->SetBranchAddress("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50", &HLT_AK8PFHT700_TrimR0p1PT0p03Mass50, &b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50);
   fChain->SetBranchAddress("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_prescale", &HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_prescale, &b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_prescale);
   fChain->SetBranchAddress("HLT_AK8PFHT750_TrimMass50", &HLT_AK8PFHT750_TrimMass50, &b_HLT_AK8PFHT750_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT750_TrimMass50_prescale", &HLT_AK8PFHT750_TrimMass50_prescale, &b_HLT_AK8PFHT750_TrimMass50_prescale);
   fChain->SetBranchAddress("HLT_AK8PFHT800_TrimMass50", &HLT_AK8PFHT800_TrimMass50, &b_HLT_AK8PFHT800_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT800_TrimMass50_prescale", &HLT_AK8PFHT800_TrimMass50_prescale, &b_HLT_AK8PFHT800_TrimMass50_prescale);
   fChain->SetBranchAddress("HLT_PFHT550_4JetPt50", &HLT_PFHT550_4JetPt50, &b_HLT_PFHT550_4JetPt50);
   fChain->SetBranchAddress("HLT_PFHT550_4JetPt50_prescale", &HLT_PFHT550_4JetPt50_prescale, &b_HLT_PFHT550_4JetPt50_prescale);
   fChain->SetBranchAddress("HLT_PFHT650_4JetPt50", &HLT_PFHT650_4JetPt50, &b_HLT_PFHT650_4JetPt50);
   fChain->SetBranchAddress("HLT_PFHT650_4JetPt50_prescale", &HLT_PFHT650_4JetPt50_prescale, &b_HLT_PFHT650_4JetPt50_prescale);
   fChain->SetBranchAddress("HLT_PFHT750_4JetPt50", &HLT_PFHT750_4JetPt50, &b_HLT_PFHT750_4JetPt50);
   fChain->SetBranchAddress("HLT_PFHT750_4JetPt50_prescale", &HLT_PFHT750_4JetPt50_prescale, &b_HLT_PFHT750_4JetPt50_prescale);
   fChain->SetBranchAddress("HLT_PFHT750_4JetPt70", &HLT_PFHT750_4JetPt70, &b_HLT_PFHT750_4JetPt70);
   fChain->SetBranchAddress("HLT_PFHT750_4JetPt70_prescale", &HLT_PFHT750_4JetPt70_prescale, &b_HLT_PFHT750_4JetPt70_prescale);
   fChain->SetBranchAddress("HLT_PFHT750_4JetPt80", &HLT_PFHT750_4JetPt80, &b_HLT_PFHT750_4JetPt80);
   fChain->SetBranchAddress("HLT_PFHT750_4JetPt80_prescale", &HLT_PFHT750_4JetPt80_prescale, &b_HLT_PFHT750_4JetPt80_prescale);
   fChain->SetBranchAddress("HLT_PFHT800_4JetPt50", &HLT_PFHT800_4JetPt50, &b_HLT_PFHT800_4JetPt50);
   fChain->SetBranchAddress("HLT_PFHT800_4JetPt50_prescale", &HLT_PFHT800_4JetPt50_prescale, &b_HLT_PFHT800_4JetPt50_prescale);
   fChain->SetBranchAddress("HLT_PFHT850_4JetPt50", &HLT_PFHT850_4JetPt50, &b_HLT_PFHT850_4JetPt50);
   fChain->SetBranchAddress("HLT_PFHT850_4JetPt50_prescale", &HLT_PFHT850_4JetPt50_prescale, &b_HLT_PFHT850_4JetPt50_prescale);
   fChain->SetBranchAddress("HLT_AK8DiPFJet250_200_TrimMass30", &HLT_AK8DiPFJet250_200_TrimMass30, &b_HLT_AK8DiPFJet250_200_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8DiPFJet250_200_TrimMass30_prescale", &HLT_AK8DiPFJet250_200_TrimMass30_prescale, &b_HLT_AK8DiPFJet250_200_TrimMass30_prescale);
   fChain->SetBranchAddress("HLT_AK8DiPFJet280_200_TrimMass30", &HLT_AK8DiPFJet280_200_TrimMass30, &b_HLT_AK8DiPFJet280_200_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8DiPFJet280_200_TrimMass30_prescale", &HLT_AK8DiPFJet280_200_TrimMass30_prescale, &b_HLT_AK8DiPFJet280_200_TrimMass30_prescale);
   fChain->SetBranchAddress("HLT_AK8DiPFJet300_200_TrimMass30", &HLT_AK8DiPFJet300_200_TrimMass30, &b_HLT_AK8DiPFJet300_200_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8DiPFJet300_200_TrimMass30_prescale", &HLT_AK8DiPFJet300_200_TrimMass30_prescale, &b_HLT_AK8DiPFJet300_200_TrimMass30_prescale);
   fChain->SetBranchAddress("HLT_MET100", &HLT_MET100, &b_HLT_MET100);
   fChain->SetBranchAddress("HLT_MET100_prescale", &HLT_MET100_prescale, &b_HLT_MET100_prescale);
   fChain->SetBranchAddress("HLT_MET150", &HLT_MET150, &b_HLT_MET150);
   fChain->SetBranchAddress("HLT_MET150_prescale", &HLT_MET150_prescale, &b_HLT_MET150_prescale);
   fChain->SetBranchAddress("HLT_MET200", &HLT_MET200, &b_HLT_MET200);
   fChain->SetBranchAddress("HLT_MET200_prescale", &HLT_MET200_prescale, &b_HLT_MET200_prescale);
   fChain->SetBranchAddress("HLT_MET250", &HLT_MET250, &b_HLT_MET250);
   fChain->SetBranchAddress("HLT_MET250_prescale", &HLT_MET250_prescale, &b_HLT_MET250_prescale);
   fChain->SetBranchAddress("HLT_MET300", &HLT_MET300, &b_HLT_MET300);
   fChain->SetBranchAddress("HLT_MET300_prescale", &HLT_MET300_prescale, &b_HLT_MET300_prescale);
   fChain->SetBranchAddress("HLT_MET600", &HLT_MET600, &b_HLT_MET600);
   fChain->SetBranchAddress("HLT_MET600_prescale", &HLT_MET600_prescale, &b_HLT_MET600_prescale);
   fChain->SetBranchAddress("HLT_MET700", &HLT_MET700, &b_HLT_MET700);
   fChain->SetBranchAddress("HLT_MET700_prescale", &HLT_MET700_prescale, &b_HLT_MET700_prescale);
   fChain->SetBranchAddress("HLT_PFMET170_BeamHaloCleaned", &HLT_PFMET170_BeamHaloCleaned, &b_HLT_PFMET170_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_BeamHaloCleaned_prescale", &HLT_PFMET170_BeamHaloCleaned_prescale, &b_HLT_PFMET170_BeamHaloCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET170_HBHECleaned", &HLT_PFMET170_HBHECleaned, &b_HLT_PFMET170_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET170_HBHECleaned_prescale", &HLT_PFMET170_HBHECleaned_prescale, &b_HLT_PFMET170_HBHECleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET170_HBHE_BeamHaloCleaned", &HLT_PFMET170_HBHE_BeamHaloCleaned, &b_HLT_PFMET170_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_HBHE_BeamHaloCleaned_prescale", &HLT_PFMET170_HBHE_BeamHaloCleaned_prescale, &b_HLT_PFMET170_HBHE_BeamHaloCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET170_JetIdCleaned", &HLT_PFMET170_JetIdCleaned, &b_HLT_PFMET170_JetIdCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_JetIdCleaned_prescale", &HLT_PFMET170_JetIdCleaned_prescale, &b_HLT_PFMET170_JetIdCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET170_NoiseCleaned", &HLT_PFMET170_NoiseCleaned, &b_HLT_PFMET170_NoiseCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_NoiseCleaned_prescale", &HLT_PFMET170_NoiseCleaned_prescale, &b_HLT_PFMET170_NoiseCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET170_NotCleaned", &HLT_PFMET170_NotCleaned, &b_HLT_PFMET170_NotCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_NotCleaned_prescale", &HLT_PFMET170_NotCleaned_prescale, &b_HLT_PFMET170_NotCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned", &HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned, &b_HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned_prescale", &HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned_prescale, &b_HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET300", &HLT_PFMET300, &b_HLT_PFMET300);
   fChain->SetBranchAddress("HLT_PFMET300_prescale", &HLT_PFMET300_prescale, &b_HLT_PFMET300_prescale);
   fChain->SetBranchAddress("HLT_PFMET400", &HLT_PFMET400, &b_HLT_PFMET400);
   fChain->SetBranchAddress("HLT_PFMET400_prescale", &HLT_PFMET400_prescale, &b_HLT_PFMET400_prescale);
   fChain->SetBranchAddress("HLT_PFMET500", &HLT_PFMET500, &b_HLT_PFMET500);
   fChain->SetBranchAddress("HLT_PFMET500_prescale", &HLT_PFMET500_prescale, &b_HLT_PFMET500_prescale);
   fChain->SetBranchAddress("HLT_PFMET600", &HLT_PFMET600, &b_HLT_PFMET600);
   fChain->SetBranchAddress("HLT_PFMET600_prescale", &HLT_PFMET600_prescale, &b_HLT_PFMET600_prescale);
   fChain->SetBranchAddress("HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067", &HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067, &b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067);
   fChain->SetBranchAddress("HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_prescale", &HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_prescale, &b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_prescale);
   fChain->SetBranchAddress("HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight", &HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight, &b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight);
   fChain->SetBranchAddress("HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_prescale", &HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_prescale, &b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned", &HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned, &b_HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned_prescale", &HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned_prescale, &b_HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned_prescale);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight", &HLT_PFMET100_PFMHT100_IDTight, &b_HLT_PFMET100_PFMHT100_IDTight);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_prescale", &HLT_PFMET100_PFMHT100_IDTight_prescale, &b_HLT_PFMET100_PFMHT100_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight", &HLT_PFMET110_PFMHT110_IDTight, &b_HLT_PFMET110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight_prescale", &HLT_PFMET110_PFMHT110_IDTight_prescale, &b_HLT_PFMET110_PFMHT110_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight", &HLT_PFMET120_PFMHT120_IDTight, &b_HLT_PFMET120_PFMHT120_IDTight);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_prescale", &HLT_PFMET120_PFMHT120_IDTight_prescale, &b_HLT_PFMET120_PFMHT120_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMET90_PFMHT90_IDTight", &HLT_PFMET90_PFMHT90_IDTight, &b_HLT_PFMET90_PFMHT90_IDTight);
   fChain->SetBranchAddress("HLT_PFMET90_PFMHT90_IDTight_prescale", &HLT_PFMET90_PFMHT90_IDTight_prescale, &b_HLT_PFMET90_PFMHT90_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight", &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight, &b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_prescale", &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_prescale, &b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_prescale", &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_prescale, &b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_prescale", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_prescale, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_prescale);
   fChain->SetBranchAddress("HLT_PFMETNoMu90_PFMHTNoMu90_IDTight", &HLT_PFMETNoMu90_PFMHTNoMu90_IDTight, &b_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_prescale", &HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_prescale, &b_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_prescale);
   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
   fChain->SetBranchAddress("HLT_Mu17_prescale", &HLT_Mu17_prescale, &b_HLT_Mu17_prescale);
   fChain->SetBranchAddress("HLT_Mu20", &HLT_Mu20, &b_HLT_Mu20);
   fChain->SetBranchAddress("HLT_Mu20_prescale", &HLT_Mu20_prescale, &b_HLT_Mu20_prescale);
   fChain->SetBranchAddress("HLT_Mu27", &HLT_Mu27, &b_HLT_Mu27);
   fChain->SetBranchAddress("HLT_Mu27_prescale", &HLT_Mu27_prescale, &b_HLT_Mu27_prescale);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_Mu50_prescale", &HLT_Mu50_prescale, &b_HLT_Mu50_prescale);
   fChain->SetBranchAddress("HLT_Mu55", &HLT_Mu55, &b_HLT_Mu55);
   fChain->SetBranchAddress("HLT_Mu55_prescale", &HLT_Mu55_prescale, &b_HLT_Mu55_prescale);
   fChain->SetBranchAddress("HLT_TkMu17", &HLT_TkMu17, &b_HLT_TkMu17);
   fChain->SetBranchAddress("HLT_TkMu17_prescale", &HLT_TkMu17_prescale, &b_HLT_TkMu17_prescale);
   fChain->SetBranchAddress("HLT_TkMu20", &HLT_TkMu20, &b_HLT_TkMu20);
   fChain->SetBranchAddress("HLT_TkMu20_prescale", &HLT_TkMu20_prescale, &b_HLT_TkMu20_prescale);
   fChain->SetBranchAddress("HLT_TkMu27", &HLT_TkMu27, &b_HLT_TkMu27);
   fChain->SetBranchAddress("HLT_TkMu27_prescale", &HLT_TkMu27_prescale, &b_HLT_TkMu27_prescale);
   fChain->SetBranchAddress("HLT_TkMu50", &HLT_TkMu50, &b_HLT_TkMu50);
   fChain->SetBranchAddress("HLT_TkMu50_prescale", &HLT_TkMu50_prescale, &b_HLT_TkMu50_prescale);
   fChain->SetBranchAddress("HLT_IsoMu18", &HLT_IsoMu18, &b_HLT_IsoMu18);
   fChain->SetBranchAddress("HLT_IsoMu18_prescale", &HLT_IsoMu18_prescale, &b_HLT_IsoMu18_prescale);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_IsoMu20_prescale", &HLT_IsoMu20_prescale, &b_HLT_IsoMu20_prescale);
   fChain->SetBranchAddress("HLT_IsoMu22", &HLT_IsoMu22, &b_HLT_IsoMu22);
   fChain->SetBranchAddress("HLT_IsoMu22_prescale", &HLT_IsoMu22_prescale, &b_HLT_IsoMu22_prescale);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoMu24_prescale", &HLT_IsoMu24_prescale, &b_HLT_IsoMu24_prescale);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_IsoMu27_prescale", &HLT_IsoMu27_prescale, &b_HLT_IsoMu27_prescale);
   fChain->SetBranchAddress("HLT_IsoTkMu18", &HLT_IsoTkMu18, &b_HLT_IsoTkMu18);
   fChain->SetBranchAddress("HLT_IsoTkMu18_prescale", &HLT_IsoTkMu18_prescale, &b_HLT_IsoTkMu18_prescale);
   fChain->SetBranchAddress("HLT_IsoTkMu20", &HLT_IsoTkMu20, &b_HLT_IsoTkMu20);
   fChain->SetBranchAddress("HLT_IsoTkMu20_prescale", &HLT_IsoTkMu20_prescale, &b_HLT_IsoTkMu20_prescale);
   fChain->SetBranchAddress("HLT_IsoTkMu22", &HLT_IsoTkMu22, &b_HLT_IsoTkMu22);
   fChain->SetBranchAddress("HLT_IsoTkMu22_prescale", &HLT_IsoTkMu22_prescale, &b_HLT_IsoTkMu22_prescale);
   fChain->SetBranchAddress("HLT_IsoTkMu24", &HLT_IsoTkMu24, &b_HLT_IsoTkMu24);
   fChain->SetBranchAddress("HLT_IsoTkMu24_prescale", &HLT_IsoTkMu24_prescale, &b_HLT_IsoTkMu24_prescale);
   fChain->SetBranchAddress("HLT_IsoTkMu27", &HLT_IsoTkMu27, &b_HLT_IsoTkMu27);
   fChain->SetBranchAddress("HLT_IsoTkMu27_prescale", &HLT_IsoTkMu27_prescale, &b_HLT_IsoTkMu27_prescale);
   fChain->SetBranchAddress("HLT_Ele17_CaloIdL_GsfTrkIdVL", &HLT_Ele17_CaloIdL_GsfTrkIdVL, &b_HLT_Ele17_CaloIdL_GsfTrkIdVL);
   fChain->SetBranchAddress("HLT_Ele17_CaloIdL_GsfTrkIdVL_prescale", &HLT_Ele17_CaloIdL_GsfTrkIdVL_prescale, &b_HLT_Ele17_CaloIdL_GsfTrkIdVL_prescale);
   fChain->SetBranchAddress("HLT_Ele22_eta2p1_WPLoose_Gsf", &HLT_Ele22_eta2p1_WPLoose_Gsf, &b_HLT_Ele22_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele22_eta2p1_WPLoose_Gsf_prescale", &HLT_Ele22_eta2p1_WPLoose_Gsf_prescale, &b_HLT_Ele22_eta2p1_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele23_WPLoose_Gsf", &HLT_Ele23_WPLoose_Gsf, &b_HLT_Ele23_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele23_WPLoose_Gsf_prescale", &HLT_Ele23_WPLoose_Gsf_prescale, &b_HLT_Ele23_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPLoose_Gsf", &HLT_Ele24_eta2p1_WPLoose_Gsf, &b_HLT_Ele24_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPLoose_Gsf_prescale", &HLT_Ele24_eta2p1_WPLoose_Gsf_prescale, &b_HLT_Ele24_eta2p1_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele25_WPTight_Gsf", &HLT_Ele25_WPTight_Gsf, &b_HLT_Ele25_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele25_WPTight_Gsf_prescale", &HLT_Ele25_WPTight_Gsf_prescale, &b_HLT_Ele25_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPLoose_Gsf", &HLT_Ele25_eta2p1_WPLoose_Gsf, &b_HLT_Ele25_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPLoose_Gsf_prescale", &HLT_Ele25_eta2p1_WPLoose_Gsf_prescale, &b_HLT_Ele25_eta2p1_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPTight_Gsf", &HLT_Ele25_eta2p1_WPTight_Gsf, &b_HLT_Ele25_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPTight_Gsf_prescale", &HLT_Ele25_eta2p1_WPTight_Gsf_prescale, &b_HLT_Ele25_eta2p1_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele27_WPLoose_Gsf", &HLT_Ele27_WPLoose_Gsf, &b_HLT_Ele27_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_WPLoose_Gsf_prescale", &HLT_Ele27_WPLoose_Gsf_prescale, &b_HLT_Ele27_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf_prescale", &HLT_Ele27_WPTight_Gsf_prescale, &b_HLT_Ele27_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf", &HLT_Ele27_eta2p1_WPLoose_Gsf, &b_HLT_Ele27_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf_prescale", &HLT_Ele27_eta2p1_WPLoose_Gsf_prescale, &b_HLT_Ele27_eta2p1_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPTight_Gsf", &HLT_Ele27_eta2p1_WPTight_Gsf, &b_HLT_Ele27_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPTight_Gsf_prescale", &HLT_Ele27_eta2p1_WPTight_Gsf_prescale, &b_HLT_Ele27_eta2p1_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele30_WPTight_Gsf", &HLT_Ele30_WPTight_Gsf, &b_HLT_Ele30_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele30_WPTight_Gsf_prescale", &HLT_Ele30_WPTight_Gsf_prescale, &b_HLT_Ele30_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele30_eta2p1_WPLoose_Gsf", &HLT_Ele30_eta2p1_WPLoose_Gsf, &b_HLT_Ele30_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele30_eta2p1_WPLoose_Gsf_prescale", &HLT_Ele30_eta2p1_WPLoose_Gsf_prescale, &b_HLT_Ele30_eta2p1_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele30_eta2p1_WPTight_Gsf", &HLT_Ele30_eta2p1_WPTight_Gsf, &b_HLT_Ele30_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele30_eta2p1_WPTight_Gsf_prescale", &HLT_Ele30_eta2p1_WPTight_Gsf_prescale, &b_HLT_Ele30_eta2p1_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf", &HLT_Ele32_WPTight_Gsf, &b_HLT_Ele32_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf_prescale", &HLT_Ele32_WPTight_Gsf_prescale, &b_HLT_Ele32_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPLoose_Gsf", &HLT_Ele32_eta2p1_WPLoose_Gsf, &b_HLT_Ele32_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPLoose_Gsf_prescale", &HLT_Ele32_eta2p1_WPLoose_Gsf_prescale, &b_HLT_Ele32_eta2p1_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPTight_Gsf", &HLT_Ele32_eta2p1_WPTight_Gsf, &b_HLT_Ele32_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPTight_Gsf_prescale", &HLT_Ele32_eta2p1_WPTight_Gsf_prescale, &b_HLT_Ele32_eta2p1_WPTight_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele35_WPLoose_Gsf", &HLT_Ele35_WPLoose_Gsf, &b_HLT_Ele35_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele35_WPLoose_Gsf_prescale", &HLT_Ele35_WPLoose_Gsf_prescale, &b_HLT_Ele35_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele45_WPLoose_Gsf", &HLT_Ele45_WPLoose_Gsf, &b_HLT_Ele45_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele45_WPLoose_Gsf_prescale", &HLT_Ele45_WPLoose_Gsf_prescale, &b_HLT_Ele45_WPLoose_Gsf_prescale);
   fChain->SetBranchAddress("HLT_Ele105_CaloIdVT_GsfTrkIdT", &HLT_Ele105_CaloIdVT_GsfTrkIdT, &b_HLT_Ele105_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele105_CaloIdVT_GsfTrkIdT_prescale", &HLT_Ele105_CaloIdVT_GsfTrkIdT_prescale, &b_HLT_Ele105_CaloIdVT_GsfTrkIdT_prescale);
   fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT", &HLT_Ele115_CaloIdVT_GsfTrkIdT, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT_prescale", &HLT_Ele115_CaloIdVT_GsfTrkIdT_prescale, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT_prescale);
   fChain->SetBranchAddress("HLT_Ele145_CaloIdVT_GsfTrkIdT", &HLT_Ele145_CaloIdVT_GsfTrkIdT, &b_HLT_Ele145_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele145_CaloIdVT_GsfTrkIdT_prescale", &HLT_Ele145_CaloIdVT_GsfTrkIdT_prescale, &b_HLT_Ele145_CaloIdVT_GsfTrkIdT_prescale);
   fChain->SetBranchAddress("HLT_Ele200_CaloIdVT_GsfTrkIdT", &HLT_Ele200_CaloIdVT_GsfTrkIdT, &b_HLT_Ele200_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele200_CaloIdVT_GsfTrkIdT_prescale", &HLT_Ele200_CaloIdVT_GsfTrkIdT_prescale, &b_HLT_Ele200_CaloIdVT_GsfTrkIdT_prescale);
   fChain->SetBranchAddress("HLT_Ele250_CaloIdVT_GsfTrkIdT", &HLT_Ele250_CaloIdVT_GsfTrkIdT, &b_HLT_Ele250_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele250_CaloIdVT_GsfTrkIdT_prescale", &HLT_Ele250_CaloIdVT_GsfTrkIdT_prescale, &b_HLT_Ele250_CaloIdVT_GsfTrkIdT_prescale);
   fChain->SetBranchAddress("HLT_Ele300_CaloIdVT_GsfTrkIdT", &HLT_Ele300_CaloIdVT_GsfTrkIdT, &b_HLT_Ele300_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele300_CaloIdVT_GsfTrkIdT_prescale", &HLT_Ele300_CaloIdVT_GsfTrkIdT_prescale, &b_HLT_Ele300_CaloIdVT_GsfTrkIdT_prescale);
   fChain->SetBranchAddress("HLT_Mu30_eta2p1_PFJet150_PFJet50", &HLT_Mu30_eta2p1_PFJet150_PFJet50, &b_HLT_Mu30_eta2p1_PFJet150_PFJet50);
   fChain->SetBranchAddress("HLT_Mu30_eta2p1_PFJet150_PFJet50_prescale", &HLT_Mu30_eta2p1_PFJet150_PFJet50_prescale, &b_HLT_Mu30_eta2p1_PFJet150_PFJet50_prescale);
   fChain->SetBranchAddress("HLT_Mu40_eta2p1_PFJet200_PFJet50", &HLT_Mu40_eta2p1_PFJet200_PFJet50, &b_HLT_Mu40_eta2p1_PFJet200_PFJet50);
   fChain->SetBranchAddress("HLT_Mu40_eta2p1_PFJet200_PFJet50_prescale", &HLT_Mu40_eta2p1_PFJet200_PFJet50_prescale, &b_HLT_Mu40_eta2p1_PFJet200_PFJet50_prescale);
   fChain->SetBranchAddress("HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50", &HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50, &b_HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50);
   fChain->SetBranchAddress("HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_prescale", &HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_prescale, &b_HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_prescale);
   fChain->SetBranchAddress("HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50", &HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50, &b_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50);
   fChain->SetBranchAddress("HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_prescale", &HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_prescale, &b_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_prescale);
   fChain->SetBranchAddress("evt_NGoodVtx", &evt_NGoodVtx, &b_evt_NGoodVtx);
   fChain->SetBranchAddress("evt_LHA_PDF_ID", &evt_LHA_PDF_ID, &b_evt_LHA_PDF_ID);
   fChain->SetBranchAddress("evt_NIsoTrk", &evt_NIsoTrk, &b_evt_NIsoTrk);
   fChain->SetBranchAddress("evt_MR", &evt_MR, &b_evt_MR);
   fChain->SetBranchAddress("evt_MTR", &evt_MTR, &b_evt_MTR);
   fChain->SetBranchAddress("evt_R", &evt_R, &b_evt_R);
   fChain->SetBranchAddress("evt_R2", &evt_R2, &b_evt_R2);
   fChain->SetBranchAddress("evt_MR_Smear", &evt_MR_Smear, &b_evt_MR_Smear);
   fChain->SetBranchAddress("evt_MTR_Smear", &evt_MTR_Smear, &b_evt_MTR_Smear);
   fChain->SetBranchAddress("evt_XSec", &evt_XSec, &b_evt_XSec);
   fChain->SetBranchAddress("evt_Gen_Weight", &evt_Gen_Weight, &b_evt_Gen_Weight);
   fChain->SetBranchAddress("evt_Gen_Ht", &evt_Gen_Ht, &b_evt_Gen_Ht);
   fChain->SetBranchAddress("SUSY_Stop_Mass", &SUSY_Stop_Mass, &b_SUSY_Stop_Mass);
   fChain->SetBranchAddress("SUSY_Gluino_Mass", &SUSY_Gluino_Mass, &b_SUSY_Gluino_Mass);
   fChain->SetBranchAddress("SUSY_LSP_Mass", &SUSY_LSP_Mass, &b_SUSY_LSP_Mass);
   fChain->SetBranchAddress("gen_size", &gen_size, &b_gen_size);
   fChain->SetBranchAddress("gen_ID", gen_ID, &b_gen_ID);
   fChain->SetBranchAddress("gen_Status", gen_Status, &b_gen_Status);
   fChain->SetBranchAddress("gen_Mom0ID", gen_Mom0ID, &b_gen_Mom0ID);
   fChain->SetBranchAddress("gen_Mom0Status", gen_Mom0Status, &b_gen_Mom0Status);
   fChain->SetBranchAddress("gen_Mom1ID", gen_Mom1ID, &b_gen_Mom1ID);
   fChain->SetBranchAddress("gen_Mom1Status", gen_Mom1Status, &b_gen_Mom1Status);
   fChain->SetBranchAddress("gen_Dau0ID", gen_Dau0ID, &b_gen_Dau0ID);
   fChain->SetBranchAddress("gen_Dau0Status", gen_Dau0Status, &b_gen_Dau0Status);
   fChain->SetBranchAddress("gen_Dau1ID", gen_Dau1ID, &b_gen_Dau1ID);
   fChain->SetBranchAddress("gen_Dau1Status", gen_Dau1Status, &b_gen_Dau1Status);
   fChain->SetBranchAddress("jetAK8Puppi_HasNearGenTop", jetAK8Puppi_HasNearGenTop, &b_jetAK8Puppi_HasNearGenTop);
   fChain->SetBranchAddress("jetAK8Puppi_NearGenTopIsHadronic", jetAK8Puppi_NearGenTopIsHadronic, &b_jetAK8Puppi_NearGenTopIsHadronic);
   fChain->SetBranchAddress("jetAK8Puppi_NearGenWIsHadronic", jetAK8Puppi_NearGenWIsHadronic, &b_jetAK8Puppi_NearGenWIsHadronic);
   fChain->SetBranchAddress("jetAK8Puppi_NearGenWToENu", jetAK8Puppi_NearGenWToENu, &b_jetAK8Puppi_NearGenWToENu);
   fChain->SetBranchAddress("jetAK8Puppi_NearGenWToMuNu", jetAK8Puppi_NearGenWToMuNu, &b_jetAK8Puppi_NearGenWToMuNu);
   fChain->SetBranchAddress("jetAK8Puppi_NearGenWToTauNu", jetAK8Puppi_NearGenWToTauNu, &b_jetAK8Puppi_NearGenWToTauNu);
   fChain->SetBranchAddress("jetAK4Puppi_size", &jetAK4Puppi_size, &b_jetAK4Puppi_size);
   fChain->SetBranchAddress("jetAK4Puppi_looseJetID", jetAK4Puppi_looseJetID, &b_jetAK4Puppi_looseJetID);
   fChain->SetBranchAddress("jetAK4Puppi_tightJetID", jetAK4Puppi_tightJetID, &b_jetAK4Puppi_tightJetID);
   fChain->SetBranchAddress("jetAK4Puppi_tightLepVetoJetID", jetAK4Puppi_tightLepVetoJetID, &b_jetAK4Puppi_tightLepVetoJetID);
   fChain->SetBranchAddress("jetAK8Puppi_looseJetID", jetAK8Puppi_looseJetID, &b_jetAK8Puppi_looseJetID);
   fChain->SetBranchAddress("jetAK8Puppi_tightJetID", jetAK8Puppi_tightJetID, &b_jetAK8Puppi_tightJetID);
   fChain->SetBranchAddress("jetAK8Puppi_tightLepVetoJetID", jetAK8Puppi_tightLepVetoJetID, &b_jetAK8Puppi_tightLepVetoJetID);
   fChain->SetBranchAddress("subjetAK8Puppi_looseJetID", subjetAK8Puppi_looseJetID, &b_subjetAK8Puppi_looseJetID);
   fChain->SetBranchAddress("subjetAK8Puppi_tightJetID", subjetAK8Puppi_tightJetID, &b_subjetAK8Puppi_tightJetID);
   fChain->SetBranchAddress("subjetAK8Puppi_tightLepVetoJetID", subjetAK8Puppi_tightLepVetoJetID, &b_subjetAK8Puppi_tightLepVetoJetID);
   fChain->SetBranchAddress("el_IsPartOfNearAK4Jet", el_IsPartOfNearAK4Jet, &b_el_IsPartOfNearAK4Jet);
   fChain->SetBranchAddress("el_IsPartOfNearAK8Jet", el_IsPartOfNearAK8Jet, &b_el_IsPartOfNearAK8Jet);
   fChain->SetBranchAddress("el_IsPartOfNearSubjet", el_IsPartOfNearSubjet, &b_el_IsPartOfNearSubjet);
   fChain->SetBranchAddress("mu_IsPartOfNearAK4Jet", mu_IsPartOfNearAK4Jet, &b_mu_IsPartOfNearAK4Jet);
   fChain->SetBranchAddress("mu_IsPartOfNearAK8Jet", mu_IsPartOfNearAK8Jet, &b_mu_IsPartOfNearAK8Jet);
   fChain->SetBranchAddress("mu_IsPartOfNearSubjet", mu_IsPartOfNearSubjet, &b_mu_IsPartOfNearSubjet);
   fChain->SetBranchAddress("scale_size", &scale_size, &b_scale_size);
   fChain->SetBranchAddress("scale_Weights", &scale_Weights, &b_scale_Weights);
   fChain->SetBranchAddress("pdf_size", &pdf_size, &b_pdf_size);
   fChain->SetBranchAddress("pdf_Weights", &pdf_Weights, &b_pdf_Weights);
   fChain->SetBranchAddress("alphas_size", &alphas_size, &b_alphas_size);
   fChain->SetBranchAddress("alphas_Weights", &alphas_Weights, &b_alphas_Weights);
   fChain->SetBranchAddress("metsyst_size", &metsyst_size, &b_metsyst_size);
   fChain->SetBranchAddress("metsyst_Pt", metsyst_Pt, &b_metsyst_Pt);
   fChain->SetBranchAddress("metsyst_Phi", metsyst_Phi, &b_metsyst_Phi);
   fChain->SetBranchAddress("puppimetsyst_size", &puppimetsyst_size, &b_puppimetsyst_size);
   fChain->SetBranchAddress("puppimetsyst_Pt", puppimetsyst_Pt, &b_puppimetsyst_Pt);
   fChain->SetBranchAddress("puppimetsyst_Phi", puppimetsyst_Phi, &b_puppimetsyst_Phi);
   fChain->SetBranchAddress("gen_Pt", gen_Pt, &b_gen_Pt);
   fChain->SetBranchAddress("gen_Eta", gen_Eta, &b_gen_Eta);
   fChain->SetBranchAddress("gen_Phi", gen_Phi, &b_gen_Phi);
   fChain->SetBranchAddress("gen_E", gen_E, &b_gen_E);
   fChain->SetBranchAddress("gen_Mass", gen_Mass, &b_gen_Mass);
   fChain->SetBranchAddress("gen_Charge", gen_Charge, &b_gen_Charge);
   fChain->SetBranchAddress("jetAK8Puppi_maxSubjetCSVv2", jetAK8Puppi_maxSubjetCSVv2, &b_jetAK8Puppi_maxSubjetCSVv2);
   fChain->SetBranchAddress("jetAK8Puppi_maxSubjetCMVAv2", jetAK8Puppi_maxSubjetCMVAv2, &b_jetAK8Puppi_maxSubjetCMVAv2);
   fChain->SetBranchAddress("jetAK8Puppi_DRNearGenTop", jetAK8Puppi_DRNearGenTop, &b_jetAK8Puppi_DRNearGenTop);
   fChain->SetBranchAddress("jetAK8Puppi_DRNearGenWFromTop", jetAK8Puppi_DRNearGenWFromTop, &b_jetAK8Puppi_DRNearGenWFromTop);
   fChain->SetBranchAddress("jetAK8Puppi_DRNearGenBFromTop", jetAK8Puppi_DRNearGenBFromTop, &b_jetAK8Puppi_DRNearGenBFromTop);
   fChain->SetBranchAddress("jetAK8Puppi_DRNearGenLepFromSLTop", jetAK8Puppi_DRNearGenLepFromSLTop, &b_jetAK8Puppi_DRNearGenLepFromSLTop);
   fChain->SetBranchAddress("jetAK8Puppi_DRNearGenNuFromSLTop", jetAK8Puppi_DRNearGenNuFromSLTop, &b_jetAK8Puppi_DRNearGenNuFromSLTop);
   fChain->SetBranchAddress("jetAK8Puppi_PtNearGenTop", jetAK8Puppi_PtNearGenTop, &b_jetAK8Puppi_PtNearGenTop);
   fChain->SetBranchAddress("jetAK8Puppi_PtNearGenBFromTop", jetAK8Puppi_PtNearGenBFromTop, &b_jetAK8Puppi_PtNearGenBFromTop);
   fChain->SetBranchAddress("jetAK8Puppi_PtNearGenWFromTop", jetAK8Puppi_PtNearGenWFromTop, &b_jetAK8Puppi_PtNearGenWFromTop);
   fChain->SetBranchAddress("jetAK8Puppi_PtNearGenLepFromSLTop", jetAK8Puppi_PtNearGenLepFromSLTop, &b_jetAK8Puppi_PtNearGenLepFromSLTop);
   fChain->SetBranchAddress("jetAK8Puppi_PtNearGenNuFromSLTop", jetAK8Puppi_PtNearGenNuFromSLTop, &b_jetAK8Puppi_PtNearGenNuFromSLTop);
   fChain->SetBranchAddress("el_DRNearGenEleFromSLTop", el_DRNearGenEleFromSLTop, &b_el_DRNearGenEleFromSLTop);
   fChain->SetBranchAddress("el_PtNearGenEleFromSLTop", el_PtNearGenEleFromSLTop, &b_el_PtNearGenEleFromSLTop);
   fChain->SetBranchAddress("el_PtNearGenTop", el_PtNearGenTop, &b_el_PtNearGenTop);
   fChain->SetBranchAddress("el_LepAK4JetFrac", el_LepAK4JetFrac, &b_el_LepAK4JetFrac);
   fChain->SetBranchAddress("el_LepAK8JetFrac", el_LepAK8JetFrac, &b_el_LepAK8JetFrac);
   fChain->SetBranchAddress("el_LepSubjetFrac", el_LepSubjetFrac, &b_el_LepSubjetFrac);
   fChain->SetBranchAddress("el_LepAK4JetMassDrop", el_LepAK4JetMassDrop, &b_el_LepAK4JetMassDrop);
   fChain->SetBranchAddress("el_LepAK8JetMassDrop", el_LepAK8JetMassDrop, &b_el_LepAK8JetMassDrop);
   fChain->SetBranchAddress("el_LepSubjetMassDrop", el_LepSubjetMassDrop, &b_el_LepSubjetMassDrop);
   fChain->SetBranchAddress("el_AK4JetV1DR", el_AK4JetV1DR, &b_el_AK4JetV1DR);
   fChain->SetBranchAddress("el_AK4JetV2DR", el_AK4JetV2DR, &b_el_AK4JetV2DR);
   fChain->SetBranchAddress("el_AK4JetV3DR", el_AK4JetV3DR, &b_el_AK4JetV3DR);
   fChain->SetBranchAddress("el_AK8JetV1DR", el_AK8JetV1DR, &b_el_AK8JetV1DR);
   fChain->SetBranchAddress("el_AK8JetV2DR", el_AK8JetV2DR, &b_el_AK8JetV2DR);
   fChain->SetBranchAddress("el_AK8JetV3DR", el_AK8JetV3DR, &b_el_AK8JetV3DR);
   fChain->SetBranchAddress("el_SubjetV1DR", el_SubjetV1DR, &b_el_SubjetV1DR);
   fChain->SetBranchAddress("el_SubjetV2DR", el_SubjetV2DR, &b_el_SubjetV2DR);
   fChain->SetBranchAddress("el_SubjetV3DR", el_SubjetV3DR, &b_el_SubjetV3DR);
   fChain->SetBranchAddress("el_AK4JetV1PtRel", el_AK4JetV1PtRel, &b_el_AK4JetV1PtRel);
   fChain->SetBranchAddress("el_AK4JetV2PtRel", el_AK4JetV2PtRel, &b_el_AK4JetV2PtRel);
   fChain->SetBranchAddress("el_AK4JetV3PtRel", el_AK4JetV3PtRel, &b_el_AK4JetV3PtRel);
   fChain->SetBranchAddress("el_AK8JetV1PtRel", el_AK8JetV1PtRel, &b_el_AK8JetV1PtRel);
   fChain->SetBranchAddress("el_AK8JetV2PtRel", el_AK8JetV2PtRel, &b_el_AK8JetV2PtRel);
   fChain->SetBranchAddress("el_AK8JetV3PtRel", el_AK8JetV3PtRel, &b_el_AK8JetV3PtRel);
   fChain->SetBranchAddress("el_SubjetV1PtRel", el_SubjetV1PtRel, &b_el_SubjetV1PtRel);
   fChain->SetBranchAddress("el_SubjetV2PtRel", el_SubjetV2PtRel, &b_el_SubjetV2PtRel);
   fChain->SetBranchAddress("el_SubjetV3PtRel", el_SubjetV3PtRel, &b_el_SubjetV3PtRel);
   fChain->SetBranchAddress("mu_DRNearGenMuFromSLTop", mu_DRNearGenMuFromSLTop, &b_mu_DRNearGenMuFromSLTop);
   fChain->SetBranchAddress("mu_PtNearGenMuFromSLTop", mu_PtNearGenMuFromSLTop, &b_mu_PtNearGenMuFromSLTop);
   fChain->SetBranchAddress("mu_PtNearGenTop", mu_PtNearGenTop, &b_mu_PtNearGenTop);
   fChain->SetBranchAddress("mu_LepAK4JetFrac", mu_LepAK4JetFrac, &b_mu_LepAK4JetFrac);
   fChain->SetBranchAddress("mu_LepAK8JetFrac", mu_LepAK8JetFrac, &b_mu_LepAK8JetFrac);
   fChain->SetBranchAddress("mu_LepSubjetFrac", mu_LepSubjetFrac, &b_mu_LepSubjetFrac);
   fChain->SetBranchAddress("mu_LepAK4JetMassDrop", mu_LepAK4JetMassDrop, &b_mu_LepAK4JetMassDrop);
   fChain->SetBranchAddress("mu_LepAK8JetMassDrop", mu_LepAK8JetMassDrop, &b_mu_LepAK8JetMassDrop);
   fChain->SetBranchAddress("mu_LepSubjetMassDrop", mu_LepSubjetMassDrop, &b_mu_LepSubjetMassDrop);
   fChain->SetBranchAddress("mu_AK4JetV1DR", mu_AK4JetV1DR, &b_mu_AK4JetV1DR);
   fChain->SetBranchAddress("mu_AK4JetV2DR", mu_AK4JetV2DR, &b_mu_AK4JetV2DR);
   fChain->SetBranchAddress("mu_AK4JetV3DR", mu_AK4JetV3DR, &b_mu_AK4JetV3DR);
   fChain->SetBranchAddress("mu_AK8JetV1DR", mu_AK8JetV1DR, &b_mu_AK8JetV1DR);
   fChain->SetBranchAddress("mu_AK8JetV2DR", mu_AK8JetV2DR, &b_mu_AK8JetV2DR);
   fChain->SetBranchAddress("mu_AK8JetV3DR", mu_AK8JetV3DR, &b_mu_AK8JetV3DR);
   fChain->SetBranchAddress("mu_SubjetV1DR", mu_SubjetV1DR, &b_mu_SubjetV1DR);
   fChain->SetBranchAddress("mu_SubjetV2DR", mu_SubjetV2DR, &b_mu_SubjetV2DR);
   fChain->SetBranchAddress("mu_SubjetV3DR", mu_SubjetV3DR, &b_mu_SubjetV3DR);
   fChain->SetBranchAddress("mu_AK4JetV1PtRel", mu_AK4JetV1PtRel, &b_mu_AK4JetV1PtRel);
   fChain->SetBranchAddress("mu_AK4JetV2PtRel", mu_AK4JetV2PtRel, &b_mu_AK4JetV2PtRel);
   fChain->SetBranchAddress("mu_AK4JetV3PtRel", mu_AK4JetV3PtRel, &b_mu_AK4JetV3PtRel);
   fChain->SetBranchAddress("mu_AK8JetV1PtRel", mu_AK8JetV1PtRel, &b_mu_AK8JetV1PtRel);
   fChain->SetBranchAddress("mu_AK8JetV2PtRel", mu_AK8JetV2PtRel, &b_mu_AK8JetV2PtRel);
   fChain->SetBranchAddress("mu_AK8JetV3PtRel", mu_AK8JetV3PtRel, &b_mu_AK8JetV3PtRel);
   fChain->SetBranchAddress("mu_SubjetV1PtRel", mu_SubjetV1PtRel, &b_mu_SubjetV1PtRel);
   fChain->SetBranchAddress("mu_SubjetV2PtRel", mu_SubjetV2PtRel, &b_mu_SubjetV2PtRel);
   fChain->SetBranchAddress("mu_SubjetV3PtRel", mu_SubjetV3PtRel, &b_mu_SubjetV3PtRel);
   Notify();
}

Bool_t B2GTTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void B2GTTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t B2GTTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef B2GTTree_cxx
