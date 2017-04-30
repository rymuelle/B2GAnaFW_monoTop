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
   int subjet_index;
   
   const float HT_cut_value                     = 110;
   const float MET_cut_value_minus_mu           = 110;

   const float leading_AK8Puppi_jet_pt_cut      = 250;
   const float leading_AK8Puppi_jet_eta_cut     = 2.5;

   const float btag_medium_wp                   = .68; //made up
   const float btag_loose_wp                   = .50; //made up
   const float mass_window[2]                   = {110, 210};
   const float tau3_tau2_wp                     = .6;
   const float QCD_delta_phi_cut_value          = 1.1;
   const float bjet_delta_r_cut_value           = 1.5;


   //cuts
   int   MET_selection_cut_minus_mu             =  -0;
   int   HT_selection_cut                       =  -0;
   int   leading_AK8Puppi_jet_cut               =  -0;
   int   top_jet_cut                            =  -0;
      int   top_jet_cut_bjet                       =  -0;
      int   top_jet_cut_mass                       =  -0;
      int   top_jet_cut_tau                       =  -0;
   int   QCD_delta_phi_cut                        =  -0;
   int   ttbar_bjet_cut                           =  -0;


   //values
   float MET_pt                        =  -100 ;
   float MET_pt_minus_mu               =  -100 ;
   float HT_pt                         =  -100 ;
   float HT_pt_minus_mu                =  -100 ;
   float leading_AK8Puppi_jet_pt       =  -100 ;
   float leading_AK8Puppi_jet_eta      =  -100 ;
   float leading_AK8Puppi_subjet0_CSVv2         =  -100 ;
   float leading_AK8Puppi_subjet1_CSVv2         =  -100 ;
   float leading_AK8Puppi_jet_mass              =  -100 ;
   float leading_AK8Puppi_jet_tau3_tau2         =  -100 ;
   float QCD_delta_phi_narrow_jets              =  -100 ;
   float bjet_delta_r_min                       =  -100 ;

   //value branches 
   monoTopTree->Branch("HT_pt"     ,   &HT_pt      );
   monoTopTree->Branch("MET_pt_minus_mu"     ,   &MET_pt_minus_mu      );
   monoTopTree->Branch("MET_pt"     ,   &MET_pt      );
   monoTopTree->Branch("leading_AK8Puppi_jet_pt"     ,   &leading_AK8Puppi_jet_pt      );
   monoTopTree->Branch("leading_AK8Puppi_jet_eta"     ,   &leading_AK8Puppi_jet_eta      );
   monoTopTree->Branch("leading_AK8Puppi_subjet0_CSVv2"     ,   &leading_AK8Puppi_subjet0_CSVv2      );
   monoTopTree->Branch("leading_AK8Puppi_subjet1_CSVv2"     ,   &leading_AK8Puppi_subjet1_CSVv2      );
   monoTopTree->Branch("leading_AK8Puppi_jet_mass"     ,   &leading_AK8Puppi_jet_mass      );
   monoTopTree->Branch("leading_AK8Puppi_jet_tau3_tau2"     ,   &leading_AK8Puppi_jet_tau3_tau2      );
   monoTopTree->Branch("QCD_delta_phi_narrow_jets"     ,   &QCD_delta_phi_narrow_jets      );
   monoTopTree->Branch("bjet_delta_r_min"     ,   &bjet_delta_r_min      );



   //cut branches
   monoTopTree->Branch("MET_selection_cut_minus_mu"     ,   &MET_selection_cut_minus_mu      );
   monoTopTree->Branch("HT_selection_cut"     ,   &HT_selection_cut      );
   monoTopTree->Branch("leading_AK8Puppi_jet_cut"     ,   &leading_AK8Puppi_jet_cut      );
   monoTopTree->Branch("top_jet_cut"     ,   &top_jet_cut      );
   monoTopTree->Branch("top_jet_cut_bjet"     ,   &top_jet_cut_bjet      );
   monoTopTree->Branch("top_jet_cut_mass"     ,   &top_jet_cut_mass      );
   monoTopTree->Branch("top_jet_cut_tau"     ,   &top_jet_cut_tau      );
   monoTopTree->Branch("QCD_delta_phi_cut"     ,   &QCD_delta_phi_cut      );
   monoTopTree->Branch("ttbar_bjet_cut"     ,   &ttbar_bjet_cut      );





   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;


      MET_pt                        =  -100 ;
      MET_pt_minus_mu               =  -100 ;
      HT_pt                         =  -100 ;
      HT_pt_minus_mu                =  -100 ;
      leading_AK8Puppi_jet_pt       =  -100 ;
      leading_AK8Puppi_jet_eta      =  -100 ;
      leading_AK8Puppi_subjet0_CSVv2         =  -100 ;
      leading_AK8Puppi_subjet1_CSVv2         =  -100 ;
      leading_AK8Puppi_jet_mass              =  -100 ;
      leading_AK8Puppi_jet_tau3_tau2         =  -100 ;
      QCD_delta_phi_narrow_jets              =  -100 ;
      bjet_delta_r_min                       =  -100 ;
      
      MET_selection_cut_minus_mu             =  -0;
      HT_selection_cut                       =  -0;
      leading_AK8Puppi_jet_cut               =  -0;
      top_jet_cut                            =  -0;
      top_jet_cut_bjet                       =  -0;
      top_jet_cut_mass                       =  -0;
      top_jet_cut_tau                        =  -0;
      QCD_delta_phi_cut                      =  -0;
      ttbar_bjet_cut                         =  -0;

      ////////////////////////////////////////////////
      //HT miss 
      ////////////////////////////////////////////////

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

      if(jetAK8Puppi_size > 0){
      //btag cut
         if(subjetAK8Puppi_size >= jetAK8Puppi_vSubjetIndex0[0] and jetAK8Puppi_vSubjetIndex0[0] >= 0){
            subjet_index = jetAK8Puppi_vSubjetIndex0[0];
            leading_AK8Puppi_subjet0_CSVv2 = subjetAK8Puppi_CSVv2[ subjet_index ];
         }
         if(subjetAK8Puppi_size >= jetAK8Puppi_vSubjetIndex1[0] and jetAK8Puppi_vSubjetIndex1[0] >= 0){
            subjet_index = jetAK8Puppi_vSubjetIndex1[0];
            leading_AK8Puppi_subjet1_CSVv2 = subjetAK8Puppi_CSVv2[ subjet_index ];
         }

         if(TMath::Max(leading_AK8Puppi_subjet0_CSVv2,leading_AK8Puppi_subjet1_CSVv2) > btag_medium_wp){
            top_jet_cut_bjet = 1;
         }

      //mass cut
         leading_AK8Puppi_jet_mass = jetAK8Puppi_filteredMass[0];

         if(mass_window[0]< leading_AK8Puppi_jet_mass && leading_AK8Puppi_jet_mass< mass_window[1]){
            top_jet_cut_mass = 1;
         }


      //Tau cut
         leading_AK8Puppi_jet_tau3_tau2 = jetAK8Puppi_tau3[0]/jetAK8Puppi_tau2[0];
         if(leading_AK8Puppi_jet_tau3_tau2 > tau3_tau2_wp){
            top_jet_cut_tau = 1;
         }

         if( top_jet_cut_bjet*top_jet_cut_mass*top_jet_cut_tau > 0){
            top_jet_cut = 1;
         }
      }



      ////////////////////////////////////////////////
      //QCD delta met, jet cut
      ////////////////////////////////////////////////

      

      if(puppimet_size > 0 and jetAK4CHS_size > 0)
      {
         QCD_delta_phi_narrow_jets = 100;
         for(unsigned int n = 0; n < jetAK4CHS_size; n++){
            float temp_delta_phi =  TMath::Abs(puppimet_Phi[0] - jetAK4CHS_Phi[n]);
            if( jetAK4CHS_Pt[n] < 30){
               break;
            }
            if( jetAK4CHS_Pt[n] > 30 && TMath::Abs(jetAK4CHS_Eta[n]) < 4.5 ){
                QCD_delta_phi_narrow_jets = TMath::Min(QCD_delta_phi_narrow_jets, temp_delta_phi );
            }
         }
         if(QCD_delta_phi_narrow_jets > QCD_delta_phi_cut_value){
            QCD_delta_phi_cut = 1;
         }
      } 


      ////////////////////////////////////////////////
      //ttbar delta r bjet, fat jet
      ////////////////////////////////////////////////
     

      if(jetAK4CHS_size > 0 && jetAK8Puppi_size > 0){

         for(unsigned int n = 0; n < jetAK4CHS_size; n++){
            if( jetAK4CHS_CSVv2[n] > btag_loose_wp){
               int not_subjet = 1;
               float delta_r = 100;

               //check subjets
         /*      if(subjetAK8Puppi_size >= jetAK8Puppi_vSubjetIndex0[0] and jetAK8Puppi_vSubjetIndex0[0] >= 0){
                  subjet_index = jetAK8Puppi_vSubjetIndex0[0];
                  delta_r = TMath::Sqrt( TMath::Power( jetAK4CHS_Phi[n] - subjetAK8Puppi_Phi[subjet_index], 2  ) + TMath::Power( jetAK4CHS_Eta[n] - subjetAK8Puppi_Eta[subjet_index], 2  ));
                  std::cout << "subjet0 " << delta_r <<std::endl;
                  if( delta_r < 0.4){
                     not_subjet = 0;
                  }
               }

               if(subjetAK8Puppi_size >= jetAK8Puppi_vSubjetIndex1[0] and jetAK8Puppi_vSubjetIndex1[0] >= 0){
                  subjet_index = jetAK8Puppi_vSubjetIndex1[0];
                  delta_r = TMath::Sqrt( TMath::Power( jetAK4CHS_Phi[n] - subjetAK8Puppi_Phi[subjet_index], 2  ) + TMath::Power( jetAK4CHS_Eta[n] - subjetAK8Puppi_Eta[subjet_index], 2  ));
                  std::cout << "subjet1 " << delta_r <<std::endl;
                  if( delta_r < 0.4){
                     not_subjet = 0;
                  }
               }*/

               if( not_subjet == 1){
                  delta_r = TMath::Sqrt( TMath::Power( jetAK4CHS_Phi[n] - jetAK8Puppi_Phi[0], 2  ) + TMath::Power( jetAK4CHS_Eta[n] - jetAK8Puppi_Eta[0], 2  ));
               }
              // std::cout<< " " << jetAK4CHS_Phi[n] << " " << jetAK4CHS_Eta[n] << " " << delta_r << std::endl;
               float temp_delta_r = TMath::Abs(bjet_delta_r_min);
               if(delta_r > 0.8 ){
                  bjet_delta_r_min = TMath::Min(delta_r, temp_delta_r ) ;
            }
         }

         if(bjet_delta_r_min > bjet_delta_r_cut_value || bjet_delta_r_min < 0){
            ttbar_bjet_cut = 1;
            //std::cout <<"what " << bjet_delta_r_min << std::endl;
         }

         //std::cout << ttbar_bjet_cut << " " << bjet_delta_r_min << std::endl;
      }
            

         
      //std::cout << HT_pt << std::endl;
      HT_pt = HT_pt;
      monoTopTree->Fill();
   }

   monoTopFile->cd();
   monoTopFile->Write();
   monoTopFile->Close();
}
