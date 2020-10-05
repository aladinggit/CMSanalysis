#define ana_cxx
#include "ana.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <iostream>

void ana::Loop()
{
//   In a ROOT session, you can do:
//      root> .L ana.C
//      root> ana t
//      root> t.GetEntry(12); // Fill t ->ata members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note t->at the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert s->atements like:
// METHOD1:
//    fChain->SetBranchS->atus("*",0);  // disable all branches
//    fChain->SetBranchS->atus("branchname",1);  // acti->ate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
        vector<double> ele_m;
        vector<double> ele_pt;
        vector<double> ele_eta;
        vector<double> ele_phi;
        vector<double> ele_e;

        vector<double> nele_m;
        vector<double> nele_pt;
        vector<double> nele_eta;
        vector<double> nele_phi;
        vector<double> nele_e;

        vector<double> mu_m;
        vector<double> mu_pt;
        vector<double> mu_eta;
        vector<double> mu_phi;
        vector<double> mu_e;

        vector<double> nmu_m;
        vector<double> nmu_pt;
        vector<double> nmu_eta;
        vector<double> nmu_phi;
        vector<double> nmu_e;
        vector<double> jet_pt;
        vector<double> jet_m;
        vector<double> jet_eta;
        vector<double> jet_phi;
 //       vector<int> jetn;
        ele_m.clear();
        ele_pt.clear();
        ele_eta.clear();
        ele_phi.clear();
	ele_e.clear();
	mu_e.clear();
        mu_m.clear();
        mu_pt.clear();
        mu_eta.clear();
        mu_phi.clear();

        nele_m.clear();
        nele_pt.clear();
        nele_eta.clear();
        nele_phi.clear();
        nele_e.clear();
        nmu_e.clear();
        nmu_m.clear();
        nmu_pt.clear();
        nmu_eta.clear();
        nmu_phi.clear();

        jet_pt.clear();
        jet_m.clear();
        jet_eta.clear();
        jet_phi.clear();
//        jetn.clear();


//	TFile *ofile = new TFile("ww.root", "recreate");
//        TFile ofile("ww.root", "recreate");
        TFile *ofile = new TFile("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww1.root", "recreate");
	ofile->cd();
        TTree* ww  = new TTree("ww", "ww");
        TH1D *njet = new TH1D("njet","",  10, 0, 10);
        TH1D *jetmass = new TH1D("jetmass", "",  15, 0, 150);
        TH1D *jeteta = new TH1D("jeteta", "", 10, 0, 5);
        TH1D *jetphi = new TH1D("jetphi", "", 10, 0, 8);
        TH1D *jetpt = new TH1D("jetpt", "", 20, 20, 100);
        TH1D *e_m = new TH1D("e_m", "", 10, 0.1, 1);
        TH1D *e_eta = new TH1D("e_eta", "", 10, 0, 3);
        TH1D *e_phi = new TH1D("e_phi", "", 10, 0, 8);
        TH1D *e_pt = new TH1D("e_pt", "", 20, 10, 100);
        TH1D *e_e = new TH1D("e_e", "", 10, 0, 50);
        TH1D *muon_m = new TH1D("muon_m", "", 20, 0, 80);
        TH1D *muon_eta = new TH1D("muon_eta", "", 10, 0, 2.5);
        TH1D *muon_phi = new TH1D("muon_phi", "", 10, 0, 8);
        TH1D *muon_pt = new TH1D("muon_pt", "", 20, 10, 100);
        TH1D *muon_e = new TH1D("muon_e", "", 10, 0, 80);

        TH1D *ne_m = new TH1D("ne_m", "", 10, 0.1, 1);
        TH1D *ne_eta = new TH1D("ne_eta", "", 10, 0, 3);
        TH1D *ne_phi = new TH1D("ne_phi", "", 10, 0, 8);
        TH1D *ne_pt = new TH1D("ne_pt", "", 20, 10, 100);
        TH1D *ne_e = new TH1D("ne_e", "", 10, 0, 50);
        TH1D *nmuon_m = new TH1D("nmuon_m", "", 20, 0, 80);
        TH1D *nmuon_eta = new TH1D("nmuon_eta", "", 10, 0, 2.5);
        TH1D *nmuon_phi = new TH1D("nmuon_phi", "", 10, 0, 8);
        TH1D *nmuon_pt = new TH1D("nmuon_pt", "", 20, 10, 100);
        TH1D *nmuon_e = new TH1D("nmuon_e", "", 10, 0, 80);



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

        ww ->Branch("nele_m", &nele_m);
        ww ->Branch("nele_pt", &nele_pt);
        ww ->Branch("nele_eta", &nele_eta);
        ww ->Branch("nele_phi", &nele_phi);
        ww ->Branch("nele_e", &nele_e);
        ww ->Branch("nmu_m", &nmu_m);
        ww ->Branch("nmu_pt", &nmu_pt);
        ww ->Branch("nmu_eta", &nmu_eta);
        ww ->Branch("nmu_phi", &nmu_phi);
        ww ->Branch("nmu_e", &nmu_e);

        ww ->Branch("jet_m", &jet_m);
        ww ->Branch("jet_pt", &jet_pt);
        ww ->Branch("jet_eta", &jet_eta);
        ww ->Branch("jet_phi", &jet_phi);
        ww ->Branch("njet", &njet);




   if (fChain == 0) return;
        TLorentzVector levector, lmuvector;
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      // Fill the leptons first
      // if this lepton comes from W(Though actually this is definete because this restriction is added in the analysis code)

	if (jentry > 1000) break;
//checking the weights
	double weights;
	for(int k =0; k < ID_of_weights_NNLOPS->size(); k++){
		if (ID_of_weights_NNLOPS->at(k) == 1001){
		weights	= LHEweights->at(k);


}

}



//	std::cout << genLeptMother->size() << std::cout;
//	if (1 < 2){
	if (genLeptMother->size() == 2){
//    	std::cout<< "it happens" << std::endl; 
//	std::cout << genLeptMother->at(0) << genLeptId->at(0) << genLeptId->at(1) <<std::endl;     
 	       if (genLeptId->at(0) == 11 && genLeptId->at(1) == -13){
//      leading pt/sub-leading pt/electron eta cut/muon eta cut
                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(0)<2.5 && genLeptEta->at(1) <2.4)){
	std::cout << "it happens 1st time" << std::endl;
                                ele_m.push_back(genLeptM->at(0));
                                ele_pt.push_back(genLeptPt->at(0));
                                ele_eta.push_back(genLeptEta->at(0));
                                ele_phi.push_back(genLeptPhi->at(0));

				levector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));

                               // levector.SetPhi(genLeptPhi->at(0));
                               // levector.SetPt(genLeptPt->at(0));
                               // levector.SetM(genLeptM->at(0));
                               // levector.SetEta(genLeptEta->at(0));
                                ele_e.push_back(levector.E());
                                nmu_m.push_back(genLeptM->at(1));
                                nmu_pt.push_back(genLeptPt->at(1));
                                nmu_eta.push_back(genLeptEta->at(1));
                                nmu_phi.push_back(genLeptPhi->at(1));

				lmuvector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));
                                //lmuvector.SetPhi(genLeptPhi->at(1));
                                //lmuvector.SetPt(genLeptPt->at(1));
                                //lmuvector.SetM((genLeptM->at(1));
                                //lmuvector.SetEta(genLeptEta->at(1));
                                nmu_e.push_back(lmuvector.E());

				e_m->Fill(genLeptM->at(0), weights);
                                e_eta->Fill(genLeptEta->at(0), weights);
                                e_phi->Fill(genLeptPhi->at(0), weights);
                                e_pt->Fill(genLeptPt->at(0), weights);
                                e_e->Fill(levector.E(), weights);

                                nmuon_m->Fill(genLeptM->at(1), weights);
                                nmuon_eta->Fill(genLeptEta->at(1), weights);
                                nmuon_phi->Fill(genLeptPhi->at(1), weights);
                                nmuon_pt->Fill(genLeptPt->at(1), weights);
                                nmuon_e->Fill(lmuvector.E(), weights);

}
        }



                if (genNuPdgId->at(0) == 13  && genLeptId->at(1) ==-11) {
                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(1)<2.5 && genLeptEta->at(0) <2.4)){
        std::cout << "it happens 2nd time" << std::endl;
                                mu_m.push_back(genLeptM->at(0));
                                mu_pt.push_back(genLeptPt->at(0));
                                mu_eta.push_back(genLeptEta->at(0));
                                mu_phi.push_back(genLeptPhi->at(0));

                                lmuvector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));

                                //lmuvector.SetPhi(genLeptPhi->at(0));
                                //lmuvector.SetPt(genLeptPt->at(0));
                                //lmuvector.SetM(genLeptM->at(0));
                                //lmuvector.SetEta(genLeptEta->at(0));
                                mu_e.push_back(lmuvector.E());
                                
				nele_m.push_back(genLeptM->at(1));
                                nele_pt.push_back(genLeptPt->at(1));
                                nele_eta.push_back(genLeptEta->at(1));
                                nele_phi.push_back(genLeptPhi->at(1));

                                levector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));

                                //levector.SetPhi(genLeptPhi->at(1));
                                //levector.SetPt(genLeptPt->at(1));
                                //levector.SetM((genLeptM->at(1));
                                //levector.SetEta(genLeptEta->at(1));
                                nele_e.push_back(levector.E());

                                muon_m->Fill(genLeptM->at(0), weights);
                                muon_eta->Fill(genLeptEta->at(0), weights);
                                muon_phi->Fill(genLeptPhi->at(0), weights);
                                muon_pt->Fill(genLeptPt->at(0), weights);
                                muon_e->Fill(lmuvector.E(), weights);

                                ne_m->Fill(genLeptM->at(1), weights);
                                ne_eta->Fill(genLeptEta->at(1), weights);
                                ne_phi->Fill(genLeptPhi->at(1), weights);
                                ne_pt->Fill(genLeptPt->at(1), weights);
                                ne_e->Fill(levector.E(), weights);




        }
        }

               if (genLeptId->at(0) == -11 && genLeptId->at(1) == 13){
                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(0)<2.5 && genLeptEta->at(1) <2.4)){
        std::cout << "it happens 3rd time" << std::endl;
                                nele_m.push_back(genLeptM->at(0));
                                nele_pt.push_back(genLeptPt->at(0));
                                nele_eta.push_back(genLeptEta->at(0));
                                nele_phi.push_back(genLeptPhi->at(0));

                                levector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));
                                nele_e.push_back(levector.E());
                                mu_m.push_back(genLeptM->at(1));
                                mu_pt.push_back(genLeptPt->at(1));
                                mu_eta.push_back(genLeptEta->at(1));
                                mu_phi.push_back(genLeptPhi->at(1));

                                lmuvector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));

                                mu_e.push_back(lmuvector.E());

                                ne_m->Fill(genLeptM->at(0), weights);
                                ne_eta->Fill(genLeptEta->at(0), weights);
                                ne_phi->Fill(genLeptPhi->at(0), weights);
                                ne_pt->Fill(genLeptPt->at(0), weights);
                                ne_e->Fill(levector.E(), weights);

                                muon_m->Fill(genLeptM->at(1), weights);
                                muon_eta->Fill(genLeptEta->at(1), weights);
                                muon_phi->Fill(genLeptPhi->at(1), weights);
                                muon_pt->Fill(genLeptPt->at(1), weights);
                                muon_e->Fill(lmuvector.E(), weights);

}
        }



                if (genNuPdgId->at(0) == -13  && genLeptId->at(1) ==11) {
                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(1)<2.5 && genLeptEta->at(0) <2.4)){
        std::cout << "it happens 4th time" << std::endl;
                                nmu_m.push_back(genLeptM->at(0));
                                nmu_pt.push_back(genLeptPt->at(0));
                                nmu_eta.push_back(genLeptEta->at(0));
                                nmu_phi.push_back(genLeptPhi->at(0));

                                lmuvector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));

                                nmu_e.push_back(lmuvector.E());

                                ele_m.push_back(genLeptM->at(1));
                                ele_pt.push_back(genLeptPt->at(1));
                                ele_eta.push_back(genLeptEta->at(1));
                                ele_phi.push_back(genLeptPhi->at(1));

                                levector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));

                                ele_e.push_back(levector.E());

                                nmuon_m->Fill(genLeptM->at(0), weights);
                                nmuon_eta->Fill(genLeptEta->at(0), weights);
                                nmuon_phi->Fill(genLeptPhi->at(0), weights);
                                nmuon_pt->Fill(genLeptPt->at(0), weights);
                                nmuon_e->Fill(lmuvector.E(), weights);

                                e_m->Fill(genLeptM->at(1), weights);
                                e_eta->Fill(genLeptEta->at(1), weights);
                                e_phi->Fill(genLeptPhi->at(1), weights);
                                e_pt->Fill(genLeptPt->at(1), weights);
                                e_e->Fill(levector.E(), weights);




        }
        }

}
 //Filling histogram
int n_jet = 0;
        for (int j = 0; j < genJetPt->size(); j++){
                if (genJetPt->at(j) > 30 && genJetEta->at(j) < 5){
                        jetmass->Fill(genJetMass->at(j), weights);
                        jeteta->Fill(genJetEta->at(j), weights);
                        jetphi->Fill(genJetPhi->at(j), weights);
                        jetpt->Fill(genJetPt->at(j), weights);
                        n_jet ++;
}

}
        njet->Fill(n_jet, weights);
	//std::cout <<weights<< std::endl;
        ww->Fill();
        }

ofile->cd();
ww -> Write();
muon_m -> Write();
muon_eta-> Write();
muon_phi-> Write();
muon_pt -> Write();
muon_e  -> Write();
e_m -> Write();
e_eta -> Write();
e_phi -> Write();
e_pt  -> Write();
e_e   -> Write();

nmuon_m -> Write();
nmuon_eta-> Write();
nmuon_phi-> Write();
nmuon_pt -> Write();
nmuon_e  -> Write();
ne_m -> Write();
ne_eta -> Write();
ne_phi -> Write();
ne_pt  -> Write();
ne_e   -> Write();

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
delete muon_m;
delete muon_eta;
delete muon_phi;
delete muon_pt;
delete muon_e;
delete e_e;
delete e_phi;
delete e_eta;
delete e_pt;
delete e_m;

delete nmuon_m;
delete nmuon_eta;
delete nmuon_phi;
delete nmuon_pt;
delete nmuon_e;
delete ne_e;
delete ne_phi;
delete ne_eta;
delete ne_pt;
delete ne_m;

//ofile.Write();

//ofile.close();
delete ofile;
}

