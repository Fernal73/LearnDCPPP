#!/usr/bin/env bash
#PBS -l nodes=1:fpga_compile:ppn=2
source /opt/intel/inteloneapi/setvars.sh
make -f Makefile.fpga clean
make -f Makefile.fpga hw
