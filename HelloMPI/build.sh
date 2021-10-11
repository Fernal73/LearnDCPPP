#!/usr/bin/env bash
#PBS -q batch

source /opt/intel/inteloneapi/setvars.sh
make clean
make all
