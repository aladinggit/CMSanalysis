#!/usr/bin/env python
import ROOT as r
inputFile = '/eos/cms/store/group/phys_higgs/cmshww/arun/WW/MCStudies/WW_NNLOPS/WWJTo2L2Nu_NNLOPS_TuneCUEP8M1_13TeV-powheg-pythia8/crab_WW_NNLOPS/200807_095842/0000/WW_pair_production_1.root'
r.gSystem.CompileMacro('ana.C', 'gOk')
r.gSystem.Load('ana_C')

mytree =r.TChain('tree')
mytree.Add(inputFile)
print mytree
instance = r.ana(mytree)
instance.Loop()
