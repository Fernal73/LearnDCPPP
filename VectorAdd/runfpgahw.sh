#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=1:fpga_runtime:arria10:ppn=2
source /opt/intel/inteloneapi/setvars.sh
make run_hw -f Makefile.fpga
