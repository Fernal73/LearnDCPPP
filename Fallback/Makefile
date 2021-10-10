CXX = dpcpp
CXXFLAGS = -O2 -g -std=c++17

EXE_NAME = Fallback
SOURCES = Fallback.cpp

all: build

build:
	$(CXX) $(CXXFLAGS) -o $(EXE_NAME) $(SOURCES)

run: 
	./$(EXE_NAME)

clean: 
	rm -f $(EXE_NAME)
