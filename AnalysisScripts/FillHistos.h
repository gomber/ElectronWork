//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jan 12 11:46:55 2015 by ROOT version 5.34/21
// from TTree ElectronTree/Electron data
// found on file: Tree_DY.root
//////////////////////////////////////////////////////////

#ifndef FillHistos_h
#define FillHistos_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class FillHistos {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           pvNTracks;
   Int_t           nPV;
   Int_t           nPU;
   Int_t           nPUTrue;
   Float_t         rho;
   Int_t           nEle;
   vector<float>   *pt;
   vector<float>   *etaSC;
   vector<float>   *phiSC;
   vector<float>   *dEtaIn;
   vector<float>   *dPhiIn;
   vector<float>   *hOverE;
   vector<float>   *sigmaIetaIeta;
   vector<float>   *full5x5_sigmaIetaIeta;
   vector<float>   *isoChargedHadrons;
   vector<float>   *isoNeutralHadrons;
   vector<float>   *isoPhotons;
   vector<float>   *isoChargedFromPU;
   vector<float>   *relIsoWithDBeta;
   vector<float>   *ooEmooP;
   vector<float>   *d0;
   vector<float>   *dz;
   vector<int>     *expectedMissingInnerHits;
   vector<int>     *passConversionVeto;
   vector<int>     *isTrueElectron;
   vector<int>     *isTrueElectronAlternative;
   vector<float>   *phopt;
   vector<float>   *phoeta;
   vector<float>   *phoet;
   vector<float>   *phopx;
   vector<float>   *phopy;
   vector<float>   *phopz;
   vector<float>   *phosceta;
   vector<float>   *photheta;
   vector<float>   *phophi;
   vector<float>   *phosigmaietaieta;
   vector<float>   *phosigmaiphiiphi;
   vector<float>   *phohovere;
   vector<float>   *phoenergy;
   vector<float>   *phoSCenergy;
   vector<float>   *phoSCrawenergy;
   vector<float>   *phoSCeta;
   vector<float>   *phoSCphi;
   vector<float>   *phoSCetawidth;
   vector<float>   *phoSCphiwidth;
   vector<float>   *phoSCBrem;
   vector<float>   *phohasPixelSeed;
   vector<float>   *phoEleVeto;
   vector<float>   *r9;

   // List of branches
   TBranch        *b_pvNTracks;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nPU;   //!
   TBranch        *b_nPUTrue;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_nEle;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_etaSC;   //!
   TBranch        *b_phiSC;   //!
   TBranch        *b_dEtaIn;   //!
   TBranch        *b_dPhiIn;   //!
   TBranch        *b_hOverE;   //!
   TBranch        *b_sigmaIetaIeta;   //!
   TBranch        *b_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_isoChargedHadrons;   //!
   TBranch        *b_isoNeutralHadrons;   //!
   TBranch        *b_isoPhotons;   //!
   TBranch        *b_isoChargedFromPU;   //!
   TBranch        *b_relIsoWithDBeta;   //!
   TBranch        *b_ooEmooP;   //!
   TBranch        *b_d0;   //!
   TBranch        *b_dz;   //!
   TBranch        *b_expectedMissingInnerHits;   //!
   TBranch        *b_passConversionVeto;   //!
   TBranch        *b_isTrueElectron;   //!
   TBranch        *b_isTrueElectronAlternative;   //!
   TBranch        *b_phopt;   //!
   TBranch        *b_phoeta;   //!
   TBranch        *b_phoet;   //!
   TBranch        *b_phopx;   //!
   TBranch        *b_phopy;   //!
   TBranch        *b_phopz;   //!
   TBranch        *b_phosceta;   //!
   TBranch        *b_photheta;   //!
   TBranch        *b_phophi;   //!
   TBranch        *b_phosigmaietaieta;   //!
   TBranch        *b_phosigmaiphiiphi;   //!
   TBranch        *b_phohovere;   //!
   TBranch        *b_phoenergy;   //!
   TBranch        *b_phoSCenergy;   //!
   TBranch        *b_phoSCrawenergy;   //!
   TBranch        *b_phoSCeta;   //!
   TBranch        *b_phoSCphi;   //!
   TBranch        *b_phoSCetawidth;   //!
   TBranch        *b_phoSCphiwidth;   //!
   TBranch        *b_phoSCBrem;   //!
   TBranch        *b_phohasPixelSeed;   //!
   TBranch        *b_phoEleVeto;   //!
   TBranch        *b_r9;   //!

   FillHistos(TTree *tree=0);
   virtual ~FillHistos();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FillHistos_cxx
FillHistos::FillHistos(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Tree_DY.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Tree_DY.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("Tree_DY.root:/ntupler");
      dir->GetObject("ElectronTree",tree);

   }
   Init(tree);
}

FillHistos::~FillHistos()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FillHistos::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FillHistos::LoadTree(Long64_t entry)
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

void FillHistos::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   pt = 0;
   etaSC = 0;
   phiSC = 0;
   dEtaIn = 0;
   dPhiIn = 0;
   hOverE = 0;
   sigmaIetaIeta = 0;
   full5x5_sigmaIetaIeta = 0;
   isoChargedHadrons = 0;
   isoNeutralHadrons = 0;
   isoPhotons = 0;
   isoChargedFromPU = 0;
   relIsoWithDBeta = 0;
   ooEmooP = 0;
   d0 = 0;
   dz = 0;
   expectedMissingInnerHits = 0;
   passConversionVeto = 0;
   isTrueElectron = 0;
   isTrueElectronAlternative = 0;
   phopt = 0;
   phoeta = 0;
   phoet = 0;
   phopx = 0;
   phopy = 0;
   phopz = 0;
   phosceta = 0;
   photheta = 0;
   phophi = 0;
   phosigmaietaieta = 0;
   phosigmaiphiiphi = 0;
   phohovere = 0;
   phoenergy = 0;
   phoSCenergy = 0;
   phoSCrawenergy = 0;
   phoSCeta = 0;
   phoSCphi = 0;
   phoSCetawidth = 0;
   phoSCphiwidth = 0;
   phoSCBrem = 0;
   phohasPixelSeed = 0;
   phoEleVeto = 0;
   r9 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("pvNTracks", &pvNTracks, &b_pvNTracks);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nPU", &nPU, &b_nPU);
   fChain->SetBranchAddress("nPUTrue", &nPUTrue, &b_nPUTrue);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("nEle", &nEle, &b_nEle);
   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("etaSC", &etaSC, &b_etaSC);
   fChain->SetBranchAddress("phiSC", &phiSC, &b_phiSC);
   fChain->SetBranchAddress("dEtaIn", &dEtaIn, &b_dEtaIn);
   fChain->SetBranchAddress("dPhiIn", &dPhiIn, &b_dPhiIn);
   fChain->SetBranchAddress("hOverE", &hOverE, &b_hOverE);
   fChain->SetBranchAddress("sigmaIetaIeta", &sigmaIetaIeta, &b_sigmaIetaIeta);
   fChain->SetBranchAddress("full5x5_sigmaIetaIeta", &full5x5_sigmaIetaIeta, &b_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("isoChargedHadrons", &isoChargedHadrons, &b_isoChargedHadrons);
   fChain->SetBranchAddress("isoNeutralHadrons", &isoNeutralHadrons, &b_isoNeutralHadrons);
   fChain->SetBranchAddress("isoPhotons", &isoPhotons, &b_isoPhotons);
   fChain->SetBranchAddress("isoChargedFromPU", &isoChargedFromPU, &b_isoChargedFromPU);
   fChain->SetBranchAddress("relIsoWithDBeta", &relIsoWithDBeta, &b_relIsoWithDBeta);
   fChain->SetBranchAddress("ooEmooP", &ooEmooP, &b_ooEmooP);
   fChain->SetBranchAddress("d0", &d0, &b_d0);
   fChain->SetBranchAddress("dz", &dz, &b_dz);
   fChain->SetBranchAddress("expectedMissingInnerHits", &expectedMissingInnerHits, &b_expectedMissingInnerHits);
   fChain->SetBranchAddress("passConversionVeto", &passConversionVeto, &b_passConversionVeto);
   fChain->SetBranchAddress("isTrueElectron", &isTrueElectron, &b_isTrueElectron);
   fChain->SetBranchAddress("isTrueElectronAlternative", &isTrueElectronAlternative, &b_isTrueElectronAlternative);
   fChain->SetBranchAddress("phopt", &phopt, &b_phopt);
   fChain->SetBranchAddress("phoeta", &phoeta, &b_phoeta);
   fChain->SetBranchAddress("phoet", &phoet, &b_phoet);
   fChain->SetBranchAddress("phopx", &phopx, &b_phopx);
   fChain->SetBranchAddress("phopy", &phopy, &b_phopy);
   fChain->SetBranchAddress("phopz", &phopz, &b_phopz);
   fChain->SetBranchAddress("phosceta", &phosceta, &b_phosceta);
   fChain->SetBranchAddress("photheta", &photheta, &b_photheta);
   fChain->SetBranchAddress("phophi", &phophi, &b_phophi);
   fChain->SetBranchAddress("phosigmaietaieta", &phosigmaietaieta, &b_phosigmaietaieta);
   fChain->SetBranchAddress("phosigmaiphiiphi", &phosigmaiphiiphi, &b_phosigmaiphiiphi);
   fChain->SetBranchAddress("phohovere", &phohovere, &b_phohovere);
   fChain->SetBranchAddress("phoenergy", &phoenergy, &b_phoenergy);
   fChain->SetBranchAddress("phoSCenergy", &phoSCenergy, &b_phoSCenergy);
   fChain->SetBranchAddress("phoSCrawenergy", &phoSCrawenergy, &b_phoSCrawenergy);
   fChain->SetBranchAddress("phoSCeta", &phoSCeta, &b_phoSCeta);
   fChain->SetBranchAddress("phoSCphi", &phoSCphi, &b_phoSCphi);
   fChain->SetBranchAddress("phoSCetawidth", &phoSCetawidth, &b_phoSCetawidth);
   fChain->SetBranchAddress("phoSCphiwidth", &phoSCphiwidth, &b_phoSCphiwidth);
   fChain->SetBranchAddress("phoSCBrem", &phoSCBrem, &b_phoSCBrem);
   fChain->SetBranchAddress("phohasPixelSeed", &phohasPixelSeed, &b_phohasPixelSeed);
   fChain->SetBranchAddress("phoEleVeto", &phoEleVeto, &b_phoEleVeto);
   fChain->SetBranchAddress("r9", &r9, &b_r9);
   Notify();
}

Bool_t FillHistos::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FillHistos::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FillHistos::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef FillHistos_cxx
