#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=2:gpu:ppn=2
source /opt/intel/inteloneapi/setvars.sh
make clean
make build
