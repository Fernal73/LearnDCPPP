#!/usr/bin/env bash
#PBS -q batch
#PBS -l nodes=2:ppn=2

cd $PBS_O_WORKDIR
pwd
echo Launching the parallel job from mother superior $(hostname)...
echo "$PBS_NODEFILE"
cat "$PBS_NODEFILE"
mpirun -machinefile $PBS_NODEFILE -prepend-rank -prepend-pattern ./qsortmpi
