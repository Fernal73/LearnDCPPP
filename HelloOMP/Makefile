SHELL := /usr/bin/env bash
HOSTNAME := $(shell hostname)
LOCALHOST = localhost
INTEL_CXX = icc
CXX = gcc
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = HelloOMP
MM_EXE_NAME = MatMul
SOURCES = HelloOMP.cpp
MM_SOURCES = MatMul.cpp

all: build build_mm
.PHONY: all clean run build build_mm

build:
ifeq ($(HOSTNAME),$(LOCALHOST))
	$(CXX) $(CXXFLAGS) -fopenmp -o $(EXE_NAME) $(SOURCES)
	termux-elf-cleaner $(EXE_NAME) > /dev/null
else
	$(INTEL_CXX) $(CXXFLAGS) -qopenmp -o $(EXE_NAME) $(SOURCES)
endif

build_mm:
ifeq ($(HOSTNAME),$(LOCALHOST))
	$(CXX) $(CXXFLAGS) -fopenmp -o $(MM_EXE_NAME) $(MM_SOURCES)
else
	$(INTEL_CXX) $(CXXFLAGS) -qopenmp -fopenmp-targets=spir64 -o $(MM_EXE_NAME) $(MM_SOURCES)
endif

run: 
ifeq ($(HOSTNAME),$(LOCALHOST))
	./$(EXE_NAME)
	./$(MM_EXE_NAME)
else
	./$(EXE_NAME)
	./$(MM_EXE_NAME)
	./submitqsub
endif

clean: 
	rm -f $(EXE_NAME) $(MM_EXE_NAME) run.sh.* build.sh.*
