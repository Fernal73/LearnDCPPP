CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = USM
IMP_EXE_NAME = USMImplicit
SOURCES = USM.cpp
IMP_SOURCES = USMImplicit.cpp

all: build build_imp
.PHONY: all clean run build build_imp

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

build_imp:
	$(CXX) $(CXXFLAGS) -o $(IMP_EXE_NAME) $(IMP_SOURCES)

run: 
	./$(EXE_NAME)
	./$(IMP_EXE_NAME)

clean: 
	rm -f $(EXE_NAME) $(IMP_EXE_NAME) run.sh.* build.sh.*
