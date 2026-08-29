# Cpp

A collection of C++ exercises tracking a progression from basic syntax to introductory object-oriented programming. All programs live in `C++_learning` and are standalone — each `.cpp` file compiles to its own executable.

## 📁 Structure

Files are numbered roughly in the order they were learned:

| Range | Topics |
|---|---|
| `p1`–`p2` | Basic I/O: `cin`, `cout`, `getline`, string input |
| `p3` | Math functions (`<cmath>`: `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor`) |
| `p4` | Type aliases (`using`) |
| `p5` | Control flow: `if`/`else`, `switch` |
| `p6` | Random numbers (`<ctime>`, `rand`/`srand`) |
| `p7` | Functions, global variables |
| `p8`–`p11` | Arrays, `sizeof`, STL `fill`, multidimensional arrays |
| `p9` | Range-based `for` loops, string concatenation |
| `p12`–`p13` | Pass-by-reference, pointers vs. references |
| `p14`–`p15` | Dynamic memory: `new`/`delete`, dynamic arrays |
| `p16` | Recursion |
| `p17` | Function templates, generic/`auto` return types |
| `p18` | `struct`s |
| `p19`–`p22` | Classes: members, methods, constructors, encapsulation (getters/setters) |
| `p23`–`p24` | Inheritance (single and multiple derived classes) |

## ⚙️ Requirements

- Linux (or WSL / any Unix-like environment)
- `g++` supporting C++17
- `make`

```bash
g++ --version
make --version
```

## 🚀 Build & Run

Build every program:

```bash
make build
```

Each `.cpp` file compiles into an executable with the same name (no extension) in the same folder, e.g. `C++_learning/p19.cpp` → `C++_learning/p19`.

Run a specific program:

```bash
./C++_learning/p19
```

Build just one file:

```bash
make C++_learning/p19
```

Remove all compiled binaries:

```bash
make clean
```

## 🧱 Makefile

```makefile
CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRC_DIR  = C++_learning
SRCS    := $(wildcard $(SRC_DIR)/*.cpp)
TARGETS := $(SRCS:.cpp=)

build: $(TARGETS)

$(SRC_DIR)/%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

.PHONY: build clean
```

## 📌 Notes

- Programs are independent exercises — none of them link against or depend on each other.
- Compiled binaries are currently committed alongside the source files. Consider adding a `.gitignore` (e.g. matching filenames with no extension, or moving sources into `src/` and binaries into `bin/`) to keep the repo source-only going forward.
- This repository is a learning log and grows as new C++ topics are covered.

## ✍️ Author

Maintained by [Egor Chimacovschi](https://github.com/egorchimacovschi).