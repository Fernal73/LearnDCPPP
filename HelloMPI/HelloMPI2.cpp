/*
 * HelloMPI2.cpp
 * Copyright (C) 2021  <@localhost>
 *
 * Distributed under terms of the MIT license.
 */

#include <mpi.h>
#include <stdio.h>

int main(int /*argc*/, char ** /*argv*/) {
  int name_len, world_size, world_rank;
  char processor_name[MPI_MAX_PROCESSOR_NAME];
  // Initialize the MPI environment
  MPI_Init(NULL, NULL);
  // Get the number and rank of processes
  MPI_Comm_size(MPI_COMM_WORLD, &world_size);
  MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
  // Get the name of the processor
  MPI_Get_processor_name(processor_name, &name_len);
  // Print off a hello world message
  printf("I am from processor %s, rank %d out of %d processors\n",
         processor_name, world_rank, world_size);
  // Finalize the MPI environment.
  MPI_Finalize();
}
