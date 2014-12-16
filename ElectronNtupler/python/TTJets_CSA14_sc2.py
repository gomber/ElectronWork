import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(10000) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
# 
# Only some files are listed here, for debugging purposes. The dataset
# name is  
# /TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
#

readFiles.extend( [
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/00C90EFC-3074-E411-A845-002590DB9262.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/00D3EAF1-3174-E411-A5B2-0025904B144E.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/02EF3EFC-0475-E411-A9DB-002590DB9166.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0434E222-1C75-E411-B4D4-0025907FD34C.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/04829E8D-6174-E411-97F0-0025901D4940.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/04C50B58-7B76-E411-9101-003048D437D2.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/060D9464-7174-E411-8EC9-0025907DC9BE.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/06180A42-DA75-E411-B64E-00266CF2AE10.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/063CF1C6-C176-E411-A90A-003048F0E83A.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0661643D-4F76-E411-862B-002590AC4E28.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0A2155A4-D376-E411-A1AD-00266CFFA764.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0AE61EFC-3074-E411-854B-002481E101DA.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0AF8FAF3-3174-E411-A5DE-0025907DCA7E.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0C9118BE-0776-E411-A71D-00215AD4D6E2.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0CA23B27-0275-E411-9638-003048F0E3AC.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0CB9FD3A-0675-E411-835E-002590AC4FEC.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0CF2A9A8-3174-E411-A8C5-0025901D4D76.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0CF8FFF5-3274-E411-8936-00266CFFA764.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0E62BB2E-4174-E411-9C28-002590494C94.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0EA5C14E-BC76-E411-8BBA-0025907DC9D0.root'
] );

secFiles.extend( [
               ] )

