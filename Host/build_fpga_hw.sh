#!/usr/bin/env bash

source /opt/intel/inteloneapi/setvars.sh
make fpga_hw -f Makefile.fpga
make cpu_fpga_hw -f Makefile.fpga
