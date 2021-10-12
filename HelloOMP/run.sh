#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=2:ppn=2

cd $PBS_O_WORKDIR
pwd
echo Launching the parallel job from mother superior $(hostname)...
./HelloOMP
