#define FillHistos_cxx
#include "FillHistos.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void FillHistos::Loop()
{
   if (fChain == 0) return;

  // Book histograms for interesting variables                                                                                                                                              
  TFile* histFile = new TFile("hist_DY.root","RECREATE");
  TH1F *hPt = new TH1F("hPt","",100, 0, 200);
  TH1F *hEta = new TH1F("hEta","",100,-3, 3);
  TH1F *h5x5See_barrel = new TH1F("h5x5See_barrel", "", 100, 0, 0.05); // Full 5x5 sigma_ieta_ieta       
  TH1F *h5x5See_endcap = new TH1F("h5x5See_endcap", "", 100, 0, 0.05); // Full 5x5 sigma_ieta_ieta       
  TH1F *hrelIsoWithDBeta_barrel = new TH1F("relIsoWithDBeta_barrel", "", 150, 0, 3); // Full 5x5 sigma_ieta_ieta       
  TH1F *hrelIsoWithDBeta_endcap = new TH1F("relIsoWithDBeta_endcap", "", 150, 0, 3); // Full 5x5 sigma_ieta_ieta        
  TH1F *hPt_iso = new TH1F("hPt_iso","",100, 0, 200);
  TH1F *hnPV = new TH1F("hnPV","",50, 0, 50);
  TH1F *hnPV_iso = new TH1F("hnPV_iso","",50, 0, 50);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

    // Loop over electrons
    //
    for(int iele = 0; iele < nEle; iele++){
      
      // In this example, work only with reconstructed electrons matched
      // to true prompt electrons in MC
    if( isTrueElectron->at(iele) != 1 )	continue;
      //   if(!(( isTrueElectron->at(iele) ==0) || (isTrueElectron->at(iele) ==3)))continue;
      // Fill histograms
      hPt->Fill( pt->at(iele) );
      hEta->Fill( etaSC->at(iele) );
      hnPV->Fill(nPV);
      bool isBarrel = fabs( etaSC->at(iele) ) < 1.479 ? true : false; 
   
     if( isBarrel ) {
      	h5x5See_barrel->Fill( full5x5_sigmaIetaIeta->at(iele) );
        hrelIsoWithDBeta_barrel->Fill(relIsoWithDBeta->at(iele));
      }else{
      	h5x5See_endcap->Fill( full5x5_sigmaIetaIeta->at(iele) );
        hrelIsoWithDBeta_endcap->Fill(relIsoWithDBeta->at(iele));
     }
     if(relIsoWithDBeta->at(iele)<0.1){
       hPt_iso->Fill( pt->at(iele) );
       hnPV_iso->Fill(nPV);
     }
    } // end loop over electrons
 
  } // end loop over events

  histFile->Write();
  histFile->Close();

}
