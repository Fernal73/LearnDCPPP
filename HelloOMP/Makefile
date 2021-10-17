SHELL := /usr/bin/env bash
HOSTNAME := $(shell hostname)
LOCALHOST = localhost
INTEL_CXX = icx
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
	termux-elf-cleaner $(MM_EXE_NAME) > /dev/null
else
	$(INTEL_CXX) $(CXXFLAGS) -qopenmp -fopenmp-targets=spir64 -o $(MM_EXE_NAME) $(MM_SOURCES)
endif

run: 
	./$(EXE_NAME)
	./$(MM_EXE_NAME)
endif

clean: 
	rm -f $(EXE_NAME) $(MM_EXE_NAME) run*.sh.* build*.sh.*
