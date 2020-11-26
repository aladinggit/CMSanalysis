//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct  2 11:10:53 2020 by ROOT version 6.22/02
// from TTree ww/ww
// found on file: ww10.root
//////////////////////////////////////////////////////////

#ifndef stwcalculating_h
#define stwcalculating_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class stwcalculating {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        leadingjet_pt;
   Double_t        leadingjet_eta;
   Double_t        leadingjet_phi;
   Double_t        subleadingjet_pt;
   Double_t        subleadingjet_eta;
   Double_t        subleadingjet_phi;
   Double_t        ptll;
   Double_t        mll;
   Double_t        wwm;
   Double_t        wwpt;
   Double_t        startweight;
   Double_t        totalweight;
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
   Double_t        weights;
   vector<double>  *mw4;
   vector<double>  *mw8;
   vector<double>  *mw6;
   vector<double>  *mw16;
   vector<double>  *statusw16;
   vector<double>  *statusw6;
   vector<double>  *statusw8;
   vector<double>  *statusw4;

   // List of branches
   TBranch        *b_leadingjet_pt;   //!
   TBranch        *b_leadingjet_eta;   //!
   TBranch        *b_leadingjet_phi;   //!
   TBranch        *b_subleadingjet_pt;   //!
   TBranch        *b_subleadingjet_eta;   //!
   TBranch        *b_subleadingjet_phi;   //!
   TBranch        *b_ptll;   //!
   TBranch        *b_mll;   //!
   TBranch        *b_wwm;   //!
   TBranch        *b_wwpt;   //!
   TBranch        *b_startweight;   //!
   TBranch        *b_totalweight;   //!
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
   TBranch        *b_weights;   //!
   TBranch        *b_mw4;   //!
   TBranch        *b_mw8;   //!
   TBranch        *b_mw6;   //!
   TBranch        *b_mw16;   //!
   TBranch        *b_statusw16;   //!
   TBranch        *b_statusw6;   //!
   TBranch        *b_statusw8;   //!
   TBranch        *b_statusw4;   //!

   stwcalculating(TTree *tree=0);
   virtual ~stwcalculating();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef stwcalculating_cxx
stwcalculating::stwcalculating(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/user/h/hongyi/ww_data/Powheg/powheg2016.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/user/h/hongyi/ww_data/Powheg/powheg2016.root");
      }
      f->GetObject("ww",tree);

   }
   Init(tree);
}

stwcalculating::~stwcalculating()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t stwcalculating::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t stwcalculating::LoadTree(Long64_t entry)
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

void stwcalculating::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   mw4 = 0;
   mw8 = 0;
   mw6 = 0;
   mw16 = 0;
   statusw16 = 0;
   statusw6 = 0;
   statusw8 = 0;
   statusw4 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("leadingjet_pt", &leadingjet_pt, &b_leadingjet_pt);
   fChain->SetBranchAddress("leadingjet_eta", &leadingjet_eta, &b_leadingjet_eta);
   fChain->SetBranchAddress("leadingjet_phi", &leadingjet_phi, &b_leadingjet_phi);
   fChain->SetBranchAddress("subleadingjet_pt", &subleadingjet_pt, &b_subleadingjet_pt);
   fChain->SetBranchAddress("subleadingjet_eta", &subleadingjet_eta, &b_subleadingjet_eta);
   fChain->SetBranchAddress("subleadingjet_phi", &subleadingjet_phi, &b_subleadingjet_phi);
   fChain->SetBranchAddress("ptll", &ptll, &b_ptll);
   fChain->SetBranchAddress("mll", &mll, &b_mll);
   fChain->SetBranchAddress("wwm", &wwm, &b_wwm);
   fChain->SetBranchAddress("wwpt", &wwpt, &b_wwpt);
   fChain->SetBranchAddress("startweight", &startweight, &b_startweight);
   fChain->SetBranchAddress("totalweight", &totalweight, &b_totalweight);
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
   fChain->SetBranchAddress("weights", &weights, &b_weights);
   fChain->SetBranchAddress("mw4", &mw4, &b_mw4);
   fChain->SetBranchAddress("mw8", &mw8, &b_mw8);
   fChain->SetBranchAddress("mw6", &mw6, &b_mw6);
   fChain->SetBranchAddress("mw16", &mw16, &b_mw16);
   fChain->SetBranchAddress("statusw16", &statusw16, &b_statusw16);
   fChain->SetBranchAddress("statusw6", &statusw6, &b_statusw6);
   fChain->SetBranchAddress("statusw8", &statusw8, &b_statusw8);
   fChain->SetBranchAddress("statusw4", &statusw4, &b_statusw4);
   Notify();
}

Bool_t stwcalculating::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void stwcalculating::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t stwcalculating::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef stwcalculating_cxx
