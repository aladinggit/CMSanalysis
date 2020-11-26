void plot()  {

//TFile f1("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww10.root");
//TFile f2("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww11.root");
//TFile f1("/afs/cern.ch/user/h/hongyi/public/ww7.root");
 

TFile f2("/eos/user/h/hongyi/ww_data/Powheg/powheg2018.root");
TFile f1("/eos/user/h/hongyi/ww_data/Powheg/nnlops2018.root");
TFile f4("/eos/user/h/hongyi/ww_data/Powheg/powheg2016.root");
TFile f3("/eos/user/h/hongyi/ww_data/Powheg/nnlops2016.root");
TTree *T1 = (TTree*)f1.Get("ww");
TTree *T2 = (TTree*)f2.Get("ww");
TTree *T3 = (TTree*)f3.Get("ww");
TTree *T4 = (TTree*)f4.Get("ww");
TFile * file = new TFile("plots.root","RECREATE"); 

//========================================================================== canvas 1 starts =======================
 
TCanvas *c1 = new TCanvas("c1", "c1",201,27,989,682);
  c1->SetFillColor(0);
 // c1->SetFrameFillColor(0);
  c1->SetFrameBorderSize(1);
//  c1->SetFrameBorderMode(-1);
//    c1->SetLogy(1);
   TPad *pad1 = new TPad("pad1","pad1",0,0.2,1,1);
   pad1->SetBottomMargin(0.01);
   pad1->SetLogy(0);
   pad1->Draw();
   pad1->cd();

TLegend *tleg1 = new TLegend(0.70,0.80,0.85,0.90,NULL,"brNDC");
TLegend *tleg3 = new TLegend(0.70,0.80,0.85,0.95,NULL,"brNDC");
TH1F *j1 = new TH1F("j1","wwpt",50,-25.,200.);
T1->Draw("wwpt>>j1","totalweight*1");  
  j1->SetLineColor(kBlack);
  j1->SetLineWidth(2);
  j1->SetStats(0);

TH1F *j2 = new TH1F("j2","wwpt",50,-25.,200.);
T2->Draw("wwpt>>j2","startweight");                                                                                                
  j2->SetLineColor(kBlue);
  j2->SetLineWidth(2);
  j2->SetStats(0); 
  j2->GetYaxis()->SetLabelSize(0.020);
TH1F *j3 = new TH1F("j3","wwpt",50,-25.,200.);
T3->Draw("wwpt>>j3","totalweight*1");
  j3->SetLineColor(kGreen);
  j3->SetLineWidth(2);
  j3->SetStats(0);

TH1F *j4 = new TH1F("j4","wwpt",50,-25.,200.);
T4->Draw("wwpt>>j4","startweight");
  j4->SetLineColor(kRed);
  j4->SetLineWidth(2);
  j4->SetStats(0);
  j4->GetYaxis()->SetLabelSize(0.020);
//j2->Scale(w_DYLL);
//j1_1->Scale(1.);
j2->Scale(1 /j2->Integral());
j1->Scale(1 / j1->Integral());
j3->Scale(1 /j3->Integral());
j4->Scale(1 / j4->Integral());


cout << "With Weight = " << j2->Integral() << endl;
cout << "Without Weight = "  << j1->Integral() << endl;
cout << "With Weight = " << j3->Integral() << endl;
cout << "Without Weight = "  << j4->Integral() << endl;


TH1F *h1 = (TH1F *)j1->Clone();
TH1F *h2 = (TH1F *)j2->Clone();
TH1F *h3 = (TH1F *)j3->Clone();
TH1F *h4 = (TH1F *)j4->Clone();


j1->Draw("hist");
j2->Draw("sames hist");
j3->Draw("sames hist");
j4->Draw("sames hist");


  tleg1->AddEntry(j1,"w/ weights--2018","l");
  tleg1->AddEntry(j2,"w/o weights--2018","l");
  tleg1->AddEntry(j3,"w/ weights--2016","l");
  tleg1->AddEntry(j4,"w/o weights--2016","l");  
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
  h1->SetMaximum(1.8);
  h1->SetTitle("");
  h1->GetXaxis()->SetTitle("wwpt (GeV)");
  h1->GetXaxis()->SetTitleOffset(1.3);
  h1->GetXaxis()->SetLabelSize(0.033*yscale);
  h1->GetXaxis()->SetTitleSize(0.036*yscale);
  h1->GetXaxis()->SetTickLength(0.03*yscale);
  h1->GetYaxis()->SetTitleOffset(0.3);
  h1->GetYaxis()->SetNdivisions(5);
  h1->GetYaxis()->SetLabelSize(0.020*yscale);
  h1->GetYaxis()->SetTitleSize(0.036*yscale);

  h3->Divide(h4);
  h3->SetLineColor(kRed);
  h3->SetMarkerStyle(21);
  h3->SetStats(0);
  h3->GetYaxis()->SetTitle("");
  h3->SetMinimum(0.8);
  h3->SetMaximum(1.8);
  h3->SetTitle("");
  h3->GetXaxis()->SetTitle("Leading Jet eta ");
  h3->GetXaxis()->SetTitleOffset(1.3);
  h3->GetXaxis()->SetLabelSize(0.033*yscale);
  h3->GetXaxis()->SetTitleSize(0.036*yscale);
  h3->GetXaxis()->SetTickLength(0.03*yscale);
  h3->GetYaxis()->SetTitleOffset(0.3);
  h3->GetYaxis()->SetNdivisions(5);
  h3->GetYaxis()->SetLabelSize(0.020*yscale);
  h3->GetYaxis()->SetTitleSize(0.036*yscale);
  h1->Draw("");
  h3->Draw("sames");

  tleg3->AddEntry(h1,"w/ weights--2018","l");
  tleg3->AddEntry(h3,"w/o weights--2016","l");
  tleg3->SetFillColor(kWhite);
  tleg3->Draw("sames");

c1->SaveAs("wwpt.png");
c1->Write();

file->Close();
}
