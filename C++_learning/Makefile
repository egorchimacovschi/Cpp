CXX      = g++
CXXFLAGS = -Wall -Wextra

SRCS    := $(wildcard *.cpp)
TARGETS := $(SRCS:.cpp=)

build: $(TARGETS)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGETS)

.PHONY: build clean