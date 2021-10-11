#!/usr/bin/env bash

#PBS -l nodes=4:ppn=2
cd $PBS_O_WORKDIR
echo Launching the parallel job from mother superior `hostname`...
mpirun -machinefile $PBS_NODEFILE ./HelloMPI
