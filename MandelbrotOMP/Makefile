EXTRA_CFLAGS :=
ifdef perf_num
	EXTRA_CFLAGS += -D PERF_NUM
endif
CXX = icpc
CFLAGS = -O3 -std=c++11 -ipo -qopenmp
LIBFLAGS := -qopenmp
SRCDIR := .
BUILDDIR := .
TARGET := $(BUILDDIR)/Mandelbrot

icpc: $(TARGET)

SOURCES := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.cpp=.o))

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	$(CXX) $^ $(LIBFLAGS) -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) -c $(CFLAGS) $(EXTRA_CFLAGS) -o $@ $< 

run: $(TARGET)
ifeq ($(shell uname -s),Darwin)
	@export  DYLD_LIBRARY_PATH="$(LIBRARY_PATH)"; ./$(TARGET) $(option) < 0
else
	./$(TARGET) $(option) < 0
endif

clean:
	@echo " Cleaning..."
	@rm -fr $(BUILDDIR) $(TARGET) 2>/dev/null || true
	@rm -f *.png

.PHONY: clean run

