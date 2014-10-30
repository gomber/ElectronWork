/**
AUTHOR : Lovedeep Saini, KSU, 31 Oct 2014

FUNCTION: plotRoc(TString sigFileNam, 
                  TString bkgFileNam, TString varHist)
ARGUMENTS: 
      1. sigFileNam : TString (file containing signal histogram)
      2. bkgFileNam : TString (file containing bakgd. histogram)
      3. varHist    : TString (name of histogram to be used)
      4. verbose    : bool (flag to shutup the stdout)

RETURNS: void

DESCRIPTION: This one creates ROC curves for a variable by
      analysing the signal & background efficiency for
      various values of selection threshold. It is expected
      that both input histograms have same name and exactly
      same binning pattern.

USAGE:  
      $ root -l
      [1]  .L plotRoc.C
      [2]  plotRoc("sigFile.root","bkgFile.root","sigIEtaIEta");
****************************************************************/

void plotRoc(TString sigFileNam, TString bkgFileNam, TString varHist, 
	     bool verbose=true){
  //Open the signal and background files.
  TFile* sigFile = new TFile(sigFileNam,"open");
  TFile* bkgFile = new TFile(bkgFileNam,"open");
  //Fetch the signal and background histos
  TH1D* hSig = sigFile->Get(varHist);
  TH1D* hBkg = bkgFile->Get(varHist);
  //Use any of these to extract number of bins.
  const int nRocBins = hSig->GetNbinsX();

  //Define array to store signal and bkg effis.
  double sigEff[nRocBins];
  double bkgEff[nRocBins];
  //Total Signal and Bkg Strength 
  float sigDen = hSig->Integral();
  float bkgDen = hBkg->Integral();
  //Move threshold one bin ahead per iteration, 
  // and score signal, bkg efficiencies.
  for (size_t i = 1; i <= nRocBins; i++) {
    //Signal selected upto i-th bin
    float sigNum = hSig->Integral(0, i);
    //Bkg selected upto i-th bin
    float bkgNum = hBkg->Integral(0, i);
    //Efficiency = selected/total
    sigEff[i-1]    = (sigDen > 0.0) ? (sigNum / sigDen) : 0.0;
    bkgEff[i-1]    = (bkgDen > 0.0) ? (bkgNum / bkgDen) : 0.0;

    //Make some noise :)
    if(verbose && sigEff[i-1]>0.50 && bkgEff[i-1]<0.50)
      std::cout << "Signal eff = " << sigEff[i-1] 
		<< ";   Background eff = " << bkgEff[i-1] 
		<< ";   Cut val = " << hSig->GetBinLowEdge(i + 1) 
		<< std::endl;
  }
  
  //Now its time to draw ROC curve
  TCanvas* c = new TCanvas("c", "ROC", 580, 620);
  c->cd();
  c->SetGrid();

  TGraph* rocGraph = new TGraph(nRocBins, bkgEff, sigEff);
  rocGraph->GetXaxis()->SetTitle("Bkg efficiency");
  rocGraph->GetYaxis()->SetTitle("Sig efficiency");
  rocGraph->GetYaxis()->SetRangeUser(0.5,1.1);
  rocGraph->GetXaxis()->SetRangeUser(0.0,0.6);
  rocGraph->SetTitle("ROC");
  rocGraph->SetMarkerStyle(24);
  rocGraph->Draw("ACP");
  c->Print(varHist+"_ROC.pdf");

  /*Compare Shapes*/
  //Normalize them to unity
  TH1D* tempSig=hSig->Clone();
  TH1D* tempBkg=hBkg->Clone();
  tempSig->Scale(1./tempSig->Integral());
  tempBkg->Scale(1./tempBkg->Integral());
  //Its good to have a look at variable.
  TCanvas* c2=new TCanvas("can_"+varHist, "can_"+varHist);
  c2->cd();
  c2->SetLogy();
  tempSig->Draw();
  tempBkg->Draw("sames");
  tempSig->SetLineColor(kRed);
  c2->Print(varHist+".pdf");
  leg = new TLegend(0.6336207,0.6525424,0.8965517,0.8771186,NULL,"brNDC"); //coordinates are fractions
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);
  leg->SetFillColor(0);
  leg->SetTextFont(42);
  leg->AddEntry(tempSig,"Signal");
  leg->AddEntry(tempBkg,"Background");
  leg->Draw();


}
