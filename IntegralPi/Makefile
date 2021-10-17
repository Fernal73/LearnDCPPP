SHELL := /usr/bin/env bash
HOSTNAME := $(shell hostname)
LOCALHOST = localhost
INTEL_CXX = icc
CXX = g++
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
	./$(EXE_NAME)

clean: 
	rm -f $(EXE_NAME) run*.sh.* build*.sh.*
