void plot()  {

//double w_DYLL = 0.0804;  // Scale factor for Powheg sample (1997 pb) with number of events = 49653546 with 25 ns data Lumi = 2000 pb-1
//TFile f1("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww10.root");
//TFile f1("/afs/cern.ch/user/h/hongyi/public/ww7.root");
//TFile f2("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww11.root"); 

TFile f2("/eos/user/h/hongyi/ww_data/Powheg/ww11.root");
TFile f1("/eos/user/h/hongyi/ww_data/Powheg/ww10.root");
TTree *T1 = (TTree*)f1.Get("ww");
TTree *T2 = (TTree*)f2.Get("ww");
TFile * file = new TFile("plots.root","RECREATE"); 

//========================================================================== canvas 1 starts =======================
 
TCanvas *c1 = new TCanvas("c1", "c1",201,27,989,682);
  c1->SetFillColor(0);
 // c1->SetFrameFillColor(0);
  c1->SetFrameBorderSize(1);
//  c1->SetFrameBorderMode(-1);
//    c1->SetLogy(1);
//   TPad *pad1 = new TPad("pad1","pad1",-4,0,4,600);
   TPad *pad1 = new TPad("pad1","pad1",0,0.2,1,1);
   pad1->SetBottomMargin(0.01);
   pad1->SetLogy(0);
   pad1->Draw();
   pad1->cd();

TLegend *tleg1 = new TLegend(0.70,0.80,0.85,0.90,NULL,"brNDC");

TH1F *j1 = new TH1F("j1","Leading lepton eta",15,-3.,3.);
T1->Draw("leading_eta>>j1","totalweight*1");  
 j1->GetYaxis()->SetRangeUser(0, 600);
  j1->SetLineColor(kBlack);
  j1->SetLineWidth(2);
  j1->SetStats(0);

TH1F *j2 = new TH1F("j2","Leading Jet eta",15,-3.,3.);
T2->Draw("leading_eta>>j2","startweight");                                                                                                
 j2->GetYaxis()->SetRangeUser(0, 600);
  j2->SetLineColor(kBlue);
  j2->SetLineWidth(2);
  j2->SetStats(0); 
  j2->GetYaxis()->SetLabelSize(0.020);

//j2->Scale(w_DYLL);
//j1_1->Scale(1.);
j2->Scale(12178 * 35.9 / 1.999e+06/ j2->Integral());
j1->Scale(1327.3 *9* 35.9 / 2.3025e+07/ j1->Integral());

cout << "With Weight = " << j1->Integral() << endl;
cout << "Without Weight = "  << j2->Integral() << endl;

TH1F *h1 = (TH1F *)j1->Clone();
TH1F *h2 = (TH1F *)j2->Clone();

j1->Draw("hist");
j2->Draw("sames hist");

  tleg1->AddEntry(j1,"w/ weights","l");
  tleg1->AddEntry(j2,"w/o weights","l");
  tleg1->SetFillColor(kWhite);
  tleg1->Draw("sames");
  c1->cd();

TPad *pad2 = new TPad("pad2","pad2",0,0,1,0.2);
  pad2->SetGridy(1);
  pad2->SetPad(0,0.0,1.0,0.2);
  pad2->SetTopMargin(0.);
  pad2->SetBottomMargin(0.5);
  pad2->Draw();
  pad2->cd();
  float yscale = (1.0-0.2)/(0.18-0);
  h1->Divide(h2);
  h1->SetMarkerStyle(21);
  h1->SetStats(0);
  h1->GetYaxis()->SetTitle("");
  h1->SetMinimum(0.8);
  h1->SetMaximum(1.6);
  h1->SetTitle("");
  h1->GetXaxis()->SetTitle("Leading Lepton eta ");
  h1->GetXaxis()->SetTitleOffset(1.3);
  h1->GetXaxis()->SetLabelSize(0.033*yscale);
  h1->GetXaxis()->SetTitleSize(0.036*yscale);
  h1->GetXaxis()->SetTickLength(0.03*yscale);
  h1->GetYaxis()->SetTitleOffset(0.3);
  h1->GetYaxis()->SetNdivisions(5);
  h1->GetYaxis()->SetLabelSize(0.020*yscale);
  h1->GetYaxis()->SetTitleSize(0.036*yscale);
  h1->Draw("");

c1->SaveAs("Lepton_leading_eta.png");
c1->Write();

file->Close();
}
