#!/usr/bin/env bash
source /opt/intel/inteloneapi/setvars.sh
make run_emu -f Makefile.fpga
make cpu_run_emu -f Makefile.fpga
