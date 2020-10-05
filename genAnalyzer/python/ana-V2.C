#define ana_cxx
#include "ana.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <iostream>
#include <cstdlib>
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


//        vector<double> ele_m;
//        vector<double> ele_pt;
//        vector<double> ele_eta;
//        vector<double> ele_phi;
//        vector<double> ele_e;
//
//        vector<double> nele_m;
//        vector<double> nele_pt;
//        vector<double> nele_eta;
//        vector<double> nele_phi;
//        vector<double> nele_e;
//
//        vector<double> mu_m;
//        vector<double> mu_pt;
//        vector<double> mu_eta;
//        vector<double> mu_phi;
//        vector<double> mu_e;
//
//        vector<double> nmu_m;
//        vector<double> nmu_pt;
//        vector<double> nmu_eta;
//        vector<double> nmu_phi;
//        vector<double> nmu_e;

	double leading_m = -999;
	double leading_pt= -999;
        double leading_eta= -999;
        double leading_phi= -999;
        double leading_e= -999;

        double subleading_m= -999;
        double subleading_pt= -999;
        double subleading_eta= -999;
        double subleading_phi= -999;
        double subleading_e= -999;

	double wwm = -999;
	double wwpt= -999;	
	
	vector<double> status16;
        vector<double> status6;
        vector<double> status4;
        vector<double> status8;
	vector<double> mw16;
        vector<double> mw6;
        vector<double> mw4;
        vector<double> mw8;


        vector<double> jet_pt;
        vector<double> jet_m;
        vector<double> jet_eta;
        vector<double> jet_phi;
//        double jetleading_m;
//        double jetleading_pt;
//        double jetleading_eta;
//        double jetleading_phi;
//        double jetleading_e;
//
//        double jetsubleading_m;
//        double jetsubleading_pt;
//        double jetsubleading_eta;
//        double jetsubleading_phi;
//        double jetsubleading_e;

//	This is for jet
	int num_jet= -999;
	int count =0;
//	for 1 jet
/*        double jet1leading_m= -999;
        double jet1leading_pt= -999;
        double jet1leading_eta= -999;
        double jet1leading_phi= -999;
        double jet1leading_e= -999;
	
//	for 2 jets
        double jet2leading_m= -999;
        double jet2leading_pt= -999;
        double jet2leading_eta= -999;
        double jet2leading_phi= -999;
        double jet2leading_e= -999;

        double jet2subleading_m= -999;
        double jet2subleading_pt=-999;
        double jet2subleading_eta= -999;
        double jet2subleading_phi= -999;
        double jet2subleading_e= -999;

//	for 3 jets
        double jet3leading_m= -999;
        double jet3leading_pt= -999;
        double jet3leading_eta= -999;
        double jet3leading_phi= -999;
        double jet3leading_e= -999;

        double jet3subleading_m= -999;
        double jet3subleading_pt= -999;
        double jet3subleading_eta= -999;
        double jet3subleading_phi= -999;
        double jet3subleading_e= -999;

//	for 4 jets
        double jet4leading_m= -999;
        double jet4leading_pt= -999;
        double jet4leading_eta= -999;
        double jet4leading_phi= -999;
        double jet4leading_e= -999;

        double jet4subleading_m= -999;
        double jet4subleading_pt= -999;
        double jet4subleading_eta= -999;
        double jet4subleading_phi= -999;
        double jet4subleading_e= -999;
//	for 5 jets
        double jet5leading_m= -999;
        double jet5leading_pt= -999;
        double jet5leading_eta= -999;
        double jet5leading_phi= -999;
        double jet5leading_e= -999;

        double jet5subleading_m= -999;
        double jet5subleading_pt= -999;
        double jet5subleading_eta= -999;
        double jet5subleading_phi= -999;
        double jet5subleading_e= -999;

        double jet6leading_m= -999;
        double jet6leading_pt= -999;
        double jet6leading_eta= -999;
        double jet6leading_phi= -999;
        double jet6leading_e= -999;

        double jet6subleading_m= -999;
        double jet6subleading_pt= -999;
        double jet6subleading_eta= -999;
        double jet6subleading_phi= -999;
        double jet6subleading_e= -999;

        double jet7leading_m= -999;
        double jet7leading_pt= -999;
        double jet7leading_eta= -999;
        double jet7leading_phi= -999;
        double jet7leading_e= -999;

        double jet7subleading_m= -999;
        double jet7subleading_pt= -999;
        double jet7subleading_eta= -999;
        double jet7subleading_phi= -999;
        double jet7subleading_e= -999;

        double jet8leading_m= -999;
        double jet8leading_pt= -999;
        double jet8leading_eta= -999;
        double jet8leading_phi= -999;
        double jet8leading_e= -999;

        double jet8subleading_m= -999;
        double jet8subleading_pt= -999;
        double jet8subleading_eta= -999;
        double jet8subleading_phi= -999;
        double jet8subleading_e= -999;
*/
        double weights;
	double startweight;
	double totalweight;

	double leadingjet_pt = -999;
	double leadingjet_eta = -999;
	double leadingjet_phi = -999;

	double subleadingjet_pt = -999;
	double subleadingjet_eta = -999;
	double subleadingjet_phi = -999;

//for mll and ptll
	double mll = -999;
	double ptll = -999;


//       vector<int> jetn;
//        ele_m.clear();
//        ele_pt.clear();
//        ele_eta.clear();
//        ele_phi.clear();
//	ele_e.clear();
//	mu_e.clear();
//        mu_m.clear();
//        mu_pt.clear();
//        mu_eta.clear();
//        mu_phi.clear();
//
//        nele_m.clear();
//        nele_pt.clear();
//        nele_eta.clear();
//        nele_phi.clear();
//        nele_e.clear();
//        nmu_e.clear();
//        nmu_m.clear();
//        nmu_pt.clear();
//        nmu_eta.clear();
//        nmu_phi.clear();

        jet_pt.clear();
        jet_m.clear();
        jet_eta.clear();
        jet_phi.clear();
//        jetn.clear();
	mw4.clear();
        mw8.clear();
        mw6.clear();
        mw16.clear();
        status8.clear();
        status4.clear();
        status6.clear();
        status16.clear();
//	TFile *ofile = new TFile("ww.root", "recreate");
//        TFile ofile("ww.root", "recreate");
//        TFile *ofile = new TFile("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww11.root", "recreate");
        TFile *ofile = new TFile("/eos/user/h/hongyi/ww_data/Powheg/ww11.root", "recreate");
//        TFile *ofile = new TFile("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww18.root", "recreate");
	ofile->cd();
        TTree* ww  = new TTree("ww", "ww");
//        TH1D *njet = new TH1D("njet","",  10, 0, 10);
//        TH1D *jetmass = new TH1D("jetmass", "",  15, 0, 150);
//        TH1D *jeteta = new TH1D("jeteta", "", 10, 0, 5);
//        TH1D *jetphi = new TH1D("jetphi", "", 10, 0, 8);
//        TH1D *jetpt = new TH1D("jetpt", "", 20, 20, 100);
//        TH1D *e_m = new TH1D("e_m", "", 10, 0.1, 1);
//        TH1D *e_eta = new TH1D("e_eta", "", 10, 0, 3);
//        TH1D *e_phi = new TH1D("e_phi", "", 10, 0, 8);
//        TH1D *e_pt = new TH1D("e_pt", "", 20, 10, 100);
//        TH1D *e_e = new TH1D("e_e", "", 10, 0, 50);
//        TH1D *muon_m = new TH1D("muon_m", "", 20, 0, 80);
//        TH1D *muon_eta = new TH1D("muon_eta", "", 10, 0, 2.5);
//        TH1D *muon_phi = new TH1D("muon_phi", "", 10, 0, 8);
//        TH1D *muon_pt = new TH1D("muon_pt", "", 20, 10, 100);
//        TH1D *muon_e = new TH1D("muon_e", "", 10, 0, 80);
//
//        TH1D *ne_m = new TH1D("ne_m", "", 10, 0.1, 1);
//        TH1D *ne_eta = new TH1D("ne_eta", "", 10, 0, 3);
//        TH1D *ne_phi = new TH1D("ne_phi", "", 10, 0, 8);
//        TH1D *ne_pt = new TH1D("ne_pt", "", 20, 10, 100);
//        TH1D *ne_e = new TH1D("ne_e", "", 10, 0, 50);
//        TH1D *nmuon_m = new TH1D("nmuon_m", "", 20, 0, 80);
//        TH1D *nmuon_eta = new TH1D("nmuon_eta", "", 10, 0, 2.5);
//        TH1D *nmuon_phi = new TH1D("nmuon_phi", "", 10, 0, 8);
//        TH1D *nmuon_pt = new TH1D("nmuon_pt", "", 20, 10, 100);
//        TH1D *nmuon_e = new TH1D("nmuon_e", "", 10, 0, 80);


//        ww ->Branch("leading_m", &leading_m);
//        ww ->Branch("leading_pt", &leading_pt);
//        ww ->Branch("leading_eta", &leading_eta);
//        ww ->Branch("leading_phi", &leading_phi);
//        ww ->Branch("leading_e", &leading_e);
//        ww ->Branch("subleading_m", &subleading_m);
//        ww ->Branch("subleading_pt", &subleading_pt);
//        ww ->Branch("subleading_eta", &subleading_eta);
//        ww ->Branch("subleading_phi", &subleading_phi);
//        ww ->Branch("subleading_e", &subleading_e);
	ww ->Branch("leadingjet_pt", &leadingjet_pt);
        ww ->Branch("leadingjet_eta", &leadingjet_eta);	
        ww ->Branch("leadingjet_phi", &leadingjet_phi);

        ww ->Branch("subleadingjet_pt",  &subleadingjet_pt);
        ww ->Branch("subleadingjet_eta", &subleadingjet_eta);
        ww ->Branch("subleadingjet_phi", &subleadingjet_phi);

        ww ->Branch("ptll", &ptll);
        ww ->Branch("mll", &mll);
        ww ->Branch("wwm", &wwm);
        ww ->Branch("wwpt", &wwpt);
	ww ->Branch("startweight", &startweight);
	ww ->Branch("totalweight", &totalweight);


        ww ->Branch("leading_m", &leading_m);
        ww ->Branch("leading_pt", &leading_pt);
        ww ->Branch("leading_eta", &leading_eta);
        ww ->Branch("leading_phi", &leading_phi);
	ww ->Branch("leading_e", &leading_e);

	ww ->Branch("number_jet", &num_jet);

        ww ->Branch("subleading_m", &subleading_m);
        ww ->Branch("subleading_pt", &subleading_pt);
        ww ->Branch("subleading_eta", &subleading_eta);
        ww ->Branch("subleading_phi", &subleading_phi);
        ww ->Branch("subleading_e", &subleading_e);
//        ww ->Branch("jet1leading_e", &leading_e);

/*
        ww ->Branch("jet1leading_m", &jet1leading_m);
        ww ->Branch("jet1leading_pt", &jet1leading_pt);
        ww ->Branch("jet1leading_eta", &jet1leading_eta);
        ww ->Branch("jet1leading_phi", &jet1leading_phi);


        ww ->Branch("jet2leading_m", &jet2leading_m);
        ww ->Branch("jet2leading_pt", &jet2leading_pt);
        ww ->Branch("jet2leading_eta", &jet2leading_eta);
        ww ->Branch("jet2leading_phi", &jet2leading_phi);
//        ww ->Branch("jet2leading_e", &leading_e);
        ww ->Branch("jet2subleading_m", &jet2subleading_m);
        ww ->Branch("jet2subleading_pt", &jet2subleading_pt);
        ww ->Branch("jet2subleading_eta", &jet2subleading_eta);
        ww ->Branch("jet2subleading_phi", &jet2subleading_phi);
//        ww ->Branch("jet2leading_e", &leading_e);

        ww ->Branch("jet3leading_m", &jet3leading_m);
        ww ->Branch("jet3leading_pt", &jet3leading_pt);
        ww ->Branch("jet3leading_eta", &jet3leading_eta);
        ww ->Branch("jet3leading_phi", &jet3leading_phi);
//        ww ->Branch("jetleading_e", &leading_e);
        ww ->Branch("jet3subleading_m", &jet3subleading_m);
        ww ->Branch("jet3subleading_pt", &jet3subleading_pt);
        ww ->Branch("jet3subleading_eta", &jet3subleading_eta);
        ww ->Branch("jet3subleading_phi", &jet3subleading_phi);
//        ww ->Branch("jetleading_e", &leading_e);

        ww ->Branch("jet4leading_m", &jet4leading_m);
        ww ->Branch("jet4leading_pt", &jet4leading_pt);
        ww ->Branch("jet4leading_eta", &jet4leading_eta);
        ww ->Branch("jet4leading_phi", &jet4leading_phi);
//        ww ->Branch("jetleading_e", &leading_e);
        ww ->Branch("jet4subleading_m", &jet4subleading_m);
        ww ->Branch("jet4subleading_pt", &jet4subleading_pt);
        ww ->Branch("jet4subleading_eta", &jet4subleading_eta);
        ww ->Branch("jet4subleading_phi", &jet4subleading_phi);
//        ww ->Branch("jetleading_e", &leading_e);

        ww ->Branch("jet5leading_m", &jet5leading_m);
        ww ->Branch("jet5leading_pt", &jet5leading_pt);
        ww ->Branch("jet5leading_eta", &jet5leading_eta);
        ww ->Branch("jet5leading_phi", &jet5leading_phi);
        ww ->Branch("jet5subleading_m", &jet5subleading_m);
        ww ->Branch("jet5subleading_pt", &jet5subleading_pt);
        ww ->Branch("jet5subleading_eta", &jet5subleading_eta);
        ww ->Branch("jet5subleading_phi", &jet5subleading_phi);

        ww ->Branch("jet6leading_m", &jet5leading_m);
        ww ->Branch("jet6leading_pt", &jet5leading_pt);
        ww ->Branch("jet6leading_eta", &jet5leading_eta);
        ww ->Branch("jet6leading_phi", &jet5leading_phi);
        ww ->Branch("jet6subleading_m", &jet5subleading_m);
        ww ->Branch("jet6subleading_pt", &jet5subleading_pt);
        ww ->Branch("jet6subleading_eta", &jet5subleading_eta);
        ww ->Branch("jet6subleading_phi", &jet5subleading_phi);

        ww ->Branch("jet7leading_m", &jet5leading_m);
        ww ->Branch("jet7leading_pt", &jet5leading_pt);
        ww ->Branch("jet7leading_eta", &jet5leading_eta);
        ww ->Branch("jet7leading_phi", &jet5leading_phi);
        ww ->Branch("jet7subleading_m", &jet5subleading_m);
        ww ->Branch("jet7subleading_pt", &jet5subleading_pt);
        ww ->Branch("jet7subleading_eta", &jet5subleading_eta);
        ww ->Branch("jet7subleading_phi", &jet5subleading_phi);


        ww ->Branch("jet8leading_m", &jet5leading_m);
        ww ->Branch("jet8leading_pt", &jet5leading_pt);
        ww ->Branch("jet8leading_eta", &jet5leading_eta);
        ww ->Branch("jet8leading_phi", &jet5leading_phi);
        ww ->Branch("jet8subleading_m", &jet5subleading_m);
        ww ->Branch("jet8subleading_pt", &jet5subleading_pt);
        ww ->Branch("jet8subleading_eta", &jet5subleading_eta);
        ww ->Branch("jet8subleading_phi", &jet5subleading_phi);
*/
	ww ->Branch("weights", &weights);
//        ww ->Branch("j8etleading_e", &leading_e);
//        ww ->Branch("ele_m", &ele_m);
//        ww ->Branch("ele_pt", &ele_pt);
//        ww ->Branch("ele_eta", &ele_eta);
//        ww ->Branch("ele_phi", &ele_phi);
//        ww ->Branch("ele_e", &ele_e);
//        ww ->Branch("mu_m", &mu_m);
//        ww ->Branch("mu_pt", &mu_pt);
//        ww ->Branch("mu_eta", &mu_eta);
//        ww ->Branch("mu_phi", &mu_phi);
//        ww ->Branch("mu_e", &mu_e);
        ww ->Branch("mw4", &mw4);
        ww ->Branch("mw8", &mw8);
        ww ->Branch("mw6", &mw6);
        ww ->Branch("mw16", &mw16);
	ww ->Branch("statusw16", &status16);
        ww ->Branch("statusw6", &status6);
        ww ->Branch("statusw8", &status8);
        ww ->Branch("statusw4", &status4);
//        ww ->Branch("nele_m", &nele_m)        ww ->Branch("statusw", &status);;
//        ww ->Branch("nele_pt", &nele_pt);
//        ww ->Branch("nele_eta", &nele_eta);
//        ww ->Branch("nele_phi", &nele_phi);
//        ww ->Branch("nele_e", &nele_e);
//        ww ->Branch("nmu_m", &nmu_m);
//        ww ->Branch("nmu_pt", &nmu_pt);
//        ww ->Branch("nmu_eta", &nmu_eta);
//        ww ->Branch("nmu_phi", &nmu_phi);
//        ww ->Branch("nmu_e", &nmu_e);
//
//        ww ->Branch("jet_m", &jet_m);
//        ww ->Branch("jet_pt", &jet_pt);
//        ww ->Branch("jet_eta", &jet_eta);
//        ww ->Branch("jet_phi", &jet_phi);
//        ww ->Branch("njet", &njet);




   if (fChain == 0) return;
        TLorentzVector levector, lmuvector, lllvector, wwvector, w1vector, w2vector;
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      // Fill the leptons first
      // if this lepton comes from W(Though actually this is definete because this restriction is added in the analysis code)

//	if (jentry > 200) break;
//checking the weights
//	double weights;
	startweight = startWeight;
	

	std::cout << "starting scaning" << ID_of_weights_NNLOPS->size() <<std::endl;
	for(int k =0; k < ID_of_weights_NNLOPS->size(); k++){
		if (ID_of_weights_NNLOPS->at(k) == 1001){
			weights	= LHEweights->at(k);

//			std::cout <<"k" <<k << std::endl;
}
}
// now checking if the weights and nominal weights are of the same sign
//	zz = 0;
//	std::cout << "weightsnominalLHE= "  <<  LHEnominalweight << "-----" << "weights = " << weights << std::endl;
//	zz +=1;

	totalweight = startweight * weights;
//	for ww
	vector<int> Wno;
	Wno.clear();
	std::cout << "watch out!!!!!!!!!"<<genWPt->size() <<std::endl;
	for(int i = 0; i< genWPt->size(); i++){
		if(genWstatus->at(i) == 22 )
			Wno.push_back(i);
}
	

	
/*
	if (Wno.size() == 2 )
		if(genWQ->at(0) * genWQ->at(1) == -1){
		w1vector.SetPtEtaPhiM(genWPt->at(0), genWEta->at(0), genWPhi->at(0), genWMass->at(0));
                w2vector.SetPtEtaPhiM(genWPt->at(1), genWEta->at(1), genWPhi->at(1), genWMass->at(1));
		wwvector = w1vector + w2vector;
		wwm = wwvector.M();
		wwpt = wwvector.Pt();


}
	Wno.clear();
*/
/*
        if(genWstatus->size() == 8){
                for(int i = 0; i < genWstatus->size();i++){
                status8.push_back(genWstatus->at(i));
		mw8.push_back(genWMother->at(i));
}
}

        if(genWstatus->size() == 4){
                for(int i = 0; i < genWstatus->size();i++){
                status4.push_back(genWstatus->at(i));
                mw4.push_back(genWMother->at(i));
}
}
        if(genWstatus->size() == 6){
                for(int i = 0; i < genWstatus->size();i++){
                status6.push_back(genWstatus->at(i));
                mw6.push_back(genWMother->at(i));
}
}

        if(genWstatus->size() == 16){
                for(int i = 0; i < genWstatus->size();i++){
                status16.push_back(genWstatus->at(i));
                mw16.push_back(genWMother->at(i));
}
}

*/

//	std::cout << genLeptMother->size() << std::cout;
/*
        if(genWstatus->size() == 16){
                for(int i = 0; i < genWstatus->size();i++){
                status16.push_back(genWstatus->at(i));
                mw16.push_back(genWMother->at(i));
}
}

*/

//	std::cout << genLeptMother->size() << std::cout;
//	if (1 < 2){
//	if (Wno.size() !=2 )
//		continue;
   //     if (Wno.size() == 2 )

  //              if(genWQ->at(0) * genWQ->at(1) == -1){
  
  //			if (genLeptMother->size() == 2){
//    	std::cout<< "it happens" << std::endl; 
//	std::cout << genLeptMother->at(0) << genLeptId->at(0) << genLeptId->at(1) <<std::endl;     
  //		 	       if ((genLeptId->at(0) *  genLeptId->at(1) )== -143){
  //               	               if(((genLeptId->at(0) == 11 || genLeptId->at(0) == -11)&& (abs(genLeptEta -> at(0)) <2.5 &&  abs(genLeptEta->at(1))< 2.4)) || (abs(genLeptEta -> at(0)) < 2.4 && abs(genLeptEta -> at(1)) <2.5)){


//      leading pt/sub-leading pt/electron eta cut/muon eta cut
//                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(0)<2.5 && genLeptEta->at(1) <2.4)){
		//				if( genLeptPt->at(0) > genLeptPt->at(1) && (genLeptPt-> at(0) >25 && genLeptPt->at(1) >15)){
	if (Wno.size() == 2 && genWQ->at(0) * genWQ->at(1) == -1 && genLeptMother->size() == 2 && (genLeptId->at(0) *  genLeptId->at(1) )== -143 && (((genLeptId->at(0) == 11 || genLeptId->at(0) == -11)&& (abs(genLeptEta -> at(0)) <2.5 &&  abs(genLeptEta->at(1))< 2.4)) || (abs(genLeptEta -> at(0)) < 2.4 && abs(genLeptEta -> at(1)) <2.5))){

		if( genLeptPt->at(0) > genLeptPt->at(1) && (genLeptPt-> at(0) >25 && genLeptPt->at(1) >15)){

		std::cout << "it happens 1st time" << std::endl;
// we will just record information here
                w1vector.SetPtEtaPhiM(genWPt->at(0), genWEta->at(0), genWPhi->at(0), genWMass->at(0));
                w2vector.SetPtEtaPhiM(genWPt->at(1), genWEta->at(1), genWPhi->at(1), genWMass->at(1));
                wwvector = w1vector + w2vector;
                wwm = wwvector.M();
                wwpt = wwvector.Pt();	
//                                leading_m.push_back(genLeptM->at(0));
//                                leading_pt.push_back(genLeptPt->at(0));
//                                leading_eta.push_back(genLeptEta->at(0));
//                                leading_phi.push_back(genLeptPhi->at(0));
                                leading_m = (genLeptM->at(0));
                                leading_pt=(genLeptPt->at(0));
                                leading_eta=(genLeptEta->at(0));
                                leading_phi=(genLeptPhi->at(0));
				levector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));

                               // levector.SetPhi(genLeptPhi->at(0));
                               // levector.SetPt(genLeptPt->at(0));
                               // levector.SetM(genLeptM->at(0));
                               // levector.SetEta(genLeptEta->at(0));
                                leading_e=(levector.E());
                                subleading_m=(genLeptM->at(1));
                                subleading_pt=(genLeptPt->at(1));
                                subleading_eta=(genLeptEta->at(1));
                                subleading_phi=(genLeptPhi->at(1));

				lmuvector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));
                                //lmuvector.SetPhi(genLeptPhi->at(1));
                                //lmuvector.SetPt(genLeptPt->at(1));
                                //lmuvector.SetM((genLeptM->at(1));
                                //lmuvector.SetEta(genLeptEta->at(1));
                                subleading_e = (lmuvector.E());
				lllvector = lmuvector + levector;
				mll = (lllvector.M());	
				ptll = (lllvector.Pt());
//			       	e_m->Fill(genLeptM->at(0), weights);
//                                e_eta->Fill(genLeptEta->at(0), weights);
//                                e_phi->Fill(genLeptPhi->at(0), weights);
//                                e_pt->Fill(genLeptPt->at(0), weights);
//                                e_e->Fill(levector.E(), weights);
//
//                                nmuon_m->Fill(genLeptM->at(1), weights);
//                                nmuon_eta->Fill(genLeptEta->at(1), weights);
//                                nmuon_phi->Fill(genLeptPhi->at(1), weights);
//                                nmuon_pt->Fill(genLeptPt->at(1), weights);
//                                nmuon_e->Fill(lmuvector.E(), weights);

}
        



//                if (genNuPdgId->at(0) == 13  && genLeptId->at(1) ==-11) {
//                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(1)<2.5 && genLeptEta->at(0) <2.4)){
                        else if( genLeptPt->at(0) < genLeptPt->at(1)&& (genLeptPt-> at(1) >25 && genLeptPt->at(0) >15)){
        std::cout << "it happens 2nd time" << std::endl;
                                subleading_m=(genLeptM->at(0));
                                subleading_pt=(genLeptPt->at(0));
                                subleading_eta=(genLeptEta->at(0));
                                subleading_phi=(genLeptPhi->at(0));

                                lmuvector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));

                                //lmuvector.SetPhi(genLeptPhi->at(0));
                                //lmuvector.SetPt(genLeptPt->at(0));
                                //lmuvector.SetM(genLeptM->at(0));
                                //lmuvector.SetEta(genLeptEta->at(0));
                                subleading_e=(lmuvector.E());
                                
				leading_m = (genLeptM->at(1));
                                leading_pt=(genLeptPt->at(1));
                                leading_eta=(genLeptEta->at(1));
                                leading_phi=(genLeptPhi->at(1));

                                levector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));

                                //levector.SetPhi(genLeptPhi->at(1));
                                //levector.SetPt(genLeptPt->at(1));
                                //levector.SetM((genLeptM->at(1));
                                //levector.SetEta(genLeptEta->at(1));
                                leading_e=(levector.E());

                                lllvector = lmuvector + levector;
                                mll = (lllvector.M());
                                ptll = (lllvector.Pt());

                w1vector.SetPtEtaPhiM(genWPt->at(0), genWEta->at(0), genWPhi->at(0), genWMass->at(0));
                w2vector.SetPtEtaPhiM(genWPt->at(1), genWEta->at(1), genWPhi->at(1), genWMass->at(1));
                wwvector = w1vector + w2vector;
                wwm = wwvector.M();
                wwpt = wwvector.Pt();

}
			else continue;
}
	else continue;

//                                muon_m->Fill(genLeptM->at(0), weights);
//                                muon_eta->Fill(genLeptEta->at(0), weights);
//                                muon_phi->Fill(genLeptPhi->at(0), weights);
//                                muon_pt->Fill(genLeptPt->at(0), weights);
//                                muon_e->Fill(lmuvector.E(), weights);
//
//                                ne_m->Fill(genLeptM->at(1), weights);
//                                ne_eta->Fill(genLeptEta->at(1), weights);
//                                ne_phi->Fill(genLeptPhi->at(1), weights);
//                                ne_pt->Fill(genLeptPt->at(1), weights);
//                                ne_e->Fill(levector.E(), weights);




//        }
//}

//               if (genLeptId->at(0) == -11 && genLeptId->at(1) == 13){
//                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(0)<2.5 && genLeptEta->at(1) <2.4)){
//        std::cout << "it happens 3rd time" << std::endl;
//                                nele_m.push_back(genLeptM->at(0));
//                                nele_pt.push_back(genLeptPt->at(0));
//                                nele_eta.push_back(genLeptEta->at(0));
//                                nele_phi.push_back(genLeptPhi->at(0));
//
//                                levector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));
//                                nele_e.push_back(levector.E());
//                                mu_m.push_back(genLeptM->at(1));
//                                mu_pt.push_back(genLeptPt->at(1));
//                                mu_eta.push_back(genLeptEta->at(1));
//                                mu_phi.push_back(genLeptPhi->at(1));
//
//                                lmuvector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));
//
//                                mu_e.push_back(lmuvector.E());
//
//                                ne_m->Fill(genLeptM->at(0), weights);
//                                ne_eta->Fill(genLeptEta->at(0), weights);
//                                ne_phi->Fill(genLeptPhi->at(0), weights);
//                                ne_pt->Fill(genLeptPt->at(0), weights);
//                                ne_e->Fill(levector.E(), weights);
//
//                                muon_m->Fill(genLeptM->at(1), weights);
//                                muon_eta->Fill(genLeptEta->at(1), weights);
//                                muon_phi->Fill(genLeptPhi->at(1), weights);
//                                muon_pt->Fill(genLeptPt->at(1), weights);
//                                muon_e->Fill(lmuvector.E(), weights);
//
//}
//        }
//
//
//
//                if (genNuPdgId->at(0) == -13  && genLeptId->at(1) ==11) {
//                        if(((genLeptPt->at(0) > 25 && genLeptPt->at(1) > 15) || (genLeptPt->at(0)> 15 && genLeptPt->at(1) > 25)) && (genLeptEta->at(1)<2.5 && genLeptEta->at(0) <2.4)){
//        std::cout << "it happens 4th time" << std::endl;
//                                nmu_m.push_back(genLeptM->at(0));
//                                nmu_pt.push_back(genLeptPt->at(0));
//                                nmu_eta.push_back(genLeptEta->at(0));
//                                nmu_phi.push_back(genLeptPhi->at(0));
//
//                                lmuvector.SetPtEtaPhiM(genLeptPt->at(0), genLeptEta->at(0), genLeptPhi->at(0), genLeptM->at(0));
//
//                                nmu_e.push_back(lmuvector.E());
//
//                                ele_m.push_back(genLeptM->at(1));
//                                ele_pt.push_back(genLeptPt->at(1));
//                                ele_eta.push_back(genLeptEta->at(1));
//                                ele_phi.push_back(genLeptPhi->at(1));
//
//                                levector.SetPtEtaPhiM(genLeptPt->at(1), genLeptEta->at(1), genLeptPhi->at(1), genLeptM->at(1));
//
//                                ele_e.push_back(levector.E());
//
//                                nmuon_m->Fill(genLeptM->at(0), weights);
//                                nmuon_eta->Fill(genLeptEta->at(0), weights);
//                                nmuon_phi->Fill(genLeptPhi->at(0), weights);
//                                nmuon_pt->Fill(genLeptPt->at(0), weights);
//                                nmuon_e->Fill(lmuvector.E(), weights);
//
//                                e_m->Fill(genLeptM->at(1), weights);
//                                e_eta->Fill(genLeptEta->at(1), weights);
//                                e_phi->Fill(genLeptPhi->at(1), weights);
//                                e_pt->Fill(genLeptPt->at(1), weights);
//                                e_e->Fill(levector.E(), weights);
//
//
//
//
//        }
//        }

//}

//double findnthlargest(vector<double> v, int nth){
//	vector<double> temp = v;
//	std::sort(temp.begin(), temp.end());
//	return temp[temp.size()- nth];
//
//}

 //Filling histogram
	int n_jet = 0;
//	double leading_pt = 0;
//        vector<double> temp_pt;
//        vector<double> temp_m;
//        vector<double> temp_eta;
//        vector<double> temp_phi;
//
//        temp_pt.clear();
//        temp_m.clear();
//        temp_eta.clear();
//        temp_phi.clear();

        for (int j = 0; j < genJetPt->size(); j++){
                if (genJetPt->at(j) > 30 && genJetEta->at(j) < 5){
                        jet_m.push_back(genJetMass->at(j));
                        jet_eta.push_back(genJetEta->at(j));
                        jet_phi.push_back(genJetPhi->at(j));
                        jet_pt.push_back(genJetPt->at(j));
//                        temp_m.push_back(genJetMass->at(j));
//                        temp_eta.push_back(genJetEta->at(j));
//                        temp_phi.push_back(genJetPhi->at(j));
//                        temp_pt.push_back(genJetPt->at(j));
                        n_jet ++;
}
}
	num_jet = n_jet;
	std::cout << num_jet << std::endl;

//        double jet2leading_m;
//        double jet2leading_pt;
//        double jet2leading_eta;
//        double jet2leading_phi;
//        double jet2leading_e;
//
//        double jet2subleading_m;
//        double jet2subleading_pt;
//        double jet2subleading_eta;
//        double jet2subleading_phi;
//        double jet2subleading_e;
	std::cout << "Now we are processinginginging" << std::endl;
	if (n_jet >= 1){

		leadingjet_pt = jet_pt.at(n_jet -1);
                leadingjet_phi = jet_phi.at(n_jet -1);
                leadingjet_eta = jet_eta.at(n_jet -1);



}
	if(n_jet >= 2){
		subleadingjet_pt = jet_pt.at(n_jet - 2);
                subleadingjet_phi = jet_phi.at(n_jet - 2);
                subleadingjet_eta = jet_eta.at(n_jet - 2);


}



/*

	std::cout << "recording jet now" << std::endl;
	if (n_jet == 1){



		jet1leading_m = jet_m.at(0);
		jet1leading_pt = jet_pt.at(0);
		jet1leading_eta = jet_eta.at(0);
		jet1leading_phi = jet_phi.at(0);
        std::cout << "jet = 1" << std::endl;
}
	if (n_jet == 2){
        std::cout << " jet =2" << std::endl;
                jet2leading_m = jet_m.at(0);
                jet2leading_pt = jet_pt.at(0);
                jet2leading_eta = jet_eta.at(0);
                jet2leading_phi = jet_phi.at(0);

                jet2subleading_m = jet_m.at(1);
                jet2subleading_pt = jet_pt.at(1);
                jet2subleading_eta = jet_eta.at(1);
                jet2subleading_phi = jet_phi.at(1);
}
        if (n_jet == 3){
        std::cout << "jet =3" << std::endl;
                jet3leading_m = jet_m.at(0);
                jet3leading_pt = jet_pt.at(0);
                jet3leading_eta = jet_eta.at(0);
                jet3leading_phi = jet_phi.at(0);

                jet3subleading_m = jet_m.at(1);
                jet3subleading_pt = jet_pt.at(1);
                jet3subleading_eta = jet_eta.at(1);
                jet3subleading_phi = jet_phi.at(1);
}
        if (n_jet == 4){
                jet4leading_m = jet_m.at(0);
                jet4leading_pt = jet_pt.at(0);
                jet4leading_eta = jet_eta.at(0);
                jet4leading_phi = jet_phi.at(0);

                jet4subleading_m = jet_m.at(1);
                jet4subleading_pt = jet_pt.at(1);
                jet4subleading_eta = jet_eta.at(1);
                jet4subleading_phi = jet_phi.at(1);
}
        if (n_jet == 5){
                jet5leading_m = jet_m.at(0);
                jet5leading_pt = jet_pt.at(0);
                jet5leading_eta = jet_eta.at(0);
                jet5leading_phi = jet_phi.at(0);

                jet5subleading_m = jet_m.at(1);
                jet5subleading_pt = jet_pt.at(1);
                jet5subleading_eta = jet_eta.at(1);
                jet5subleading_phi = jet_phi.at(1);
}
        if (n_jet == 6){
                jet6leading_m = jet_m.at(0);
                jet6leading_pt = jet_pt.at(0);
                jet6leading_eta = jet_eta.at(0);
                jet6leading_phi = jet_phi.at(0);

                jet6subleading_m = jet_m.at(1);
                jet6subleading_pt = jet_pt.at(1);
                jet6subleading_eta = jet_eta.at(1);
                jet6subleading_phi = jet_phi.at(1);
}
        if (n_jet == 7){
                jet7leading_m = jet_m.at(0);
                jet7leading_pt = jet_pt.at(0);
                jet7leading_eta = jet_eta.at(0);
                jet7leading_phi = jet_phi.at(0);

                jet7subleading_m = jet_m.at(1);
                jet7subleading_pt = jet_pt.at(1);
                jet7subleading_eta = jet_eta.at(1);
                jet7subleading_phi = jet_phi.at(1);
}
        if (n_jet == 8){
                jet8leading_m = jet_m.at(0);
                jet8leading_pt = jet_pt.at(0);
                jet8leading_eta = jet_eta.at(0);
                jet8leading_phi = jet_phi.at(0);

                jet8subleading_m = jet_m.at(1);
                jet8subleading_pt = jet_pt.at(1);
                jet8subleading_eta = jet_eta.at(1);
                jet8subleading_phi = jet_phi.at(1);
}
*/


//	double largest = findnthlargest(temp_pt, 1);
//        double Sec_largest = findnthlargest(temp_pt, 2);
//        for (int j = 0; j < genJetPt->size(); j++){
//		int large, seclarge;
//		if temp_
//
//
//
//}

//        njet->Fill(n_jet, weights);
	//std::cout <<weights<< std::endl;
        std::cout << "doing" << std::endl;
	ww->Fill();
	count += 1;
	std::cout << "count = " << count <<std::endl;       




	 leadingjet_pt = -999;
         leadingjet_eta = -999;
         leadingjet_phi = -999;
         subleadingjet_pt = -999;
         subleadingjet_eta = -999;
         subleadingjet_phi = -999;

	 wwm = -999;
	 wwpt = -999;
	 mll = -999;
	 ptll = -999;

         leading_m = -999;
         leading_pt= -999;
         leading_eta= -999;
         leading_phi= -999;
         leading_e= -999;

         subleading_m= -999;
         subleading_pt= -999;
         subleading_eta= -999;
         subleading_phi= -999;
         subleading_e= -999;

         num_jet= -999;
/*
         jet1leading_m= -999;
         jet1leading_pt= -999;
         jet1leading_eta= -999;
         jet1leading_phi= -999;
         jet1leading_e= -999;

         jet2leading_m= -999;
         jet2leading_pt= -999;
         jet2leading_eta= -999;
         jet2leading_phi= -999;
         jet2leading_e= -999;

         jet2subleading_m= -999;
         jet2subleading_pt=-999;
         jet2subleading_eta= -999;
         jet2subleading_phi= -999;
         jet2subleading_e= -999;

         jet3leading_m= -999;
         jet3leading_pt= -999;
         jet3leading_eta= -999;
         jet3leading_phi= -999;
         jet3leading_e= -999;

         jet3subleading_m= -999;
         jet3subleading_pt= -999;
         jet3subleading_eta= -999;
         jet3subleading_phi= -999;
         jet3subleading_e= -999;

         jet4leading_m= -999;
         jet4leading_pt= -999;
         jet4leading_eta= -999;
         jet4leading_phi= -999;
         jet4leading_e= -999;

         jet4subleading_m= -999;
         jet4subleading_pt= -999;
         jet4subleading_eta= -999;
         jet4subleading_phi= -999;
         jet4subleading_e= -999;

         jet5leading_m= -999;
         jet5leading_pt= -999;
         jet5leading_eta= -999;
         jet5leading_phi= -999;
         jet5leading_e= -999;

         jet5subleading_m= -999;
         jet5subleading_pt= -999;
         jet5subleading_eta= -999;
         jet5subleading_phi= -999;
         jet5subleading_e= -999;
 
         jet6leading_m= -999;
         jet6leading_pt= -999;
         jet6leading_eta= -999;
         jet6leading_phi= -999;
         jet6leading_e= -999;

         jet6subleading_m= -999;
         jet6subleading_pt= -999;
         jet6subleading_eta= -999;
         jet6subleading_phi= -999;
         jet6subleading_e= -999;

         jet7leading_m= -999;
         jet7leading_pt= -999;
         jet7leading_eta= -999;
         jet7leading_phi= -999;
         jet7leading_e= -999;

         jet7subleading_m= -999;
         jet7subleading_pt= -999;
         jet7subleading_eta= -999;
         jet7subleading_phi= -999;
         jet7subleading_e= -999;

         jet8leading_m= -999;
         jet8leading_pt= -999;
         jet8leading_eta= -999;
         jet8leading_phi= -999;
         jet8leading_e= -999;

         jet8subleading_m= -999;
         jet8subleading_pt= -999;
         jet8subleading_eta= -999;
         jet8subleading_phi= -999;
         jet8subleading_e= -999;
*/

	mw4.clear();
        mw6.clear();
        mw8.clear();
        mw16.clear();
	status4.clear();
        status6.clear();
	status8.clear();
        status16.clear();
        jet_pt.clear();
        jet_m.clear();
        jet_eta.clear();
        jet_phi.clear();
	std::cout << "reset" << std::endl;
}

ofile->cd();
ww -> Write();
//num_jet -> Write();
//
//leading_m -> Write();
//leading_eta-> Write();
//leading_phi-> Write();
//leading_pt -> Write();
//subleading_m -> Write();
//subleading_eta -> Write();
//subleading_phi -> Write();
//subleading_pt  -> Write();
//
//jet1leading_m -> Write();
//jet1leading_eta-> Write();
//jet1leading_phi-> Write();
//jet1leading_pt -> Write();
//
//jet2leading_m -> Write();
//jet2leading_eta-> Write();
//jet2leading_phi-> Write();
//jet2leading_pt -> Write();
//jet2subleading_m -> Write();
//jet2subleading_eta -> Write();
//jet2subleading_phi -> Write();
//jet2subleading_pt  -> Write();
//
//jet3leading_m -> Write();
//jet3leading_eta-> Write();
//jet3leading_phi-> Write();
//jet3leading_pt -> Write();
//jet3subleading_m -> Write();
//jet3subleading_eta -> Write();
//jet3subleading_phi -> Write();
//jet3subleading_pt  -> Write();
//
//jet4leading_m -> Write();
//jet4leading_eta-> Write();
//jet4leading_phi-> Write();
//jet4leading_pt -> Write();
//jet4subleading_m -> Write();
//jet4subleading_eta -> Write();
//jet4subleading_phi -> Write();
//jet4subleading_pt  -> Write();
//
//jet5leading_m -> Write();
//jet5leading_eta-> Write();
//jet5leading_phi-> Write();
//jet5leading_pt -> Write();
//jet5subleading_m -> Write();
//jet5subleading_eta -> Write();
//jet5subleading_phi -> Write();
//jet5subleading_pt  -> Write();
//jet_pt -> Write();
//jet_m -> Write();
//jet_eta -> Write();
//jet_phi -> Write();
//nmuon_m -> Write();
//nmuon_eta-> Write();
//nmuon_phi-> Write();
//nmuon_pt -> Write();
//nmuon_e  -> Write();
//ne_m -> Write();
//ne_eta -> Write();
//ne_phi -> Write();
//ne_pt  -> Write();
//ne_e   -> Write();

//jetmass -> Write();
//jeteta -> Write();
//jetphi -> Write();
//jetpt -> Write();
//njet -> Write();
//delete jetmass;
//delete jeteta;
//delete jetphi;
//delete jetpt;
//delete njet;
//delete jet1leading_m;
//delete jet1leading_eta;
//delete jet1leading_phi;
//delete jet1leading_pt;
//
//delete jet2leading_m;
//delete jet2leading_eta;
//delete jet2leading_phi;
//delete jet2leading_pt;
//delete jet2subleading_e;
//delete jet2subleading_phi;
//delete jet2subleading_eta;
//delete jet2subleading_pt;
//
//delete jet3leading_m;
//delete jet3leading_eta;
//delete jet3leading_phi;
//delete jet4subleading_phi;
//delete jet4subleading_eta;
//delete jet4subleading_pt;
//
//delete jet5leading_m;
//delete jet5leading_eta;
//delete jet5leading_phi;
//delete jet5leading_pt;
//delete jet5subleading_e;
//delete jet5subleading_phi;
//delete jet5subleading_eta;
//delete jet5subleading_pt;
//
//delete num_jet;


//delete jet_pt ;
//delete jet_m ; 
//delete jet_eta;
//delete jet_phi;
//delete nmuon_m;
//delete nmuon_eta;
//delete nmuon_phi;
//delete nmuon_pt;
//delete nmuon_e;
//delete ne_e;
//delete ne_phi;
//delete ne_eta;
//delete ne_pt;
//delete ne_m;

//ofile.Write();

//ofile.close();
delete ofile;
}

