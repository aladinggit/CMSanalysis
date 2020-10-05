#define histo_cxx
#include "histo.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void histo::Loop()
{

        TFile *ofile = new TFile("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/histo.root", "recreate");
        ofile->cd();

        TH1D *hleading_m = new TH1D("leading_m","leading_m", 10 ,0 ,10 );
        TH1D *hleading_pt = new TH1D("leading_pt","leading_pt", 20 , 0, 200);
        TH1D *hleading_eta = new TH1D("leading_eta","leading_eta", 10, 0, 5);
        TH1D *hleading_phi = new TH1D("leading_phi","leading_phi", 10 , 0, 10);
        TH1D *hleading_e = new TH1D("leading_e","leading_e",20 , 0, 250);
        TH1D *hsubleading_m = new TH1D("subleading_m","subleading_m", 10 ,0 ,10 );
        TH1D *hsubleading_pt = new TH1D("subleading_pt","subleading_pt", 20 ,0 , 200);
        TH1D *hsubleading_eta = new TH1D("subleading_eta","subleading_eta", 10 ,0 , 5);
        TH1D *hsubleading_phi = new TH1D("subleading_phi","subleading_phi", 10 , 0, 10);
        TH1D *hsubleading_e = new TH1D("subleading_e","subleading_e", 20 , 0, 250);

        TH1D *hw_leading_m = new TH1D("w_leading_m","w_leading_m", 10 ,0 ,10 );
        TH1D *hw_leading_pt = new TH1D("w_leading_pt","w_leading_pt", 20 , 0, 200);
        TH1D *hw_leading_eta = new TH1D("w_leading_eta","w_leading_eta", 10, 0, 5);
        TH1D *hw_leading_phi = new TH1D("w_leading_phi","w_leading_phi", 10 , 0, 10);
        TH1D *hw_leading_e = new TH1D("w_leading_e","w_leading_e",20 , 0, 250);
        TH1D *hw_subleading_m = new TH1D("w_subleading_m","w_subleading_m", 10 ,0 ,10 );
        TH1D *hw_subleading_pt = new TH1D("w_subleading_pt","w_subleading_pt", 20 ,0 , 200);
        TH1D *hw_subleading_eta = new TH1D("w_subleading_eta","w_subleading_eta", 10 ,0 , 5);
        TH1D *hw_subleading_phi = new TH1D("w_subleading_phi","w_subleading_phi", 10 , 0, 10);
        TH1D *hw_subleading_e = new TH1D("w_subleading_e","w_subleading_e", 20 , 0, 250);







	TH1D *hnumber_jet = new TH1D("number_jet","number_jet", 8 ,0 ,8 );
        TH1D *hw_number_jet = new TH1D("w_number_jet","w_number_jet", 8 ,0 ,8 );



        TH1D *hjet1leading_m = new TH1D("jet1leading_m","jet1leading_m", 10 ,0 ,10 );
        TH1D *hjet1leading_pt = new TH1D("jet1leading_pt","jet1leading_pt", 20 ,0 ,200 );
        TH1D *hjet1leading_eta = new TH1D("jet1leading_eta","jet1leading_eta", 10 ,0 ,5 );
        TH1D *hjet1leading_phi = new TH1D("jet1leading_phi","jet1leading_phi", 10 ,0 ,10 );
        TH1D *hjet2leading_m = new TH1D("jet2leading_m","jet2leading_m", 10 ,0 ,10 );
        TH1D *hjet2leading_pt = new TH1D("jet2leading_pt","jet2leading_pt", 20 ,0 ,200 );
        TH1D *hjet2leading_eta = new TH1D("jet2leading_eta","jet2leading_eta", 10 ,0 ,5 );
        TH1D *hjet2leading_phi = new TH1D("jet2leading_phi","jet2leading_phi", 10 ,0 ,10 );
        TH1D *hjet2subleading_m = new TH1D("jet2subleading_m","jet2subleading_m", 10 ,0 ,10 );
        TH1D *hjet2subleading_pt = new TH1D("jet2subleading_pt","jet2subleading_pt", 20 ,0 ,200 );
        TH1D *hjet2subleading_eta = new TH1D("jet2subleading_eta","jet2subleading_eta", 10 ,0 ,5 );
        TH1D *hjet2subleading_phi = new TH1D("jet2subleading_phi","jet2subleading_phi", 10 ,0 ,10 );
        TH1D *hjet3leading_m = new TH1D("jet3leading_m","jet3leading_m",  10,0 ,10 );
        TH1D *hjet3leading_pt = new TH1D("jet3leading_pt","jet3leading_pt",  20,0 ,200 );
        TH1D *hjet3leading_eta = new TH1D("jet3leading_eta","jet3leading_eta",  10,0 ,5 );
        TH1D *hjet3leading_phi = new TH1D("jet3leading_phi","jet3leading_phi",  10,0 ,10 );
        TH1D *hjet3subleading_m = new TH1D("jet3leading_m","jet3subleading_m", 10 ,0 ,10 );
        TH1D *hjet3subleading_pt = new TH1D("jet3leading_pt","jet3subleading_pt", 20 ,0 ,200 );
        TH1D *hjet3subleading_eta = new TH1D("jet3leading_eta","jet3subleading_eta", 10 ,0 ,5 );
        TH1D *hjet3subleading_phi = new TH1D("jet3leading_phi","jet3subleading_phi", 10 ,0 ,10 );
        TH1D *hjet4leading_m = new TH1D("jet4leading_m","jet4leading_m", 10 ,0 ,10 );
        TH1D *hjet4leading_pt = new TH1D("jet4leading_pt","jet4leading_pt", 20 ,0 ,200 );
        TH1D *hjet4leading_eta = new TH1D("jet4leading_eta","jet4leading_eta",10  ,0 ,5 );
        TH1D *hjet4leading_phi = new TH1D("jet4leading_phi","jet4leading_phi",10  ,0 ,10 );
        TH1D *hjet4subleading_m = new TH1D("jet4subleading_m","jet4subleading_m", 10 ,0 ,10 );
        TH1D *hjet4subleading_pt = new TH1D("jet4subleading_pt","jet4subleading_pt", 20 ,0 ,200 );
        TH1D *hjet4subleading_eta = new TH1D("jet4subleading_eta","jet4subleading_eta", 10 ,0 ,5 );
        TH1D *hjet4subleading_phi = new TH1D("jet4subleading_phi","jet4subleading_phi", 10 ,0 ,10 );
        TH1D *hjet5leading_m = new TH1D("jet5leading_m","jet5leading_m", 10 ,0 ,10 );
        TH1D *hjet5leading_pt = new TH1D("jet5leading_pt","jet5leading_pt", 20 ,0 ,200 );
        TH1D *hjet5leading_eta = new TH1D("jet5leading_eta","jet5leading_eta",10  ,0 ,5 );
        TH1D *hjet5leading_phi = new TH1D("jet5leading_phi","jet5leading_phi", 10 ,0 ,10 );
        TH1D *hjet5subleading_m = new TH1D("jet5subleading_m","jet5subleading_m", 10 ,0 ,10 );
        TH1D *hjet5subleading_pt = new TH1D("jet5subleading_pt","jet5subleading_pt", 20 ,0 , 200);
        TH1D *hjet5subleading_eta = new TH1D("jet5subleading_eta","jet5subleading_eta",10  ,0 ,5 );
        TH1D *hjet5subleading_phi = new TH1D("jet5subleading_phi","jet5subleading_phi",10  ,0 ,10 );
        TH1D *hjet6leading_m = new TH1D("jet6leading_m","jet6leading_m", 10 ,0 ,10 );
        TH1D *hjet6leading_pt = new TH1D("jet6leading_pt","jet6leading_pt",20  ,0 ,200 );
        TH1D *hjet6leading_eta = new TH1D("jet6leading_eta","jet6leading_eta",10  ,0 ,5 );
        TH1D *hjet6leading_phi = new TH1D("jet6leading_phi","jet6leading_phi",10  ,0 ,10 );
        TH1D *hjet6subleading_m = new TH1D("jet6subleading_m","jet6subleading_m",10  ,0 ,10 );
        TH1D *hjet6subleading_pt = new TH1D("jet6subleading_pt","jet6subleading_pt",10  ,0 ,200 );
        TH1D *hjet6subleading_eta = new TH1D("jet6subleading_eta","jet6subleading_eta",10  ,0 ,5 );
        TH1D *hjet6subleading_phi = new TH1D("jet6subleading_phi","jet6subleading_phi",10  ,0 ,10 );
        TH1D *hjet7leading_m = new TH1D("jet7leading_m","jet7leading_m", 10 ,0 ,10 );
        TH1D *hjet7leading_pt = new TH1D("jet7leading_pt","jet7leading_pt", 20 ,0 ,200 );
        TH1D *hjet7leading_eta = new TH1D("jet7leading_eta","jet7leading_eta",10  ,0 ,5 );
        TH1D *hjet7leading_phi = new TH1D("jet7leading_phi","jet7leading_phi",10  ,0 ,10 );
        TH1D *hjet7subleading_m = new TH1D("jet7subleading_m","jetleading_m",10  ,0 ,10 );
        TH1D *hjet7subleading_pt = new TH1D("jet7subleading_pt","jetleading_pt",20  ,0 ,200 );
        TH1D *hjet7subleading_eta = new TH1D("jet7subleading_eta","jetleading_eta",10  ,0 ,5 );
        TH1D *hjet7subleading_phi = new TH1D("jet7subleading_phi","jetleading_phi",10  ,0 ,10 );
        TH1D *hjet8leading_m = new TH1D("jet8leading_m","jet8leading_m",10  ,0 ,10 );
        TH1D *hjet8leading_pt = new TH1D("jet8leading_pt","jet8leading_pt",20  ,0 ,200 );
        TH1D *hjet8leading_eta = new TH1D("jet8leading_eta","jet8leading_eta",10  ,0 ,5 );
        TH1D *hjet8leading_phi = new TH1D("jet8leading_phi","jet8leading_phi",10  ,0 ,10 );
        TH1D *hjet8subleading_m = new TH1D("jet8subleading_m","jet8subleading_m", 10 ,0 ,10 );
        TH1D *hjet8subleading_pt = new TH1D("jet8subleading_pt","jet8subleading_pt", 20 ,0 ,200 );
        TH1D *hjet8subleading_eta = new TH1D("jet8subleading_eta","jet8subleading_eta",10  ,0 , 5);
        TH1D *hjet8subleading_phi = new TH1D("jet8subleading_phi","jet8subleading_phi",10  ,0 ,10 );

        TH1D *hw_jet1leading_m = new TH1D("w_jet1leading_m","w_jet1leading_m", 10 ,0 ,10 );
        TH1D *hw_jet1leading_pt = new TH1D("w_jet1leading_pt","w_jet1leading_pt", 20 ,0 ,200 );
        TH1D *hw_jet1leading_eta = new TH1D("w_jet1leading_eta","w_jet1leading_eta", 10 ,0 ,5 );
        TH1D *hw_jet1leading_phi = new TH1D("w_jet1leading_phi","w_jet1leading_phi", 10 ,0 ,10 );
        TH1D *hw_jet2leading_m = new TH1D("w_jet2leading_m","w_jet2leading_m", 10 ,0 ,10 );
        TH1D *hw_jet2leading_pt = new TH1D("w_jet2leading_pt","w_jet2leading_pt", 20 ,0 ,200 );
        TH1D *hw_jet2leading_eta = new TH1D("w_jet2leading_eta","w_jet2leading_eta", 10 ,0 ,5 );
        TH1D *hw_jet2leading_phi = new TH1D("w_jet2leading_phi","w_jet2leading_phi", 10 ,0 ,10 );
        TH1D *hw_jet2subleading_m = new TH1D("w_jet2subleading_m","w_jet2subleading_m", 10 ,0 , 10);
        TH1D *hw_jet2subleading_pt = new TH1D("w_jet2subleading_pt","w_jet2subleading_pt", 20 ,0 ,200 );
        TH1D *hw_jet2subleading_eta = new TH1D("w_jet2subleading_eta","w_jet2subleading_eta", 10 ,0 ,5 );
        TH1D *hw_jet2subleading_phi = new TH1D("w_jet2subleading_phi","w_jet2subleading_phi", 10 ,0 ,10 );
        TH1D *hw_jet3leading_m = new TH1D("w_jet3leading_","w_jet3leading_m", 10 ,0 , 10);
        TH1D *hw_jet3leading_pt = new TH1D("w_jet3leading_","w_jet3leading_pt", 20 ,0 ,200 );
        TH1D *hw_jet3leading_eta = new TH1D("w_jet3leading_","w_jet3leading_eta", 10 ,0 ,5 );
        TH1D *hw_jet3leading_phi = new TH1D("w_jet3leading_","w_jet3leading_phi", 10 ,0 ,10 );
        TH1D *hw_jet3subleading_m = new TH1D("w_jet3subleading_","w_jet3subleading_m", 10 ,0 ,10 );
        TH1D *hw_jet3subleading_pt = new TH1D("w_jet3subleading_","w_jet3subleading_pt", 20 ,0 , 200);
        TH1D *hw_jet3subleading_eta = new TH1D("w_jet3subleading_","w_jet3subleading_eta", 10 ,0 , 5);
        TH1D *hw_jet3subleading_phi = new TH1D("w_jet3subleading_","w_jet3subleading_phi", 10 ,0 , 10);
        TH1D *hw_jet4leading_m = new TH1D("w_jet4leading_m","w_jet4leading_m",10  ,0 , 10);
        TH1D *hw_jet4leading_pt = new TH1D("w_jet4leading_pt","w_jet4leading_pt",20  ,0 , 200);
        TH1D *hw_jet4leading_eta = new TH1D("w_jet4leading_eta","w_jet4leading_eta",10  ,0 , 5);
        TH1D *hw_jet4leading_phi = new TH1D("w_jet4leading_phi","w_jet4leading_phi",10  ,0 , 10);
        TH1D *hw_jet4subleading_m = new TH1D("w_jet4subleading_m","w_jet4subleading_m",10  ,0 ,10 );
        TH1D *hw_jet4subleading_pt = new TH1D("w_jet4subleading_pt","w_jet4subleading_pt",20  ,0 ,200 );
        TH1D *hw_jet4subleading_eta = new TH1D("w_jet4subleading_eta","w_jet4subleading_eta",10  ,0 ,5 );
        TH1D *hw_jet4subleading_phi = new TH1D("w_jet4subleading_phi","w_jet4subleading_phi",10  ,0 ,10 );
        TH1D *hw_jet5leading_m = new TH1D("w_jet5leading_m","w_jet5leading_m",10  ,0 ,10 );
        TH1D *hw_jet5leading_pt = new TH1D("w_jet5leading_pt","w_jet5leading_pt",20  ,0 ,200 );
        TH1D *hw_jet5leading_eta = new TH1D("w_jet5leading_eta","w_jet5leading_eta",10  ,0 ,5 );
        TH1D *hw_jet5leading_phi = new TH1D("w_jet5leading_phi","w_jet5leading_phi",10  ,0 ,10 );
        TH1D *hw_jet5subleading_m = new TH1D("w_jet5subleading_m","w_jet5subleading_m",10  ,0 , 10);
        TH1D *hw_jet5subleading_pt = new TH1D("w_jet5subleading_pt","w_jet5subleading_pt",10  ,0 ,200 );
        TH1D *hw_jet5subleading_eta = new TH1D("w_jet5subleading_eta","w_jet5subleading_eta",10  ,0 ,5 );
        TH1D *hw_jet5subleading_phi = new TH1D("w_jet5subleading_phi","w_jet5subleading_phi",10  ,0 ,10 );
        TH1D *hw_jet6leading_m = new TH1D("w_jet6leading_m","w_jet6leading_m",10  ,0 ,10 );
        TH1D *hw_jet6leading_pt = new TH1D("w_jet6leading_pt","w_jet6leading_pt",20  ,0 ,200 );
        TH1D *hw_jet6leading_eta = new TH1D("w_jet6leading_eta","w_jet6leading_eta",10  ,0 ,5 );
        TH1D *hw_jet6leading_phi = new TH1D("w_jet6leading_phi","w_jet6leading_phi",10  ,0 ,10 );
        TH1D *hw_jet6subleading_m = new TH1D("w_jet6subleading_m","w_jet6subleading_m",10  ,0 ,10 );
        TH1D *hw_jet6subleading_pt = new TH1D("w_jet6subleading_pt","w_jet6subleading_pt",20  ,0 ,200 );
        TH1D *hw_jet6subleading_eta = new TH1D("w_jet6subleading_eta","w_jet6subleading_eta",10  ,0 ,5 );
        TH1D *hw_jet6subleading_phi = new TH1D("w_jet6subleading_phi","w_jet6subleading_phi",10  ,0 ,10 );
        TH1D *hw_jet7leading_m = new TH1D("w_jet7leading_m","w_jet7leading_m", 10 ,0 ,10 );
        TH1D *hw_jet7leading_pt = new TH1D("w_jet7leading_pt","w_jet7leading_pt", 20 ,0 ,200 );
        TH1D *hw_jet7leading_eta = new TH1D("w_jet7leading_eta","w_jet7leading_eta", 10 ,0 ,5 );
        TH1D *hw_jet7leading_phi = new TH1D("w_jet7leading_phi","w_jet7leading_phi", 10 ,0 ,10 );
        TH1D *hw_jet7subleading_m = new TH1D("w_jet7subleading_m","w_jetleading_m", 10 ,0 ,10 );
        TH1D *hw_jet7subleading_pt = new TH1D("w_jet7subleading_pt","w_jetleading_pt", 20 ,0 ,200 );
        TH1D *hw_jet7subleading_eta = new TH1D("w_jet7subleading_eta","w_jetleading_eta", 10 ,0 ,10 );
        TH1D *hw_jet7subleading_phi = new TH1D("w_jet7subleading_phi","w_jetleading_phi", 10 ,0 ,10 );
        TH1D *hw_jet8leading_m = new TH1D("w_jet8leading_m","w_jet8leading_m", 10 ,0 ,10 );
        TH1D *hw_jet8leading_pt = new TH1D("w_jet8leading_pt","w_jet8leading_pt", 20 ,0 ,200 );
        TH1D *hw_jet8leading_eta = new TH1D("w_jet8leading_eta","w_jet8leading_eta", 10 ,0 ,5 );
        TH1D *hw_jet8leading_phi = new TH1D("w_jet8leading_phi","w_jet8leading_phi", 10 ,0 ,10 );
        TH1D *hw_jet8subleading_m = new TH1D("w_jet8subleading_m","w_jet8subleading_m",10  ,0 ,10 );
        TH1D *hw_jet8subleading_pt = new TH1D("w_jet8subleading_pt","w_jet8subleading_pt",20  ,0 ,200 );
        TH1D *hw_jet8subleading_eta = new TH1D("w_jet8subleading_eta","w_jet8subleading_eta",10  ,0 , 5);
        TH1D *hw_jet8subleading_phi = new TH1D("w_jet8subleading_phi","w_jet8subleading_phi",10  ,0 , 10);










//   In a ROOT session, you can do:
//      root> .L histo.C
//      root> histo t
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
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
   








         hleading_m           ->Fill(              leading_m          ) ; 
         hleading_pt          ->Fill(              leading_pt         ) ;
         hleading_eta         ->Fill(              leading_eta        ) ;
         hleading_phi         ->Fill(              leading_phi        ) ;
         hleading_e           ->Fill(              leading_e          ) ;  
         hsubleading_m        ->Fill(              subleading_m       )     ;
         hsubleading_pt       ->Fill(              subleading_pt      )      ; 
         hsubleading_eta      ->Fill(              subleading_eta     )             ;
         hsubleading_phi      ->Fill(              subleading_phi     )       ;
         hsubleading_e        ->Fill(              subleading_e       )      ;
         hw_leading_m         ->Fill(              leading_m     , weights   )     ;
         hw_leading_pt        ->Fill(              leading_pt    , weights   )     ;
         hw_leading_eta       ->Fill(              leading_eta   , weights   )       ;
         hw_leading_phi       ->Fill(              leading_phi   , weights   )       ;
         hw_leading_e         ->Fill(              leading_e     , weights   )     ;
         hw_subleading_m      ->Fill(              subleading_m  , weights   )        ;
         hw_subleading_pt     ->Fill(              subleading_pt , weights   )         ;
         hw_subleading_eta    ->Fill(              subleading_eta, weights   )         ;
         hw_subleading_phi    ->Fill(              subleading_phi, weights   )         ;
         hw_subleading_e      ->Fill(              subleading_e  , weights   )        ;
         hnumber_jet          ->Fill(              number_jet         )     ;
         hw_number_jet        ->Fill(              number_jet    , weights  )     ;
         hjet1leading_m       ->Fill(              jet1leading_m      )       ;
         hjet1leading_pt      ->Fill(              jet1leading_pt     )        ;
         hjet1leading_eta     ->Fill(              jet1leading_eta    )        ;
         hjet1leading_phi     ->Fill(              jet1leading_phi    )        ;
         hjet2leading_m       ->Fill(              jet2leading_m      )       ;
         hjet2leading_pt      ->Fill(              jet2leading_pt     )        ;
         hjet2leading_eta     ->Fill(              jet2leading_eta    )        ;
         hjet2leading_phi     ->Fill(              jet2leading_phi    )        ;
         hjet2subleading_m    ->Fill(              jet2subleading_m   )          ;
         hjet2subleading_pt   ->Fill(              jet2subleading_pt  )           ;
         hjet2subleading_eta  ->Fill(              jet2subleading_eta )           ;
         hjet2subleading_phi  ->Fill(              jet2subleading_phi )           ;
         hjet3leading_m       ->Fill(              jet3leading_m      )       ;
         hjet3leading_pt      ->Fill(              jet3leading_pt     )       ;
         hjet3leading_eta     ->Fill(              jet3leading_eta    )        ;
         hjet3leading_phi     ->Fill(              jet3leading_phi    )        ;
         hjet3subleading_m    ->Fill(              jet3subleading_m   )          ;
         hjet3subleading_pt   ->Fill(              jet3subleading_pt  )          ;
         hjet3subleading_eta  ->Fill(              jet3subleading_eta )           ;
         hjet3subleading_phi  ->Fill(              jet3subleading_phi )           ;
         hjet4leading_m       ->Fill(              jet4leading_m      )       ;
         hjet4leading_pt      ->Fill(              jet4leading_pt     )        ;
         hjet4leading_eta     ->Fill(              jet4leading_eta    )        ;
         hjet4leading_phi     ->Fill(              jet4leading_phi    )        ;
         hjet4subleading_m    ->Fill(              jet4subleading_m   )          ;
         hjet4subleading_pt   ->Fill(              jet4subleading_pt  )           ;
         hjet4subleading_eta  ->Fill(              jet4subleading_eta )           ;
         hjet4subleading_phi  ->Fill(              jet4subleading_phi )           ;
         hjet5leading_m       ->Fill(              jet5leading_m      )       ;
         hjet5leading_pt      ->Fill(              jet5leading_pt     )       ;
         hjet5leading_eta     ->Fill(              jet5leading_eta    )         ;
         hjet5leading_phi     ->Fill(              jet5leading_phi    )         ;
         hjet5subleading_m    ->Fill(              jet5subleading_m   )          ;
         hjet5subleading_pt   ->Fill(              jet5subleading_pt  )           ;
         hjet5subleading_eta  ->Fill(              jet5subleading_eta )           ;
         hjet5subleading_phi  ->Fill(              jet5subleading_phi )           ;
         hjet6leading_m       ->Fill(              jet6leading_m      )        ;
         hjet6leading_pt      ->Fill(              jet6leading_pt     )        ;
         hjet6leading_eta     ->Fill(              jet6leading_eta    )          ;
         hjet6leading_phi     ->Fill(              jet6leading_phi    )          ;
         hjet6subleading_m    ->Fill(              jet6subleading_m   )          ;
         hjet6subleading_pt   ->Fill(              jet6subleading_pt  )           ;
         hjet6subleading_eta  ->Fill(              jet6subleading_eta )           ;
         hjet6subleading_phi  ->Fill(              jet6subleading_phi )           ;
         hjet7leading_m       ->Fill(              jet7leading_m      )       ;
         hjet7leading_pt      ->Fill(              jet7leading_pt     )       ;
         hjet7leading_eta     ->Fill(              jet7leading_eta    )        ;
         hjet7leading_phi     ->Fill(              jet7leading_phi    )        ;
         hjet7subleading_m    ->Fill(              jet7subleading_m   )          ;
         hjet7subleading_pt   ->Fill(              jet7subleading_pt  )          ;
         hjet7subleading_eta  ->Fill(              jet7subleading_eta )           ;
         hjet7subleading_phi  ->Fill(              jet7subleading_phi )           ;
         hjet8leading_m       ->Fill(              jet8leading_m      )       ;
         hjet8leading_pt      ->Fill(              jet8leading_pt     )       ;
         hjet8leading_eta     ->Fill(              jet8leading_eta    )        ;
         hjet8leading_phi     ->Fill(              jet8leading_phi    )        ;
         hjet8subleading_m    ->Fill(              jet8subleading_m   )          ;
         hjet8subleading_pt   ->Fill(              jet8subleading_pt  )           ;
         hjet8subleading_eta  ->Fill(              jet8subleading_eta )             ;
         hjet8subleading_phi  ->Fill(              jet8subleading_phi )           ;
         hw_jet1leading_m     ->Fill(                      jet1leading_m     , weights)        ; 
         hw_jet1leading_pt    ->Fill(                      jet1leading_pt    , weights)         ;
         hw_jet1leading_eta   ->Fill(                      jet1leading_eta   , weights)         ;
         hw_jet1leading_phi   ->Fill(                      jet1leading_phi   , weights)         ;
         hw_jet2leading_m     ->Fill(                      jet2leading_m     , weights)        ;
         hw_jet2leading_pt    ->Fill(                      jet2leading_pt    , weights)         ;
         hw_jet2leading_eta   ->Fill(                      jet2leading_eta   , weights)         ;
         hw_jet2leading_phi   ->Fill(                      jet2leading_phi   , weights)         ;
         hw_jet2subleading_m  ->Fill(                      jet2subleading_m  , weights)            ;
         hw_jet2subleading_pt ->Fill(                      jet2subleading_pt , weights)            ;
         hw_jet2subleading_eta->Fill(                      jet2subleading_eta, weights)            ;
         hw_jet2subleading_phi->Fill(                      jet2subleading_phi, weights)            ;
         hw_jet3leading_m     ->Fill(                      jet3leading_m     , weights)        ;
         hw_jet3leading_pt    ->Fill(                      jet3leading_pt    , weights)         ;
         hw_jet3leading_eta   ->Fill(                      jet3leading_eta   , weights)           ;
         hw_jet3leading_phi   ->Fill(                      jet3leading_phi   , weights)           ;
         hw_jet3subleading_m  ->Fill(                      jet3subleading_m  , weights)           ;
         hw_jet3subleading_pt ->Fill(                      jet3subleading_pt , weights)            ;
         hw_jet3subleading_eta->Fill(                      jet3subleading_eta, weights)            ;
         hw_jet3subleading_phi->Fill(                      jet3subleading_phi, weights)            ;
         hw_jet4leading_m     ->Fill(                      jet4leading_m     , weights)        ;
         hw_jet4leading_pt    ->Fill(                      jet4leading_pt    , weights)         ;
         hw_jet4leading_eta   ->Fill(                      jet4leading_eta   , weights)           ;
         hw_jet4leading_phi   ->Fill(                      jet4leading_phi   , weights)           ;
         hw_jet4subleading_m  ->Fill(                      jet4subleading_m  , weights)           ;
         hw_jet4subleading_pt ->Fill(                      jet4subleading_pt , weights)            ;
         hw_jet4subleading_eta->Fill(                      jet4subleading_eta, weights)            ;            
         hw_jet4subleading_phi->Fill(                      jet4subleading_phi, weights)            ;
         hw_jet5leading_m     ->Fill(                      jet5leading_m     , weights)        ;
         hw_jet5leading_pt    ->Fill(                      jet5leading_pt    , weights)         ;
         hw_jet5leading_eta   ->Fill(                      jet5leading_eta   , weights)           ;
         hw_jet5leading_phi   ->Fill(                      jet5leading_phi   , weights)           ;
         hw_jet5subleading_m  ->Fill(                      jet5subleading_m  , weights)           ;
         hw_jet5subleading_pt ->Fill(                      jet5subleading_pt , weights)            ;
         hw_jet5subleading_eta->Fill(                      jet5subleading_eta, weights)            ;
         hw_jet5subleading_phi->Fill(                      jet5subleading_phi, weights)            ;
         hw_jet6leading_m     ->Fill(                      jet6leading_m     , weights)        ;
         hw_jet6leading_pt    ->Fill(                      jet6leading_pt    , weights)         ;
         hw_jet6leading_eta   ->Fill(                      jet6leading_eta   , weights)          ;
         hw_jet6leading_phi   ->Fill(                      jet6leading_phi   , weights)           ;
         hw_jet6subleading_m  ->Fill(                      jet6subleading_m  , weights)           ;
         hw_jet6subleading_pt ->Fill(                      jet6subleading_pt , weights)            ;
         hw_jet6subleading_eta->Fill(                      jet6subleading_eta, weights)            ;
         hw_jet6subleading_phi->Fill(                      jet6subleading_phi, weights)            ;
         hw_jet7leading_m     ->Fill(                      jet7leading_m     , weights)        ;
         hw_jet7leading_pt    ->Fill(                      jet7leading_pt    , weights)         ;
         hw_jet7leading_eta   ->Fill(                      jet7leading_eta   , weights)           ;
         hw_jet7leading_phi   ->Fill(                      jet7leading_phi   , weights)           ;
         hw_jet7subleading_m  ->Fill(                      jet7subleading_m  , weights)           ;
         hw_jet7subleading_pt ->Fill(                      jet7subleading_pt , weights)            ;
         hw_jet7subleading_eta->Fill(                      jet7subleading_eta, weights)            ;
         hw_jet7subleading_phi->Fill(                      jet7subleading_phi, weights)            ;
         hw_jet8leading_m     ->Fill(                      jet8leading_m     , weights)        ;
         hw_jet8leading_pt    ->Fill(                      jet8leading_pt    , weights)         ;
         hw_jet8leading_eta   ->Fill(                      jet8leading_eta   , weights)           ;
         hw_jet8leading_phi   ->Fill(                      jet8leading_phi   , weights)           ;
         hw_jet8subleading_m  ->Fill(                      jet8subleading_m  , weights)           ;
         hw_jet8subleading_pt ->Fill(                      jet8subleading_pt , weights)            ;
         hw_jet8subleading_eta->Fill(                      jet8subleading_eta, weights)            ;
         hw_jet8subleading_phi->Fill(                      jet8subleading_phi, weights)            ;




}


	ofile->cd();
         hleading_m->Write(); 
         hleading_pt->Write();
         hleading_eta->Write();
         hleading_phi->Write();
         hleading_e->Write();
         hsubleading_m->Write();
         hsubleading_pt->Write();
         hsubleading_eta->Write();
         hsubleading_phi->Write();
         hsubleading_e->Write();

         hw_leading_m->Write();
         hw_leading_pt->Write();
         hw_leading_eta->Write();
         hw_leading_phi->Write();
         hw_leading_e->Write();
         hw_subleading_m->Write();
         hw_subleading_pt->Write();
         hw_subleading_eta->Write();
         hw_subleading_phi->Write();
         hw_subleading_e->Write();







         hnumber_jet->Write();
         hw_number_jet->Write();

         hjet1leading_m->Write();
         hjet1leading_pt->Write();
         hjet1leading_eta->Write();
         hjet1leading_phi->Write();
         hjet2leading_m->Write();
         hjet2leading_pt->Write();
         hjet2leading_eta->Write();
         hjet2leading_phi->Write();
         hjet2subleading_m->Write();
         hjet2subleading_pt->Write();
         hjet2subleading_eta->Write();
         hjet2subleading_phi->Write();
         hjet3leading_m->Write();
         hjet3leading_pt->Write();
         hjet3leading_eta->Write();
         hjet3leading_phi->Write();
         hjet3subleading_m->Write();
         hjet3subleading_pt->Write();
         hjet3subleading_eta->Write();
         hjet3subleading_phi->Write();
         hjet4leading_m->Write();
         hjet4leading_pt->Write();
         hjet4leading_eta->Write();
         hjet4leading_phi->Write();
         hjet4subleading_m->Write();
         hjet4subleading_pt->Write();
         hjet4subleading_eta->Write();
         hjet4subleading_phi->Write();
         hjet5leading_m->Write();
         hjet5leading_pt->Write();
         hjet5leading_eta->Write();
         hjet5leading_phi->Write();
         hjet5subleading_m->Write();
         hjet5subleading_pt->Write();
         hjet5subleading_eta->Write();
         hjet5subleading_phi->Write();
         hjet6leading_m->Write();
         hjet6leading_pt->Write();
         hjet6leading_eta->Write();
         hjet6leading_phi->Write();
         hjet6subleading_m->Write();
         hjet6subleading_pt->Write();
         hjet6subleading_eta->Write();
         hjet6subleading_phi->Write();
         hjet7leading_m->Write();
         hjet7leading_pt->Write();
         hjet7leading_eta->Write();
         hjet7leading_phi->Write();
         hjet7subleading_m->Write();
         hjet7subleading_pt->Write();
         hjet7subleading_eta->Write();
         hjet7subleading_phi->Write();
         hjet8leading_m->Write();
         hjet8leading_pt->Write();
         hjet8leading_eta->Write();
         hjet8leading_phi->Write();
         hjet8subleading_m->Write();
         hjet8subleading_pt->Write();
         hjet8subleading_eta->Write();
         hjet8subleading_phi->Write();

         hw_jet1leading_m->Write();
         hw_jet1leading_pt->Write();
         hw_jet1leading_eta->Write();
         hw_jet1leading_phi->Write();
         hw_jet2leading_m->Write();
         hw_jet2leading_pt->Write();
         hw_jet2leading_eta->Write();
         hw_jet2leading_phi->Write();
         hw_jet2subleading_m->Write();
         hw_jet2subleading_pt->Write();
         hw_jet2subleading_eta->Write();
         hw_jet2subleading_phi->Write();
         hw_jet3leading_m->Write();
         hw_jet3leading_pt->Write();
         hw_jet3leading_eta->Write();
         hw_jet3leading_phi->Write();
         hw_jet3subleading_m->Write();
         hw_jet3subleading_pt->Write();
         hw_jet3subleading_eta->Write();
         hw_jet3subleading_phi->Write();
         hw_jet4leading_m->Write();
         hw_jet4leading_pt->Write();
         hw_jet4leading_eta->Write();
         hw_jet4leading_phi->Write();
         hw_jet4subleading_m->Write();
         hw_jet4subleading_pt->Write();
         hw_jet4subleading_eta->Write();
         hw_jet4subleading_phi->Write();
         hw_jet5leading_m->Write();
         hw_jet5leading_pt->Write();
         hw_jet5leading_eta->Write();
         hw_jet5leading_phi->Write();
         hw_jet5subleading_m->Write();
         hw_jet5subleading_pt->Write();
         hw_jet5subleading_eta->Write();
         hw_jet5subleading_phi->Write();
         hw_jet6leading_m->Write();
         hw_jet6leading_pt->Write();
         hw_jet6leading_eta->Write();
         hw_jet6leading_phi->Write();
         hw_jet6subleading_m->Write();
         hw_jet6subleading_pt->Write();
         hw_jet6subleading_eta->Write();
         hw_jet6subleading_phi->Write();
         hw_jet7leading_m->Write();
         hw_jet7leading_pt->Write();
         hw_jet7leading_eta->Write();
         hw_jet7leading_phi->Write();
         hw_jet7subleading_m->Write();
         hw_jet7subleading_pt->Write();
         hw_jet7subleading_eta->Write();
         hw_jet7subleading_phi->Write();
         hw_jet8leading_m->Write();
         hw_jet8leading_pt->Write();
         hw_jet8leading_eta->Write();
         hw_jet8leading_phi->Write();
         hw_jet8subleading_m->Write();
         hw_jet8subleading_pt->Write();
         hw_jet8subleading_eta->Write();
         hw_jet8subleading_phi->Write();

















/////////






delete         hleading_m;
delete         hleading_pt;
delete         hleading_eta;
delete         hleading_phi;
delete         hleading_e;
delete         hsubleading_m;
delete         hsubleading_pt;
delete         hsubleading_eta;
delete         hsubleading_phi;
delete         hsubleading_e;
delete         hw_leading_m;
delete         hw_leading_pt;
delete         hw_leading_eta;
delete         hw_leading_phi;
delete         hw_leading_e;
delete         hw_subleading_m;
delete         hw_subleading_pt;
delete         hw_subleading_eta;
delete         hw_subleading_phi;
delete         hw_subleading_e;







delete         hnumber_jet;
delete         hw_number_jet;
delete         hjet1leading_m;
delete         hjet1leading_pt;
delete         hjet1leading_eta;
delete         hjet1leading_phi;
delete         hjet2leading_m;
delete         hjet2leading_pt;
delete         hjet2leading_eta;
delete         hjet2leading_phi;
delete         hjet2subleading_m;
delete         hjet2subleading_pt;
delete         hjet2subleading_eta;
delete         hjet2subleading_phi;
delete         hjet3leading_m;
delete         hjet3leading_pt;
delete         hjet3leading_eta;
delete         hjet3leading_phi;
delete         hjet3subleading_m;
delete         hjet3subleading_pt;
delete         hjet3subleading_eta;
delete         hjet3subleading_phi;
delete         hjet4leading_m;
delete         hjet4leading_pt;
delete         hjet4leading_eta;
delete         hjet4leading_phi;
delete         hjet4subleading_m;
delete         hjet4subleading_pt;
delete         hjet4subleading_eta;
delete         hjet4subleading_phi;
delete         hjet5leading_m;
delete         hjet5leading_pt;
delete         hjet5leading_eta;
delete         hjet5leading_phi;
delete         hjet5subleading_m;
delete         hjet5subleading_pt;
delete         hjet5subleading_eta;
delete         hjet5subleading_phi;
delete         hjet6leading_m;
delete         hjet6leading_pt;
delete         hjet6leading_eta;
delete         hjet6leading_phi;
delete         hjet6subleading_m;
delete         hjet6subleading_pt;
delete         hjet6subleading_eta;
delete         hjet6subleading_phi;
delete         hjet7leading_m;
delete         hjet7leading_pt;
delete         hjet7leading_eta;
delete         hjet7leading_phi;
delete         hjet7subleading_m;
delete         hjet7subleading_pt;
delete         hjet7subleading_eta;
delete         hjet7subleading_phi;
delete         hjet8leading_m;
delete         hjet8leading_pt;
delete         hjet8leading_eta;
delete         hjet8leading_phi;
delete         hjet8subleading_m;
delete         hjet8subleading_pt;
delete         hjet8subleading_eta;
delete         hjet8subleading_phi;
delete         hw_jet1leading_m;
delete         hw_jet1leading_pt;
delete         hw_jet1leading_eta;
delete         hw_jet1leading_phi;
delete         hw_jet2leading_m;
delete         hw_jet2leading_pt;
delete         hw_jet2leading_eta;
delete         hw_jet2leading_phi;
delete         hw_jet2subleading_m;
delete         hw_jet2subleading_pt;
delete         hw_jet2subleading_eta;
delete         hw_jet2subleading_phi;
delete         hw_jet3leading_m;
delete         hw_jet3leading_pt;
delete         hw_jet3leading_eta;
delete         hw_jet3leading_phi;
delete         hw_jet3subleading_m;
delete         hw_jet3subleading_pt;
delete         hw_jet3subleading_eta;
delete         hw_jet3subleading_phi;
delete         hw_jet4leading_m;
delete         hw_jet4leading_pt;
delete         hw_jet4leading_eta;
delete         hw_jet4leading_phi;
delete         hw_jet4subleading_m;
delete         hw_jet4subleading_pt;
delete         hw_jet4subleading_eta;
delete         hw_jet4subleading_phi;
delete         hw_jet5leading_m;
delete         hw_jet5leading_pt;
delete         hw_jet5leading_eta;
delete         hw_jet5leading_phi;
delete         hw_jet5subleading_m;
delete         hw_jet5subleading_pt;
delete         hw_jet5subleading_eta;
delete         hw_jet5subleading_phi;
delete         hw_jet6leading_m;
delete         hw_jet6leading_pt;
delete         hw_jet6leading_eta;
delete         hw_jet6leading_phi;
delete         hw_jet6subleading_m;
delete         hw_jet6subleading_pt;
delete         hw_jet6subleading_eta;
delete         hw_jet6subleading_phi;
delete         hw_jet7leading_m;
delete         hw_jet7leading_pt;
delete         hw_jet7leading_eta;
delete         hw_jet7leading_phi;
delete         hw_jet7subleading_m;
delete         hw_jet7subleading_pt;
delete         hw_jet7subleading_eta;
delete         hw_jet7subleading_phi;
delete         hw_jet8leading_m;
delete         hw_jet8leading_pt;
delete         hw_jet8leading_eta;
delete         hw_jet8leading_phi;
delete         hw_jet8subleading_m;
delete         hw_jet8subleading_pt;
delete         hw_jet8subleading_eta;
delete         hw_jet8subleading_phi;
delete ofile;
}
