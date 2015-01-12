import FWCore.ParameterSet.Config as cms

process = cms.Process("Ntupler")

process.load("FWCore.MessageService.MessageLogger_cfi")

process.source = cms.Source ("PoolSource",fileNames = cms.untracked.vstring(
'/store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/00D67F78-2873-E411-B3BB-0025907DC9C0.root'
)
)
process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1000) )
process.MessageLogger.cerr.FwkReport.reportEvery=cms.untracked.int32(10)
process.options = cms.untracked.PSet( wantSummary = cms.untracked.bool(False) )

process.ntupler = cms.EDAnalyzer('ElectronNtuplerEventStructure',
                                 packed = cms.InputTag("packedGenParticles"),
                                 pruned = cms.InputTag("prunedGenParticles"),
                                 vertices = cms.InputTag("offlineSlimmedPrimaryVertices"),
                                 pileup = cms.InputTag("addPileupInfo"),
                                 electrons = cms.InputTag("slimmedElectrons"),
				 rho = cms.InputTag("fixedGridRhoFastjetAll"),
                                 photons = cms.InputTag("slimmedPhotons"),
                                                                 
                                 )

process.TFileService = cms.Service("TFileService",
                                   fileName = cms.string('Tree_GJ.root')
                                   )


process.p = cms.Path(process.ntupler)
