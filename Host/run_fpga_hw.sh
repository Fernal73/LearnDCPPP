#!/usr/bin/env bash
source /opt/intel/inteloneapi/setvars.sh
make run_hw -f Makefile.fpga
make cpu_run_hw -f Makefile.fpga
make sel_run_hw -f Makefile.fpga
make que_run_hw -f Makefile.fpga
