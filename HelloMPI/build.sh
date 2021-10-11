#!/usr/bin/env bash
#PBS -q temp
#PBS -l nodes=6:ppn=2

source /opt/intel/inteloneapi/setvars.sh
make clean
make all
