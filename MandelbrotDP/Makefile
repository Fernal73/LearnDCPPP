CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = mandelbrot
USM_EXE_NAME = mandelbrotusm
SOURCES = main.cpp

all: build build_usm
.PHONY: all clean run build

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

build_usm:
	$(CXX) $(CXXFLAGS) -DMANDELBROT_USM -o $(USM_EXE_NAME) $(SOURCES)

run: 
	./$(EXE_NAME)
	./$(USM_EXE_NAME)

clean: 
	rm -f $(EXE_NAME) $(USM_EXE_NAME) run.sh.* build.sh.*
