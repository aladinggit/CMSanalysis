#from WMCore.Configuration import Configuration
#config = Configuration()
#config = Configuration()
from CRABClient.UserUtilities import config
config = config()
config.section_('General')
config.General.transferOutputs = True
config.General.requestName = 'SMP_ww'
#config.General.workarea = 'ww_analysis'
#config.General.workArea = 'crab_projects'
config.General.transferLogs = False


config.section_('JobType')
config.JobType.pluginName  = 'Analysis'
config.JobType.psetName    = './ConfFile_cfg.py'
#config.JobType.psetName    = '../gendumper_cfg.py'
config.JobType.outputFiles = ['WW_pair_production.root']
#config.JobType.pyCfgParams = ['outputFile=GEN_MC_ggHww.root']
#config.JobType.allowNonProductionCMSSW = True  # To fix cmssw releases
config.JobType.allowUndistributedCMSSW = True  # To fix cmssw releases


config.section_('Data')
#config.Data.inputDataset = '/GluGluHToWWTo2L2Nu_M125_13TeV_amcatnloFXFX_pythia8/RunIIWinter15GenOnly-MCRUN2_71_V1-v1/GEN'
config.Data.inputDataset = '/WWJTo2L2Nu_NNLOPS_TuneCUEP8M1_13TeV-powheg-pythia8/RunIISummer16NanoAODv7-PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/NANOAODSIM'
#config.Data.inputDataset = '/WWJTo2L2Nu_NNLOPS_TuneCUEP8M1_13TeV-powheg-pythia8/RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1/MINIAODSIM'
config.Data.splitting    = 'FileBased'  #'LumiBased'
config.Data.unitsPerJob  = 5  # Since files based, 10 files per job
config.Data.inputDBS     = 'global'
#config.Data.inputDBS     = 'https://cmsweb.cern.ch/dbs/prod/global/DBSReader/'
config.Data.outLFNDirBase       = '/store/user/hongyi/ww_data'
config.Data.publication = False
#config.Data.outLFN       = '/store/group/phys_higgs/cmshww/amassiro/RunII/MCstudies/'

config.section_('Site')
config.Site.storageSite = 'T2_CH_CERNBOX'
