#include <math.h>
void plot()  {

//double w_DYLL = 0.0804;  // Scale factor for Powheg sample (1997 pb) with number of events = 49653546 with 25 ns data Lumi = 2000 pb-1

//TFile f1("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww10.root");
//TFile f1("/afs/cern.ch/user/h/hongyi/public/ww7.root");
//TFile f2("/afs/cern.ch/user/h/hongyi/CMSSW_10_3_0/src/GenAnalyzer/genAnalyzer/python/ww11.root"); 
TFile f1("/eos/user/h/hongyi/ww_data/Powheg/ww10.root");
TFile f2("/eos/user/h/hongyi/ww_data/Powheg/ww11.root");

TTree *T2 = (TTree*)f2.Get("ww");
TTree *T1 = (TTree*)f1.Get("ww");
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
//  j2->GetYaxis()->SetLabelSize(0.020);

TH1F *j3 = new TH1F("j3","Leading Lep PT",50,-25.,300.);
T1->Draw("leading_pt>>j3","totalweight1005");
  j3->SetLineColor(kRed);
  j3->SetLineWidth(2);
  j3->SetStats(0);

TH1F *j4 = new TH1F("j4","Leading Lep PT",50,-25.,300.);
T1->Draw("leading_pt>>j4","totalweight1009");
  j4->SetLineColor(kGreen);
  j4->SetLineWidth(2);
  j4->SetStats(0);
  j4->GetYaxis()->SetLabelSize(0.020);
j2->Scale(12178 * 35.9 / 1.999e+06);
j1->Scale(1327.3 *9* 35.9 / 2.3025e+07);
j3->Scale(1327.3 *9* 35.9 / 2.3025e+07);
j4->Scale(1327.3 *9* 35.9 / 2.3025e+07);
//j2->Scale(13273 * 35.9 / 2.3025e+07);
//j1->Scale(13273 * 35.9 / 2.3025e+07);
//j2->Scale(12 * 35.9 / 1.999e+06);
//j1->Scale(13273 * 35.9 / 2.3025e+07);
//j2->Scale(w_DYLL);
//j1_1->Scale(1.);

cout << "With Weight = " << j1->Integral() << endl;
cout << "Without Weight = "  << j2->Integral() << endl;
cout << "Without Weight = "  << j3->Integral() << endl;
cout << "Without Weight = "  << j4->Integral() << endl;
TH1F *h1 = (TH1F *)j1->Clone();
TH1F *h2 = (TH1F *)j2->Clone();
TH1F *h3 = (TH1F *)j3->Clone();
TH1F *h4 = (TH1F *)j4->Clone();
j1->Draw("hist");
j2->Draw("sames hist");
j3->Draw("sames hist");
j4->Draw("sames hist");
    tleg1->AddEntry(j1,"w/ weights-nnlops","l");
  tleg1->AddEntry(j2,"w/o weights","l");
  tleg1->AddEntry(j3,"w/ weights-nnlops_up","l");
  tleg1->AddEntry(j4,"w/ weights-nnlops_down","l");
  tleg1->SetFillColor(kWhite);
  tleg1->Draw("sames");
  c1->cd();

//std::cout << "counting variance" << std::endl;
//for(int i=0;i< h1->GetNbinsX(); i++ ){
//    std::cout <<"1009 - 1001" <<h4->GetBinContent(i) - h1->GetBinContent(i)<< "1005-1001"<< h3->GetBinContent(i) - h1->GetBinContent(i)<< std::endl;
//}


TPad *pad2 = new TPad("pad2","pad2",0,0,1,0.2);
  pad2->SetGridy(1);
  pad2->SetPad(0,0.0,1.0,0.2);
  pad2->SetTopMargin(0.);
  pad2->SetBottomMargin(0.5);
  pad2->Draw();
  pad2->cd();
  float yscale = (1.0-0.2)/(0.18-0);
  h1->Divide(h2);
  h1->SetMarkerStyle(1);
  h1->SetLineColor(kBlack);
  h1->SetStats(0);
  h1->GetYaxis()->SetTitle("");
  h1->SetMinimum(0.6);
  h1->SetMaximum(2.0);
  h1->SetTitle("");
  h1->GetXaxis()->SetTitleOffset(1.3);
  h1->GetXaxis()->SetLabelSize(0.033*yscale);
  h1->GetXaxis()->SetTitleSize(0.036*yscale);
  h1->GetXaxis()->SetTickLength(0.03*yscale);
  h1->GetYaxis()->SetTitleOffset(0.3);
  h1->GetYaxis()->SetNdivisions(5);
  h1->GetYaxis()->SetLabelSize(0.020*yscale);
  h1->GetYaxis()->SetTitleSize(0.036*yscale);
//  h1->Draw("");

  h3->Divide(h2);
  h3->SetMarkerStyle(1);
  h3->SetLineColor(kRed);
  h3->SetStats(0);
//  h3->gStyle->SetErrorX(0);
  h3->GetYaxis()->SetTitle("");
  h3->SetMinimum(0.6);
  h3->SetMaximum(2.0);
  h3->SetTitle("");
  h3->GetXaxis()->SetTitleOffset(1.3);
  h3->GetXaxis()->SetLabelSize(0.033*yscale);
  h3->GetXaxis()->SetTitleSize(0.036*yscale);
  h3->GetXaxis()->SetTickLength(0.03*yscale);
  h3->GetYaxis()->SetTitleOffset(0.3);
  h3->GetYaxis()->SetNdivisions(5);
  h3->GetYaxis()->SetLabelSize(0.020*yscale);
  h3->GetYaxis()->SetTitleSize(0.036*yscale);
//  h3->Draw("hist");

  h4->Divide(h2);
  h4->SetMarkerStyle(1);
  h4->SetStats(0);
//  h3->gStyle->SetErrorX(0);
  h4->SetLineColor(kGreen);
  h4->GetYaxis()->SetTitle("");
  h4->SetMinimum(0.6);
  h4->SetMaximum(2.0);
  h4->SetTitle("");
  h4->GetXaxis()->SetTitle("Leading Lept PT (GeV)");
  h4->GetXaxis()->SetTitleOffset(1.3);
  h4->GetXaxis()->SetLabelSize(0.033*yscale);
  h4->GetXaxis()->SetTitleSize(0.036*yscale);
  h4->GetXaxis()->SetTickLength(0.03*yscale);
  h4->GetYaxis()->SetTitleOffset(0.3);
  h4->GetYaxis()->SetNdivisions(5);
  h4->GetYaxis()->SetLabelSize(0.020*yscale);
  h4->GetYaxis()->SetTitleSize(0.036*yscale);
//  h4->Draw("sames hist");
std::cout << "uncertainty" << std::endl;
for(int i=0;i< h1->GetNbinsX(); i++ ){
//    std::cout << h1->GetBinContent(i)<< "+-"<< h1->GetBinError(i)<< std::endl;
    double d5 , d9;
    d5 = h3->GetBinContent(i) - h1->GetBinContent(i);
    d9 = h4->GetBinContent(i) - h1->GetBinContent(i);
//    std::cout << "the upper variation is"<< h4->GetBinContent(i) - h1->GetBinContent(i)<< "the lower variation is"<<h3->GetBinContent(i) - h1->GetBinError(i)<< std::endl;
    double a = 0;
    if (d5 < d9)
	a = sqrt(d9*d9 + h1->GetBinError(i) * h1->GetBinError(i));
    else a = sqrt(d5*d5 + h1->GetBinError(i) * h1->GetBinError(i));
    std::cout << "the statistical uncertainty is "<< h1->GetBinContent(i)<< "+-"<< h1->GetBinError(i) << "the upper variation is"<< h4->GetBinContent(i) - h1->GetBinContent(i)<< "the lower variation is"<<h3->GetBinContent(i) - h1->GetBinError(i)<< "the merged uncertainty is " << a <<std::endl;
    h1 ->SetBinError(i, a);
    h4 ->SetBinError(i, 0);
    h3 ->SetBinError(i, 0);


}

  h3->Draw("");
  h4->Draw("sames");
  h1->Draw("sames");
c1->SaveAs("leading_lept_PT.png");
c1->Write();

file->Close();
}
