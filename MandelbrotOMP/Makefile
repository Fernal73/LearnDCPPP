SHELL := /usr/bin/env bash
INTEL_CXX = icpc
INTEL_CXXFLAGS = -O2 -g -std=c++17 -fiopenmp -fopenmp-targets=spir64 -fsycl

EXE_NAME = mandelbrot
SOURCES = mandelbrot.cpp main.cpp timer.cpp

all: build
.PHONY: all clean run build

build:
	$(INTEL_CXX) $(INTEL_CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

run: 
	./$(EXE_NAME)

clean: 
	rm -f $(EXE_NAME) run*.sh.* build*.sh.*
