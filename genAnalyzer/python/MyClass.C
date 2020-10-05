#define MyClass_cxx
#include "MyClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <math.h>
#include <LorentzVector.h>
void MyClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MyClass.C
//      root> MyClass t
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
	vector<double> ele_m;
	vector<double> ele_pt;
	vector<double>ele_eta;
	vector<double> ele_phi;
	vector<double> ele_e;
	vector<double> mu_m;
	vector<double> mu_pt;
	vector<double> mu_eta;
	vector<double> mu_phi;
	vector<double> mu_e;
	//vector<double> jet_pt;
	//vector<double> jet_mass;
	//vector<double> jet_eta;
	//vector<double> jet_phi;
	//vector<int> njet;
	
	ele_m.clean();
	ele_pt.clean();
	ele_eta.clean();
	ele_phi.clean();
	mu_m.clean();
	mu_pt.clean();
	mu_eta.clean();
	mu_phi.clean();
	//jet_pt.clean();
	//jet_mass.clean();
	//jet_eta.clean();
	//jet_phi.clean();
        //njet.clean();
        
        
        
        
        
        





 	TFILE ofile("WW.root", "recreate");
	TTree* TreeWW  = new TTree("ww", "ww");
	TH1D *njet = new TH1D("njet", 0, 10);
        TH1D *jetmass = new TH1D("jetmass", 0, 150, 20);
        TH1D *jeteta = new TH1D("jeteta", 0, 5);
        TH1D *jetphi = new TH1D("jetphi", 0, 8);
        TH1D *jetpt = new TH1D("jetpt", 30, 100, 20);
	TH1D *e_m = new TH1D("e_m", 0, 1);
        TH1D *e_eta = new TH1D("e_eta", 0, 3);
        TH1D *e_phi = new TH1D("e_phi", 0, 8);
        TH1D *e_pt = new TH1D("e_pt", 10, 100, 20);
        TH1D *e_e = new TH1D("e_e", 0, 50);
        TH1D *muon_m = new TH1D("muon_m", 0, 80);
        TH1D *muon_eta = new TH1D("muon_eta", 0, 2.4);
        TH1D *muon_phi = new TH1D("muon_phi", 0, 8);
        TH1D *muon_pt = new TH1D("muon_pt", 10, 100, 20);
        TH1D *muon_e = new TH1D("muon_e", 0, 80);

	ww ->Branch("ele_m", &ele_m);
        ww ->Branch("ele_pt", &ele_pt);
        ww ->Branch("ele_eta", &ele_eta);
        ww ->Branch("ele_phi", &ele_phi);
        ww ->Branch("ele_e", &ele_e);
        ww ->Branch("mu_m", &mu_m);
        ww ->Branch("mu_pt", &mu_pt);
        ww ->Branch("mu_eta", &mu_eta);
        ww ->Branch("mu_phi", &mu_phi);
        ww ->Branch("mu_e", &mu_e);
        ww ->Branch("jet_m", &jet_m);
        ww ->Branch("jet_pt", &jet_pt);
        ww ->Branch("jet_eta", &jet_eta);
        ww ->Branch("jet_phi", &jet_phi);
	ww ->Branch("njet", &njet);


   if (fChain == 0) return;
	LorentzVector lvector;
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
	
      // Fill the leptons first
      // if this lepton comes from W(Though actually this is definete because this restriction is added in the analysis code)
	if (genLeptMother.size == 2){
	
//		for (int i = 0; i < genLeptMother.size();i++){
	
		if (genLeptMother.at(0) == 24 && genLeptId.at(0) == 11){
// 	leading pt/sub-leading pt/electron eta cut/muon eta cut
			if(((genLeptPt.at(0) > 25 && genLeptPt.at(1) > 15) || (genLeptPt.at(0)> 15 && genLeptPt.at(1) > 25)) && (genLeptEta.at(0)<2.5 && genLeptEta.at(1) <2.4){ 
				ele_m.push(genLeptM.at(0));
				ele_pt.push(genLeptPt.at(0));
				ele_eta.push(genLeptEta.at(0));
				ele_phi.push(genLeptPhi.at(0));
				lvector.SetPhi(ele_phi);
				lvector.SetPt(ele_pt);
				lvector.SetM(ele_m);
				lvector.SetEta(ele_eta);
				ele_e.push(lvector.E());
                                mu_m.push(genLeptM.at(1));
                                mu_pt.push(genLeptPt).at(1);
                                mu_eta.push(genLeptEta.at(1));
                                mu_phi.push(genLeptPhi.at(1));
                                lvector.SetPhi(ele_phi);
                                lvector.SetPt(ele_pt);
                                lvector.SetM(ele_m);
                                lvector.SetEta(ele_eta);
                                mu_e.push(lvector.E());
	

}
	}			



		if (genNuPdgId.at(0) = 13 && genNuMother.at(0) ==24) {
                        if(((genLeptPt.at(0) > 25 && genLeptPt.at(1) > 15) || (genLeptPt.at(0)> 15 && genLeptPt.at(1) > 25)) && (genLeptEta.at(1)<2.5 && genLeptEta.at(0) <2.4){					
	                        mu_m.push(genLeptM.at(0));
	                        mu_pt.push(genLeptPt).at(0);
	                        mu_eta.push(genLeptEta.at(0));
	                        mu_phi.push(genLeptPhi.at(0));
	                        lvector.SetPhi(ele_phi);
	                        lvector.SetPt(ele_pt);
	                        lvector.SetM(ele_m);
	                        lvector.SetEta(ele_eta);
	                        mu_e.push(lvector.E());
                                ele_m.push(genLeptM.at(1));
                                ele_pt.push(genLeptPt.at(1));
                                ele_eta.push(genLeptEta.at(1));
                                ele_phi.push(genLeptPhi.at(1));
                                lvector.SetPhi(ele_phi);
                                lvector.SetPt(ele_pt);
                                lvector.SetM(ele_m);
                                lvector.SetEta(ele_eta);
                                ele_e.push(lvector.E());


	
	}
	}
}	

//Filling histogram


	for (int j = 0; j < genJetPt.size(); j++){
		int n_jet = 0;
		if (genJetPt.at(j) > 30 && genJetEta.at(j) < 5){
			jetmass -> Fill(genJetMass.at(j));
			jeteta -> Fill(genJetEta.at(j));
			jetphi -> Fill(genJetPhi.at(j));
			jetpt -> Fill(genjetPt.at(j));
			n_jet ++;
}		
	
}	
	njet -> Fill(n_jet);

	ww -> Fill();

      // Filling LHE first









	}

ofile.cd();
jetmass -> Write();
jeteta -> Write();
jetphi -> Write();
jetpt -> Write();
njet -> Write();
delete jetmass;
delete jeteta;
delete jetphi;
delete jetpt;
delete njet;
}
