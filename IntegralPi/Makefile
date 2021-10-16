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
	$(INTEL_CXX) $(CXXFLAGS) -qopenmp -o $(EXE_NAME) $(SOURCES)

run: 
	./$(EXE_NAME)

clean: 
	rm -f $(EXE_NAME) run*.sh.* build*.sh.*
