CXX = dpcpp
CXX_OMP = icpx
CXXFLAGS = -O2 -g -std=c++17
CXXFLAGS_OMP = -fiopenmp -fopenmp-targets=spir64 -D__STRICT_ANSI__ -g -o

EXE_NAME = MatrixMulOMP
SOURCES = MatrixMulOMP.cpp
EXE_NAME_DP = MatrixMulDP
SOURCES_DP = MatrixMulDP.cpp

all: build build_dp
.PHONY: all clean run build

build:
	$(CXX_OMP) $(CXXFLAGS_OMP) -o $(EXE_NAME) $(SOURCES)

build_dp:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME_DP) $(SOURCES_DP)

run: 
	./$(EXE_NAME)
	./$(EXE_NAME_DP)

clean: 
	rm -f $(EXE_NAME) $(EXE_NAME_DP) run.sh.* build.sh.*
