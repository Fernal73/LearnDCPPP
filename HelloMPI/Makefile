CXX = mpiicpc
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = HelloMPI
SOURCES = HelloMPI.cpp

all: build
.PHONY: all clean run build

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

run: 
	./$(EXE_NAME)

clean: 
	rm -f $(EXE_NAME) run.sh.* build.sh.*
