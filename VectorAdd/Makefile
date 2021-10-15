CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

BUFFER_EXE_NAME = vaddbuffers
BUFFER_SOURCES = vaddbuffers.cpp

USM_EXE_NAME = vaddusm
USM_SOURCES = vaddusm.cpp

all: build_buffers build_usm
.PHONY: build_buffers build_usm run run_buffers run_usm all clean

build_buffers:
	$(CXX) $(CXXFLAGS) -o $(BUFFER_EXE_NAME) $(BUFFER_SOURCES)

build_usm:
	$(CXX) $(CXXFLAGS) -o $(USM_EXE_NAME) $(USM_SOURCES)

run: run_buffers run_usm 

run_buffers: 
	./$(BUFFER_EXE_NAME)

run_usm: 
	./$(USM_EXE_NAME)

clean: 
	rm -f $(BUFFER_EXE_NAME) $(USM_EXE_NAME) run.sh.* build.sh.*
