#define B2GTTree_cxx
#include "B2GTTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <vector>
#include "TMath.h"

void B2GTTree::Loop(std::string outFileName)
{
//   In a ROOT session, you can do:
//      root> .L B2GTTree.C
//      root> B2GTTree t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   fChain->SetBranchStatus("*",0);  // disable all branches
   //fChain->SetBranchStatus("branchname"           , 1 );  
   //
   fChain->SetBranchStatus("puppimet_size"             , 1 );  
   fChain->SetBranchStatus("puppimet_Phi"             , 1 );  
   fChain->SetBranchStatus("puppimet_Pt"            , 1 );  
   fChain->SetBranchStatus("met_size"             , 1 );  
   fChain->SetBranchStatus("met_Phi"             , 1 );  
   fChain->SetBranchStatus("met_Pt"            , 1 );  

   fChain->SetBranchStatus("jetAK8Puppi_size"             , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_Pt"             , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_Eta"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_Phi"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_E"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_CSVv2"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_GenJetE"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_vSubjetIndex0"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_vSubjetIndex1"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_tau2"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_tau3"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_filteredMass"            , 1 ); 

   fChain->SetBranchStatus("jetAK4CHS_size"             , 1 ); 
   fChain->SetBranchStatus("jetAK4CHS_Pt"             , 1 );  
   fChain->SetBranchStatus("jetAK4CHS_Eta"            , 1 ); 
   fChain->SetBranchStatus("jetAK4CHS_Phi"            , 1 ); 
   fChain->SetBranchStatus("jetAK4CHS_E"            , 1 );  
   fChain->SetBranchStatus("jetAK4CHS_CSVv2"            , 1 );



   fChain->SetBranchStatus("subjetAK8Puppi_size"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_Pt"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_Eta"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_Phi"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_CSVv2"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_GenJetE"            , 1 );

   fChain->SetBranchStatus("mu_size"            , 1 );
   fChain->SetBranchStatus("mu_Pt"            , 1 );
   fChain->SetBranchStatus("mu_Eta"            , 1 );
   fChain->SetBranchStatus("mu_Phi"            , 1 );



   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;




   TFile * monoTopFile = new TFile(outFileName.c_str(),"RECREATE");
   TTree * monoTopTree = new TTree("monoTopTree","monoTopTree");


   //TLorentzVector leadingJet = TLorentzVector();
   //std::vector<float> px_v;
   //std::vector<float> py_v;
   float px, px_total;
   float py, py_total;
   
   const float HT_cut_value                     = 110;
   const float MET_cut_value_minus_mu           = 110;

   const float leading_AK8Puppi_jet_pt_cut      = 250;
   const float leading_AK8Puppi_jet_eta_cut     = 2.5;



   int   MET_selection_cut_minus_mu             =  -0;
   int   HT_selection_cut                       =  -0;
   int   leading_AK8Puppi_jet_cut               =  -0;


   float MET_pt                        =  -100 ;
   float MET_pt_minus_mu               =  -100 ;
   float HT_pt                         =  -100 ;
   float HT_pt_minus_mu                =  -100 ;
   float leading_AK8Puppi_jet_pt       =  -100 ;
   float leading_AK8Puppi_jet_eta       =  -100 ;

   //value branches 
   monoTopTree->Branch("HT_pt"     ,   &HT_pt      );
   monoTopTree->Branch("MET_pt_minus_mu"     ,   &MET_pt_minus_mu      );
   monoTopTree->Branch("MET_pt"     ,   &MET_pt      );
   monoTopTree->Branch("leading_AK8Puppi_jet_pt"     ,   &leading_AK8Puppi_jet_pt      );
   monoTopTree->Branch("leading_AK8Puppi_jet_eta"     ,   &leading_AK8Puppi_jet_eta      );


   //cut branches
   monoTopTree->Branch("MET_selection_cut_minus_mu"     ,   &MET_selection_cut_minus_mu      );
   monoTopTree->Branch("HT_selection_cut"     ,   &HT_selection_cut      );
   monoTopTree->Branch("leading_AK8Puppi_jet_cut"     ,   &leading_AK8Puppi_jet_cut      );





   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      ////////////////////////////////////////////////
      //HT miss 
      ////////////////////////////////////////////////

      HT_selection_cut = 0;

      px_total  = 0;
      py_total = 0;
      for (int n=0; n<jetAK4CHS_size; n++) {
         px_total = px_total + jetAK4CHS_Pt[n]*TMath::Cos(jetAK4CHS_Phi[n]);
         py_total = py_total + jetAK4CHS_Pt[n]*TMath::Sin(jetAK4CHS_Phi[n]);   
         //std::cout << n << " " << px_total << " " << py_total << " " << jetAK4CHS_Pt[n]  <<std::endl;   
      }
      //std::cout << px_total << " " << py_total << " " << TMath::Sqrt(px_total*px_total + py_total*py_total)  <<std::endl;
      HT_pt = TMath::Sqrt(px_total*px_total + py_total*py_total);

      if(HT_pt > HT_cut_value) {
         HT_selection_cut = 1;
      }
      px_total  = 0;
      py_total = 0;

      ////////////////////////////////////////////////
      //MET miss minus mu
      ////////////////////////////////////////////////
      MET_selection_cut_minus_mu = 0;
      px_total  = 0;
      py_total = 0;

      for (int n=0; n<mu_size; n++) {
         px_total = px_total + mu_Pt[n]*TMath::Cos(mu_Phi[n]);
         py_total = py_total + mu_Pt[n]*TMath::Sin(mu_Phi[n]);   
     //    std::cout << n << " " << px_total << " " << py_total << " " << jetAK4CHS_Pt[n]  <<std::endl;   
      }
     // std::cout << px_total << " " << py_total << " " << TMath::Sqrt(px_total*px_total + py_total*py_total)  <<std::endl;
      if(met_size > 0){
         px = puppimet_Pt[0]*TMath::Cos(puppimet_Phi[0]);
         py = puppimet_Pt[0]*TMath::Sin(puppimet_Phi[0]);
         px_total =  px_total-px;
         py_total =  py_total-py;
         MET_pt_minus_mu = TMath::Sqrt(px_total*px_total + py_total*py_total);
         MET_pt = puppimet_Pt[0]; 
         if(MET_pt_minus_mu > MET_cut_value_minus_mu) {
            MET_selection_cut_minus_mu = 1;
         }
      }
      px_total  = 0;
      py_total = 0;

      ////////////////////////////////////////////////
      //leadingJet cut
      ////////////////////////////////////////////////
      leading_AK8Puppi_jet_cut = 0;

      if(jetAK8Puppi_size > 0){
         leading_AK8Puppi_jet_pt = jetAK8Puppi_Pt[0];
         leading_AK8Puppi_jet_eta = jetAK8Puppi_Eta[0];
         if(jetAK8Puppi_Pt[0] > leading_AK8Puppi_jet_pt_cut && TMath::Abs(jetAK8Puppi_Eta[0]) < leading_AK8Puppi_jet_eta_cut){
            leading_AK8Puppi_jet_cut = 1;
         }
      }

      ////////////////////////////////////////////////
      //topJet cut
      ////////////////////////////////////////////////



      monoTopTree->Fill();
   }

   monoTopFile->cd();
   monoTopFile->Write();
   monoTopFile->Close();
}
