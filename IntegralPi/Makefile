SHELL := /usr/bin/env bash
HOSTNAME := $(shell hostname)
LOCALHOST = localhost
INTEL_CXX = icx
CXX = gcc
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = OpenMPPi
SOURCES = OpenMPPi.cpp

all: build
.PHONY: all clean run build

build:
ifeq ($(HOSTNAME),$(LOCALHOST))
	$(CXX) $(CXXFLAGS) -fopenmp -o $(EXE_NAME) $(SOURCES)
	termux-elf-cleaner $(EXE_NAME) > /dev/null
else
	$(INTEL_CXX) $(CXXFLAGS) -qopenmp -o $(EXE_NAME) $(SOURCES)
endif

run: 
ifeq ($(HOSTNAME),$(LOCALHOST))
	./$(EXE_NAME)
else
	./$(EXE_NAME)
	./submitqsub
endif

clean: 
	rm -f $(EXE_NAME) run*.sh.* build*.sh.*
