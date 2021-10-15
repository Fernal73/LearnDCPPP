#!/usr/bin/env bash
#PBS -l nodes=1:fpga_runtime:arria10:ppn=2
#PBS -l nodes=1:fpga_runtime:stratix10:ppn=2
source /opt/intel/inteloneapi/setvars.sh
make run_hw -f Makefile.fpga

