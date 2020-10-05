//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Sep 18 08:08:18 2020 by ROOT version 6.22/02
// from TTree ww/ww
// found on file: ww7.root
//////////////////////////////////////////////////////////

#ifndef histo_h
#define histo_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class histo {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        leading_m;
   Double_t        leading_pt;
   Double_t        leading_eta;
   Double_t        leading_phi;
   Double_t        leading_e;
   Int_t           number_jet;
   Double_t        subleading_m;
   Double_t        subleading_pt;
   Double_t        subleading_eta;
   Double_t        subleading_phi;
   Double_t        subleading_e;
   Double_t        jet1leading_m;
   Double_t        jet1leading_pt;
   Double_t        jet1leading_eta;
   Double_t        jet1leading_phi;
   Double_t        jet2leading_m;
   Double_t        jet2leading_pt;
   Double_t        jet2leading_eta;
   Double_t        jet2leading_phi;
   Double_t        jet2subleading_m;
   Double_t        jet2subleading_pt;
   Double_t        jet2subleading_eta;
   Double_t        jet2subleading_phi;
   Double_t        jet3leading_m;
   Double_t        jet3leading_pt;
   Double_t        jet3leading_eta;
   Double_t        jet3leading_phi;
   Double_t        jet3subleading_m;
   Double_t        jet3subleading_pt;
   Double_t        jet3subleading_eta;
   Double_t        jet3subleading_phi;
   Double_t        jet4leading_m;
   Double_t        jet4leading_pt;
   Double_t        jet4leading_eta;
   Double_t        jet4leading_phi;
   Double_t        jet4subleading_m;
   Double_t        jet4subleading_pt;
   Double_t        jet4subleading_eta;
   Double_t        jet4subleading_phi;
   Double_t        jet5leading_m;
   Double_t        jet5leading_pt;
   Double_t        jet5leading_eta;
   Double_t        jet5leading_phi;
   Double_t        jet5subleading_m;
   Double_t        jet5subleading_pt;
   Double_t        jet5subleading_eta;
   Double_t        jet5subleading_phi;
   Double_t        jet6leading_m;
   Double_t        jet6leading_pt;
   Double_t        jet6leading_eta;
   Double_t        jet6leading_phi;
   Double_t        jet6subleading_m;
   Double_t        jet6subleading_pt;
   Double_t        jet6subleading_eta;
   Double_t        jet6subleading_phi;
   Double_t        jet7leading_m;
   Double_t        jet7leading_pt;
   Double_t        jet7leading_eta;
   Double_t        jet7leading_phi;
   Double_t        jet7subleading_m;
   Double_t        jet7subleading_pt;
   Double_t        jet7subleading_eta;
   Double_t        jet7subleading_phi;
   Double_t        jet8leading_m;
   Double_t        jet8leading_pt;
   Double_t        jet8leading_eta;
   Double_t        jet8leading_phi;
   Double_t        jet8subleading_m;
   Double_t        jet8subleading_pt;
   Double_t        jet8subleading_eta;
   Double_t        jet8subleading_phi;
   Double_t        weights;

   // List of branches
   TBranch        *b_leading_m;   //!
   TBranch        *b_leading_pt;   //!
   TBranch        *b_leading_eta;   //!
   TBranch        *b_leading_phi;   //!
   TBranch        *b_leading_e;   //!
   TBranch        *b_number_jet;   //!
   TBranch        *b_subleading_m;   //!
   TBranch        *b_subleading_pt;   //!
   TBranch        *b_subleading_eta;   //!
   TBranch        *b_subleading_phi;   //!
   TBranch        *b_subleading_e;   //!
   TBranch        *b_jet1leading_m;   //!
   TBranch        *b_jet1leading_pt;   //!
   TBranch        *b_jet1leading_eta;   //!
   TBranch        *b_jet1leading_phi;   //!
   TBranch        *b_jet2leading_m;   //!
   TBranch        *b_jet2leading_pt;   //!
   TBranch        *b_jet2leading_eta;   //!
   TBranch        *b_jet2leading_phi;   //!
   TBranch        *b_jet2subleading_m;   //!
   TBranch        *b_jet2subleading_pt;   //!
   TBranch        *b_jet2subleading_eta;   //!
   TBranch        *b_jet2subleading_phi;   //!
   TBranch        *b_jet3leading_m;   //!
   TBranch        *b_jet3leading_pt;   //!
   TBranch        *b_jet3leading_eta;   //!
   TBranch        *b_jet3leading_phi;   //!
   TBranch        *b_jet3subleading_m;   //!
   TBranch        *b_jet3subleading_pt;   //!
   TBranch        *b_jet3subleading_eta;   //!
   TBranch        *b_jet3subleading_phi;   //!
   TBranch        *b_jet4leading_m;   //!
   TBranch        *b_jet4leading_pt;   //!
   TBranch        *b_jet4leading_eta;   //!
   TBranch        *b_jet4leading_phi;   //!
   TBranch        *b_jet4subleading_m;   //!
   TBranch        *b_jet4subleading_pt;   //!
   TBranch        *b_jet4subleading_eta;   //!
   TBranch        *b_jet4subleading_phi;   //!
   TBranch        *b_jet5leading_m;   //!
   TBranch        *b_jet5leading_pt;   //!
   TBranch        *b_jet5leading_eta;   //!
   TBranch        *b_jet5leading_phi;   //!
   TBranch        *b_jet5subleading_m;   //!
   TBranch        *b_jet5subleading_pt;   //!
   TBranch        *b_jet5subleading_eta;   //!
   TBranch        *b_jet5subleading_phi;   //!
   TBranch        *b_jet6leading_m;   //!
   TBranch        *b_jet6leading_pt;   //!
   TBranch        *b_jet6leading_eta;   //!
   TBranch        *b_jet6leading_phi;   //!
   TBranch        *b_jet6subleading_m;   //!
   TBranch        *b_jet6subleading_pt;   //!
   TBranch        *b_jet6subleading_eta;   //!
   TBranch        *b_jet6subleading_phi;   //!
   TBranch        *b_jet7leading_m;   //!
   TBranch        *b_jet7leading_pt;   //!
   TBranch        *b_jet7leading_eta;   //!
   TBranch        *b_jet7leading_phi;   //!
   TBranch        *b_jet7subleading_m;   //!
   TBranch        *b_jet7subleading_pt;   //!
   TBranch        *b_jet7subleading_eta;   //!
   TBranch        *b_jet7subleading_phi;   //!
   TBranch        *b_jet8leading_m;   //!
   TBranch        *b_jet8leading_pt;   //!
   TBranch        *b_jet8leading_eta;   //!
   TBranch        *b_jet8leading_phi;   //!
   TBranch        *b_jet8subleading_m;   //!
   TBranch        *b_jet8subleading_pt;   //!
   TBranch        *b_jet8subleading_eta;   //!
   TBranch        *b_jet8subleading_phi;   //!
   TBranch        *b_weights;   //!

   histo(TTree *tree=0);
   virtual ~histo();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef histo_cxx
histo::histo(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ww7.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ww7.root");
      }
      f->GetObject("ww",tree);

   }
   Init(tree);
}

histo::~histo()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t histo::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t histo::LoadTree(Long64_t entry)
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

void histo::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("leading_m", &leading_m, &b_leading_m);
   fChain->SetBranchAddress("leading_pt", &leading_pt, &b_leading_pt);
   fChain->SetBranchAddress("leading_eta", &leading_eta, &b_leading_eta);
   fChain->SetBranchAddress("leading_phi", &leading_phi, &b_leading_phi);
   fChain->SetBranchAddress("leading_e", &leading_e, &b_leading_e);
   fChain->SetBranchAddress("number_jet", &number_jet, &b_number_jet);
   fChain->SetBranchAddress("subleading_m", &subleading_m, &b_subleading_m);
   fChain->SetBranchAddress("subleading_pt", &subleading_pt, &b_subleading_pt);
   fChain->SetBranchAddress("subleading_eta", &subleading_eta, &b_subleading_eta);
   fChain->SetBranchAddress("subleading_phi", &subleading_phi, &b_subleading_phi);
   fChain->SetBranchAddress("subleading_e", &subleading_e, &b_subleading_e);
   fChain->SetBranchAddress("jet1leading_m", &jet1leading_m, &b_jet1leading_m);
   fChain->SetBranchAddress("jet1leading_pt", &jet1leading_pt, &b_jet1leading_pt);
   fChain->SetBranchAddress("jet1leading_eta", &jet1leading_eta, &b_jet1leading_eta);
   fChain->SetBranchAddress("jet1leading_phi", &jet1leading_phi, &b_jet1leading_phi);
   fChain->SetBranchAddress("jet2leading_m", &jet2leading_m, &b_jet2leading_m);
   fChain->SetBranchAddress("jet2leading_pt", &jet2leading_pt, &b_jet2leading_pt);
   fChain->SetBranchAddress("jet2leading_eta", &jet2leading_eta, &b_jet2leading_eta);
   fChain->SetBranchAddress("jet2leading_phi", &jet2leading_phi, &b_jet2leading_phi);
   fChain->SetBranchAddress("jet2subleading_m", &jet2subleading_m, &b_jet2subleading_m);
   fChain->SetBranchAddress("jet2subleading_pt", &jet2subleading_pt, &b_jet2subleading_pt);
   fChain->SetBranchAddress("jet2subleading_eta", &jet2subleading_eta, &b_jet2subleading_eta);
   fChain->SetBranchAddress("jet2subleading_phi", &jet2subleading_phi, &b_jet2subleading_phi);
   fChain->SetBranchAddress("jet3leading_m", &jet3leading_m, &b_jet3leading_m);
   fChain->SetBranchAddress("jet3leading_pt", &jet3leading_pt, &b_jet3leading_pt);
   fChain->SetBranchAddress("jet3leading_eta", &jet3leading_eta, &b_jet3leading_eta);
   fChain->SetBranchAddress("jet3leading_phi", &jet3leading_phi, &b_jet3leading_phi);
   fChain->SetBranchAddress("jet3subleading_m", &jet3subleading_m, &b_jet3subleading_m);
   fChain->SetBranchAddress("jet3subleading_pt", &jet3subleading_pt, &b_jet3subleading_pt);
   fChain->SetBranchAddress("jet3subleading_eta", &jet3subleading_eta, &b_jet3subleading_eta);
   fChain->SetBranchAddress("jet3subleading_phi", &jet3subleading_phi, &b_jet3subleading_phi);
   fChain->SetBranchAddress("jet4leading_m", &jet4leading_m, &b_jet4leading_m);
   fChain->SetBranchAddress("jet4leading_pt", &jet4leading_pt, &b_jet4leading_pt);
   fChain->SetBranchAddress("jet4leading_eta", &jet4leading_eta, &b_jet4leading_eta);
   fChain->SetBranchAddress("jet4leading_phi", &jet4leading_phi, &b_jet4leading_phi);
   fChain->SetBranchAddress("jet4subleading_m", &jet4subleading_m, &b_jet4subleading_m);
   fChain->SetBranchAddress("jet4subleading_pt", &jet4subleading_pt, &b_jet4subleading_pt);
   fChain->SetBranchAddress("jet4subleading_eta", &jet4subleading_eta, &b_jet4subleading_eta);
   fChain->SetBranchAddress("jet4subleading_phi", &jet4subleading_phi, &b_jet4subleading_phi);
   fChain->SetBranchAddress("jet5leading_m", &jet5leading_m, &b_jet5leading_m);
   fChain->SetBranchAddress("jet5leading_pt", &jet5leading_pt, &b_jet5leading_pt);
   fChain->SetBranchAddress("jet5leading_eta", &jet5leading_eta, &b_jet5leading_eta);
   fChain->SetBranchAddress("jet5leading_phi", &jet5leading_phi, &b_jet5leading_phi);
   fChain->SetBranchAddress("jet5subleading_m", &jet5subleading_m, &b_jet5subleading_m);
   fChain->SetBranchAddress("jet5subleading_pt", &jet5subleading_pt, &b_jet5subleading_pt);
   fChain->SetBranchAddress("jet5subleading_eta", &jet5subleading_eta, &b_jet5subleading_eta);
   fChain->SetBranchAddress("jet5subleading_phi", &jet5subleading_phi, &b_jet5subleading_phi);
   fChain->SetBranchAddress("jet6leading_m", &jet6leading_m, &b_jet6leading_m);
   fChain->SetBranchAddress("jet6leading_pt", &jet6leading_pt, &b_jet6leading_pt);
   fChain->SetBranchAddress("jet6leading_eta", &jet6leading_eta, &b_jet6leading_eta);
   fChain->SetBranchAddress("jet6leading_phi", &jet6leading_phi, &b_jet6leading_phi);
   fChain->SetBranchAddress("jet6subleading_m", &jet6subleading_m, &b_jet6subleading_m);
   fChain->SetBranchAddress("jet6subleading_pt", &jet6subleading_pt, &b_jet6subleading_pt);
   fChain->SetBranchAddress("jet6subleading_eta", &jet6subleading_eta, &b_jet6subleading_eta);
   fChain->SetBranchAddress("jet6subleading_phi", &jet6subleading_phi, &b_jet6subleading_phi);
   fChain->SetBranchAddress("jet7leading_m", &jet7leading_m, &b_jet7leading_m);
   fChain->SetBranchAddress("jet7leading_pt", &jet7leading_pt, &b_jet7leading_pt);
   fChain->SetBranchAddress("jet7leading_eta", &jet7leading_eta, &b_jet7leading_eta);
   fChain->SetBranchAddress("jet7leading_phi", &jet7leading_phi, &b_jet7leading_phi);
   fChain->SetBranchAddress("jet7subleading_m", &jet7subleading_m, &b_jet7subleading_m);
   fChain->SetBranchAddress("jet7subleading_pt", &jet7subleading_pt, &b_jet7subleading_pt);
   fChain->SetBranchAddress("jet7subleading_eta", &jet7subleading_eta, &b_jet7subleading_eta);
   fChain->SetBranchAddress("jet7subleading_phi", &jet7subleading_phi, &b_jet7subleading_phi);
   fChain->SetBranchAddress("jet8leading_m", &jet8leading_m, &b_jet8leading_m);
   fChain->SetBranchAddress("jet8leading_pt", &jet8leading_pt, &b_jet8leading_pt);
   fChain->SetBranchAddress("jet8leading_eta", &jet8leading_eta, &b_jet8leading_eta);
   fChain->SetBranchAddress("jet8leading_phi", &jet8leading_phi, &b_jet8leading_phi);
   fChain->SetBranchAddress("jet8subleading_m", &jet8subleading_m, &b_jet8subleading_m);
   fChain->SetBranchAddress("jet8subleading_pt", &jet8subleading_pt, &b_jet8subleading_pt);
   fChain->SetBranchAddress("jet8subleading_eta", &jet8subleading_eta, &b_jet8subleading_eta);
   fChain->SetBranchAddress("jet8subleading_phi", &jet8subleading_phi, &b_jet8subleading_phi);
   fChain->SetBranchAddress("weights", &weights, &b_weights);
   Notify();
}

Bool_t histo::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void histo::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t histo::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef histo_cxx
