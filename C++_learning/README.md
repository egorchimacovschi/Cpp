# C++_learning

A collection of standalone C++ exercises, numbered roughly in the order they were learned — from basic I/O and control flow, through arrays, pointers, and dynamic memory, up to structs, classes, and inheritance. Each `.cpp` file compiles to its own executable.

## ⚙️ Requirements

- `g++`
- `make`

## 🚀 Build & Run

```bash
make build      # compiles every .cpp into its own executable
./p19           # run a specific program
make clean      # deletes all compiled executables
```

## 🧱 Makefile

```makefile
CXX      = g++
CXXFLAGS = -Wall -Wextra

SRCS    := $(wildcard *.cpp)
TARGETS := $(SRCS:.cpp=)

build: $(TARGETS)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

.PHONY: build clean
```

## ✍️ Author

Maintained by [Egor Chimacovschi](https://github.com/egorchimacovschi).