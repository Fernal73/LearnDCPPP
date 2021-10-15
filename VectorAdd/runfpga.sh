#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=1:fpga_compile:ppn=2
source /opt/intel/inteloneapi/setvars.sh
make run_emu -f Makefile.fpga
