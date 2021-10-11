#!/usr/bin/env bash

source /opt/intel/inteloneapi/setvars.sh
make fpga_emu -f Makefile.fpga
make cpu_fpga_emu -f Makefile.fpga
