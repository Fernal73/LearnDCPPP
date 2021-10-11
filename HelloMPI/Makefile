SHELL := /usr/bin/env bash
HOSTNAME := $(shell hostname)
LOCALHOST = localhost
INTEL_CXX = mpiicpc
CXX = mpicc
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = HelloMPI
SOURCES = HelloMPI.cpp

all: build
.PHONY: all clean run build

build:
ifeq ($(HOSTNAME),$(LOCALHOST))
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)
	termux-elf-cleaner $(EXE_NAME) > /dev/null
else
	$(INTEL_CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)
endif

run: 
ifeq ($(HOSTNAME),$(LOCALHOST))
	mpirun --allow-run-as-root --hostfile hosts -np 5 $(EXE_NAME)
else
	mpirun -np 2 -ppn 2 ./$(EXE_NAME)
endif

clean: 
	rm -f $(EXE_NAME) run.sh.* build.sh.*
