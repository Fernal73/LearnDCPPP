CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = MatrixMulOMP
SOURCES = MatrixMulOMP.cpp
EXE_NAME_DP = MatrixMulDP
SOURCES_DP = MatrixMulDP.cpp

all: build build_dp
.PHONY: all clean run build

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

build_dp:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME_DP) $(SOURCES_DP)

run: 
	./$(EXE_NAME)
	./$(EXE_NAME_DP)

clean: 
	rm -f $(EXE_NAME) $(EXE_NAME_DP) run.sh.* build.sh.*
