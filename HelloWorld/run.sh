#!/usr/bin/env bash
#PBD -q batch
#PBS -l nodes=1:gpu:ppn=2

source /opt/intel/inteloneapi/setvars.sh
make run
