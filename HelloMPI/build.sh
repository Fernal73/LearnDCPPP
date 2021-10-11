#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=2:ppn=2

source /opt/intel/inteloneapi/setvars.sh
make clean
make all
