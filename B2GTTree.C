#define B2GTTree_cxx
#include "B2GTTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

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
   fChain->SetBranchStatus("subjetAK8Puppi_Phi"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_E"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_CSVv2"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_GenJetE"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_vSubjetIndex0"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_vSubjetIndex1"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_tau2"            , 1 );  
   fChain->SetBranchStatus("jetAK8Puppi_tau3"            , 1 ); 
   fChain->SetBranchStatus("jetAK8Puppi_filteredMass"            , 1 ); 



   fChain->SetBranchStatus("subjetAK8Puppi_size"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_Pt"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_Eta"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_Phi"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_CSVv2"            , 1 );
   fChain->SetBranchStatus("subjetAK8Puppi_GenJetE"            , 1 );
 



   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;

  // TFile * monoTopFile = new TFile(outFileName.c_str(),"RECREATE");
  // TTree * monoTopTree = new TTRee("monoTopTree","monoTopTree");

   //TLorentzVector leadingJet = TLorentzVector();





   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      std::cout << "met_Phi[0] " << met_Phi[0] <<std::endl;
   }
}
