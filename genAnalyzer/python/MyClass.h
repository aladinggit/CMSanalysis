//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 25 17:08:03 2020 by ROOT version 6.22/00
// from TTree tree/tree
// found on file: HWW_125GeV.root
//////////////////////////////////////////////////////////

#ifndef MyClass_h
#define MyClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class MyClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<double>  *Event;
   vector<double>  *Run;
   vector<int>     *genNuPdgId;
   Int_t           ngenNu;
   vector<double>  *genNuPt;
   vector<double>  *genNuEta;
   vector<double>  *genNuPhi;
   vector<double>  *genNuQ;
   vector<int>     *genNustatus;
   vector<int>     *genNuMother;
   vector<int>     *genNuGrandMother;
   Double_t        startWeight;
   Double_t        numWeight;
   Double_t        denomWeight;
   Double_t        finalWeight;
   vector<double>  *baseWeight;
   Double_t        LHEnominalweight;
   vector<double>  *LHEweights;
   Int_t           ngenW;
   vector<double>  *genWPt;
   vector<double>  *genWEta;
   vector<double>  *genWPhi;
   vector<double>  *genWMass;
   vector<double>  *genWQ;
   vector<int>     *genWstatus;
   vector<int>     *genWMother;
   Int_t           ngenH;
   vector<double>  *genHPt;
   vector<double>  *genHEta;
   vector<double>  *genHPhi;
   vector<double>  *genHMass;
   vector<double>  *genHQ;
   vector<int>     *genHstatus;
   vector<int>     *genHdaughter;
   Int_t           ngenLept;
   vector<double>  *genLeptPt;
   vector<double>  *genLeptEta;
   vector<double>  *genLeptPhi;
   vector<double>  *genLeptM;
   vector<int>     *genLeptQ;
   vector<int>     *genLeptStatus;
   vector<int>     *genLeptId;
   vector<double>  *genLeptMother;
   vector<int>     *genLeptGrandMother;
   vector<double>  *genJetPt;
   vector<double>  *genJetEta;
   vector<double>  *genJetPhi;
   vector<double>  *genJetMass;
   Int_t           ngenJet;
   vector<int>     *ID_of_weights_NNLOPS;

   // List of branches
   TBranch        *b_Event;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_genNuPdgId;   //!
   TBranch        *b_ngenNu;   //!
   TBranch        *b_genNuPt;   //!
   TBranch        *b_genNuEta;   //!
   TBranch        *b_genNuPhi;   //!
   TBranch        *b_genNuQ;   //!
   TBranch        *b_genNustatus;   //!
   TBranch        *b_genNuMother;   //!
   TBranch        *b_genNuGrandMother;   //!
   TBranch        *b_startWeight;   //!
   TBranch        *b_numWeight;   //!
   TBranch        *b_denomWeight;   //!
   TBranch        *b_finalWeight;   //!
   TBranch        *b_baseWeight;   //!
   TBranch        *b_LHEnominalweight;   //!
   TBranch        *b_LHEweights;   //!
   TBranch        *b_ngenW;   //!
   TBranch        *b_genWPt;   //!
   TBranch        *b_genWEta;   //!
   TBranch        *b_genWPhi;   //!
   TBranch        *b_genWMass;   //!
   TBranch        *b_genWQ;   //!
   TBranch        *b_genWstatus;   //!
   TBranch        *b_genWMother;   //!
   TBranch        *b_ngenH;   //!
   TBranch        *b_genHPt;   //!
   TBranch        *b_genHEta;   //!
   TBranch        *b_genHPhi;   //!
   TBranch        *b_genHMass;   //!
   TBranch        *b_genHQ;   //!
   TBranch        *b_genHstatus;   //!
   TBranch        *b_genHdaughter;   //!
   TBranch        *b_ngenLept;   //!
   TBranch        *b_genLeptPt;   //!
   TBranch        *b_genLeptEta;   //!
   TBranch        *b_genLeptPhi;   //!
   TBranch        *b_genLeptM;   //!
   TBranch        *b_genLeptQ;   //!
   TBranch        *b_genLeptStatus;   //!
   TBranch        *b_genLeptId;   //!
   TBranch        *b_genLeptMother;   //!
   TBranch        *b_genLeptGrandMother;   //!
   TBranch        *b_genJetPt;   //!
   TBranch        *b_genJetEta;   //!
   TBranch        *b_genJetPhi;   //!
   TBranch        *b_genJetMass;   //!
   TBranch        *b_ngenJet;   //!
   TBranch        *b_ID_of_weights_NNLOPS;   //!

   MyClass(TTree *tree=0);
   virtual ~MyClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MyClass_cxx
MyClass::MyClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("HWW_125GeV.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("HWW_125GeV.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

MyClass::~MyClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MyClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyClass::LoadTree(Long64_t entry)
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

void MyClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Event = 0;
   Run = 0;
   genNuPdgId = 0;
   genNuPt = 0;
   genNuEta = 0;
   genNuPhi = 0;
   genNuQ = 0;
   genNustatus = 0;
   genNuMother = 0;
   genNuGrandMother = 0;
   baseWeight = 0;
   LHEweights = 0;
   genWPt = 0;
   genWEta = 0;
   genWPhi = 0;
   genWMass = 0;
   genWQ = 0;
   genWstatus = 0;
   genWMother = 0;
   genHPt = 0;
   genHEta = 0;
   genHPhi = 0;
   genHMass = 0;
   genHQ = 0;
   genHstatus = 0;
   genHdaughter = 0;
   genLeptPt = 0;
   genLeptEta = 0;
   genLeptPhi = 0;
   genLeptM = 0;
   genLeptQ = 0;
   genLeptStatus = 0;
   genLeptId = 0;
   genLeptMother = 0;
   genLeptGrandMother = 0;
   genJetPt = 0;
   genJetEta = 0;
   genJetPhi = 0;
   genJetMass = 0;
   ID_of_weights_NNLOPS = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event, &b_Event);
   fChain->SetBranchAddress("Run", &Run, &b_Run);
   fChain->SetBranchAddress("genNuPdgId", &genNuPdgId, &b_genNuPdgId);
   fChain->SetBranchAddress("ngenNu", &ngenNu, &b_ngenNu);
   fChain->SetBranchAddress("genNuPt", &genNuPt, &b_genNuPt);
   fChain->SetBranchAddress("genNuEta", &genNuEta, &b_genNuEta);
   fChain->SetBranchAddress("genNuPhi", &genNuPhi, &b_genNuPhi);
   fChain->SetBranchAddress("genNuQ", &genNuQ, &b_genNuQ);
   fChain->SetBranchAddress("genNustatus", &genNustatus, &b_genNustatus);
   fChain->SetBranchAddress("genNuMother", &genNuMother, &b_genNuMother);
   fChain->SetBranchAddress("genNuGrandMother", &genNuGrandMother, &b_genNuGrandMother);
   fChain->SetBranchAddress("startWeight", &startWeight, &b_startWeight);
   fChain->SetBranchAddress("numWeight", &numWeight, &b_numWeight);
   fChain->SetBranchAddress("denomWeight", &denomWeight, &b_denomWeight);
   fChain->SetBranchAddress("finalWeight", &finalWeight, &b_finalWeight);
   fChain->SetBranchAddress("baseWeight", &baseWeight, &b_baseWeight);
   fChain->SetBranchAddress("LHEnominalweight", &LHEnominalweight, &b_LHEnominalweight);
   fChain->SetBranchAddress("LHEweights", &LHEweights, &b_LHEweights);
   fChain->SetBranchAddress("ngenW", &ngenW, &b_ngenW);
   fChain->SetBranchAddress("genWPt", &genWPt, &b_genWPt);
   fChain->SetBranchAddress("genWEta", &genWEta, &b_genWEta);
   fChain->SetBranchAddress("genWPhi", &genWPhi, &b_genWPhi);
   fChain->SetBranchAddress("genWMass", &genWMass, &b_genWMass);
   fChain->SetBranchAddress("genWQ", &genWQ, &b_genWQ);
   fChain->SetBranchAddress("genWstatus", &genWstatus, &b_genWstatus);
   fChain->SetBranchAddress("genWMother", &genWMother, &b_genWMother);
   fChain->SetBranchAddress("ngenH", &ngenH, &b_ngenH);
   fChain->SetBranchAddress("genHPt", &genHPt, &b_genHPt);
   fChain->SetBranchAddress("genHEta", &genHEta, &b_genHEta);
   fChain->SetBranchAddress("genHPhi", &genHPhi, &b_genHPhi);
   fChain->SetBranchAddress("genHMass", &genHMass, &b_genHMass);
   fChain->SetBranchAddress("genHQ", &genHQ, &b_genHQ);
   fChain->SetBranchAddress("genHstatus", &genHstatus, &b_genHstatus);
   fChain->SetBranchAddress("genHdaughter", &genHdaughter, &b_genHdaughter);
   fChain->SetBranchAddress("ngenLept", &ngenLept, &b_ngenLept);
   fChain->SetBranchAddress("genLeptPt", &genLeptPt, &b_genLeptPt);
   fChain->SetBranchAddress("genLeptEta", &genLeptEta, &b_genLeptEta);
   fChain->SetBranchAddress("genLeptPhi", &genLeptPhi, &b_genLeptPhi);
   fChain->SetBranchAddress("genLeptM", &genLeptM, &b_genLeptM);
   fChain->SetBranchAddress("genLeptQ", &genLeptQ, &b_genLeptQ);
   fChain->SetBranchAddress("genLeptStatus", &genLeptStatus, &b_genLeptStatus);
   fChain->SetBranchAddress("genLeptId", &genLeptId, &b_genLeptId);
   fChain->SetBranchAddress("genLeptMother", &genLeptMother, &b_genLeptMother);
   fChain->SetBranchAddress("genLeptGrandMother", &genLeptGrandMother, &b_genLeptGrandMother);
   fChain->SetBranchAddress("genJetPt", &genJetPt, &b_genJetPt);
   fChain->SetBranchAddress("genJetEta", &genJetEta, &b_genJetEta);
   fChain->SetBranchAddress("genJetPhi", &genJetPhi, &b_genJetPhi);
   fChain->SetBranchAddress("genJetMass", &genJetMass, &b_genJetMass);
   fChain->SetBranchAddress("ngenJet", &ngenJet, &b_ngenJet);
   fChain->SetBranchAddress("ID_of_weights_NNLOPS", &ID_of_weights_NNLOPS, &b_ID_of_weights_NNLOPS);
   Notify();
}

Bool_t MyClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MyClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyClass_cxx
