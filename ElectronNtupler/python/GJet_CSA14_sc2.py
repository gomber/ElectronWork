import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1000) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
#
# 
# Only some files are listed here, for debugging purposes. The dataset
# name is  
#  /GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
#


source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/00D67F78-2873-E411-B3BB-0025907DC9C0.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/06B0A939-4473-E411-BFF6-002590AC4C66.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/08116AEB-2873-E411-A9D8-00266CF2ABA8.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0A2643A1-2873-E411-BD1F-002590DB928E.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/0EDCFC57-4473-E411-9867-002590DB9298.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/16C72FA3-2873-E411-90F0-002590AC4CC8.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/188BB042-2973-E411-BEDC-002590AC4C3E.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/1CF9ED6B-2873-E411-9407-0025904B12A4.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/22EA3C2A-2973-E411-8477-002481E101DC.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/26D84431-6473-E411-ADC6-00266CFFA6F8.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/2C4D317E-2873-E411-9E4E-0025907FD424.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/32995BF3-2C73-E411-9933-002590DB91A0.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/3ABC057D-2873-E411-A49B-002590AB38DA.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/3EA375ED-3473-E411-9B21-002590DB05DA.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/42C76D7A-2873-E411-9A70-0025907BAF70.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/46090702-3573-E411-91A9-002590494E36.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/3650A0A7-2873-E411-AA7B-003048F02CBA.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/4E35C89C-2C73-E411-8578-0025907DC9CC.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/583B99BB-2C73-E411-BF6B-00266CF32BC4.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/5AB20DA5-2873-E411-BBEA-003048F0E426.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/66C38EDB-DA73-E411-A36B-00266CFFA604.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/68E162ED-3473-E411-8322-003048D3C7BC.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/701BDC6B-2873-E411-A863-002590AC5076.root',
        'root://cmsxrootd-site.fnal.gov//store/mc/Phys14DR/GJets_HT-100to200_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/746BDB9F-2873-E411-AD44-002481E0DC4C.root'

        ] );
readFiles.extend( [

       # '/store/mc/Spring14miniaod/GJet_Pt-15to3000_Tune4C_13TeV_pythia8/MINIAODSIM/PU20bx25_POSTLS170_V5-v1/00000/FC604926-9E09-E411-B482-00259094F2D4.root',
       # '/store/mc/Spring14miniaod/GJet_Pt-15to3000_Tune4C_13TeV_pythia8/MINIAODSIM/PU20bx25_POSTLS170_V5-v1/00000/FCAEC47D-9B09-E411-A1B1-00259094F2D4.root',
       # '/store/mc/Spring14miniaod/GJet_Pt-15to3000_Tune4C_13TeV_pythia8/MINIAODSIM/PU20bx25_POSTLS170_V5-v1/00000/FCD632B9-BA09-E411-B452-20CF3027A6BF.root',
       # '/store/mc/Spring14miniaod/GJet_Pt-15to3000_Tune4C_13TeV_pythia8/MINIAODSIM/PU20bx25_POSTLS170_V5-v1/00000/FE9C9DC8-A509-E411-9274-20CF3027A69C.root'
       ] );


secFiles.extend( [
               ] )

