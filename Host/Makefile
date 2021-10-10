CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = Host
CPU_EXE_NAME = CPU
SEL_EXE_NAME = Select
SOURCES = Host.cpp
CPU_SOURCES = CPU.cpp
SEL_SOURCES = Select.cpp

all: build build_cpu build_sel

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

build_cpu:
	$(CXX) $(CXXFLAGS) -o $(CPU_EXE_NAME) $(CPU_SOURCES)

build_sel:
	$(CXX) $(CXXFLAGS) -o $(SEL_EXE_NAME) $(SEL_SOURCES)

run: 
	./$(EXE_NAME)

run_cpu: 
	./$(CPU_EXE_NAME)

run_sel: 
	./$(SEL_EXE_NAME)

clean: 
	rm -f $(EXE_NAME) $(CPU_EXE_NAME) $(SEL_EXE_NAME)
