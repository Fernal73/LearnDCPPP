CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = Host
CPU_EXE_NAME = CPU
SOURCES = Host.cpp
CPU_SOURCES = CPU.cpp

all: build build_cpu

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

build_cpu:
	$(CXX) $(CXXFLAGS) -o $(CPU_EXE_NAME) $(CPU_SOURCES)

run: 
	./$(EXE_NAME)

run_cpu: 
	./$(CPU_EXE_NAME)

clean: 
	rm -f $(EXE_NAME) $(CPU_EXE_NAME)
