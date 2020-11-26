void plot()  {

//double w_DYLL = 0.0804;  // Scale factor for Powheg sample (1997 pb) with number of events = 49653546 with 25 ns data Lumi = 2000 pb-1

//TFile f1("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww10.root");
//TFile f1("/afs/cern.ch/user/h/hongyi/public/ww7.root");
//TFile f2("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww11.root"); 

TFile f2("/eos/user/h/hongyi/ww_data/Powheg/powheg2018.root");
TFile f1("/eos/user/h/hongyi/ww_data/Powheg/nnlops2018.root");
TTree *T2 = (TTree*)f2.Get("ww");
TTree *T1 = (TTree*)f1.Get("ww");
TFile * file = new TFile("plots.root","RECREATE"); 

//========================================================================== canvas 1 starts =======================
 
TCanvas *c1 = new TCanvas("c1", "c1",201,27,989,682);
  c1->SetFillColor(0);
  c1->SetFrameBorderSize(1);
  c1->SetGrid();

TLegend *tleg1 = new TLegend(0.70,0.85,0.85,0.90,NULL,"brNDC");
TH1F *j1 = new TH1F("j1","Leading Lep PT",50,-25.,300.);
T1->Draw("leading_pt>>j1","totalweight");  
  j1->SetLineColor(kBlack);
  j1->SetLineWidth(2);
  j1->SetStats(0);

TH1F *j2 = new TH1F("j2","Leading Lep PT",50,-25.,300.);
T2->Draw("leading_pt>>j2","startweight");                                                                                                
  j2->SetLineColor(kBlue);
  j2->SetLineWidth(2);
  j2->SetStats(0); 
  j2->GetYaxis()->SetLabelSize(0.020);


j2->Scale(12178 * 59.7 / 8.59176e+07);
j1->Scale(1327.3 *9 * 59.7 / 2.32913e+07);

//j2->Scale(13273 * 35.9 / 2.3025e+07);
//j1->Scale(13273 * 35.9 / 2.3025e+07);
//j2->Scale(12 * 35.9 / 1.999e+06);
//j1->Scale(13273 * 35.9 / 2.3025e+07);
//j2->Scale(w_DYLL);
//j1_1->Scale(1.);

cout << "With Weight = " << j1->Integral() << endl;
cout << "Without Weight = "  << j2->Integral() << endl;

TH1F *h1 = (TH1F *)j1->Clone();
TH1F *h2 = (TH1F *)j2->Clone();



  float yscale = (1.0-0.2)/(0.18-0);
  h1->Divide(h2);
  h1->SetMarkerStyle(21);
  h1->SetStats(0);
  h1->GetYaxis()->SetTitle("");
  h1->SetMinimum(0.6);
  h1->SetMaximum(2.0);
  h1->SetTitle("");
  h1->GetXaxis()->SetTitle("Leading Lept PT (GeV)");
  h1->GetXaxis()->SetTitleOffset(1.3);
  h1->GetXaxis()->SetLabelSize(0.033*yscale);
  h1->GetXaxis()->SetTitleSize(0.036*yscale);
  h1->GetXaxis()->SetTickLength(0.03*yscale);
  h1->GetYaxis()->SetTitleOffset(0.3);
  h1->GetYaxis()->SetNdivisions(5);
  h1->GetYaxis()->SetLabelSize(0.020*yscale);
  h1->GetYaxis()->SetTitleSize(0.036*yscale);

int n = h1->GetNbinsX();
double X[n], Y[n], E[n];
for(int i=0;i< h1->GetNbinsX(); i++ ){
    X[i] = h1->GetBinCenter(i);
    Y[i] = h1->GetBinContent(i);
    E[i] = h1 ->GetBinError(i);
}
auto gr = new TGraphErrors(h1 ->GetNbinsX(),X ,Y , 0, E);
   gr->SetTitle("Leading Lepton PT ratio");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");

  tleg1->AddEntry(gr,"Leading Lepton PT ratio","l");
  tleg1->SetFillColor(kWhite);
  tleg1->Draw("sames");
  c1->cd();
c1->SaveAs("leading_lept_PT.png");
c1->Write();

file->Close();
}