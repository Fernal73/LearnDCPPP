SHELL := /usr/bin/env bash
HOSTNAME := $(shell hostname)
LOCALHOST = localhost
INTEL_CXX = mpiicc
CXX = mpicc
CXXFLAGS = -O2 -g -std=c17

EXE_NAME = qsortmpi
SOURCES = qsortmpi.c

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
	mpirun --allow-run-as-root --hostfile hosts $(EXE_NAME)
else
	echo "Cannot execute run locally in ssh shell. Using qsub..."
	./submitqsub
endif

clean: 
	rm -f $(EXE_NAME) run.sh.* build.sh.*
