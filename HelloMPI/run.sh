#!/usr/bin/env bash

cd $PBS_O_WORKDIR
echo Launching the parallel job from mother superior `hostname`...
mpirun -machinefile $PBS_NODEFILE ./HelloMPI
