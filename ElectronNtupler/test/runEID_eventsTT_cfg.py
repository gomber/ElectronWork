import FWCore.ParameterSet.Config as cms

process = cms.Process("Ntupler")

process.load("FWCore.MessageService.MessageLogger_cfi")

process.source = cms.Source ("PoolSource",fileNames = cms.untracked.vstring(
'/store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/00C90EFC-3074-E411-A845-002590DB9262.root',
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
                                   fileName = cms.string('Tree_TT.root')
                                   )


process.p = cms.Path(process.ntupler)
