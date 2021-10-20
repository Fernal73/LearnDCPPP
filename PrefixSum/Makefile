CXX = dpcpp
CXXFLAGS = -g -O3 -fsycl -std=c++17
LINKFLAGS = -lOpenCL -lsycl

EXE_NAME = PrefixSum
SOURCES = PrefixSum.cpp

all: 
	./submitqsub

.PHONY: all clean run build

build:
	$(CXX) $(CXXFLAGS)  $(LINKFLAGS) -o $(EXE_NAME) $(SOURCES)

run: 
	./$(EXE_NAME) 21 47

clean: 
	rm -f $(EXE_NAME) run.sh.* build.sh.*
