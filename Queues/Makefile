CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = RAW
EXE2_NAME = WARWAW
SOURCES = RAW.cpp
SOURCES2 = WARWAW.cpp

all: build build_warwaw
.PHONY: all clean run build build_warwaw

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

build_warwaw:
	$(CXX) $(CXXFLAGS) -o $(EXE2_NAME) $(SOURCES2)

run: 
	./$(EXE_NAME)
	./$(EXE2_NAME)

clean: 
	rm -f $(EXE_NAME) $(EXE2_NAME) run.sh.* build.sh.*
