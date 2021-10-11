#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=1:gpu:ppn=2
source /opt/intel/inteloneapi/setvars.sh
make run
make run_cpu
make run_sel
make run_que
