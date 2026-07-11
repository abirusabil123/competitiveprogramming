# competitiveprogramming cmake
C++14 Competitive Programming setup using CMake.

I prefer C++11/C++14 to limit features as C++ is already overwhelming.
I prefer C++14 the most as C++14 is C+11 with refinements.

Tested on Ubuntu, Windows 10, and Intel Mac. Use VS Codium.

On VSCodium open this CMake folder directly or else the folder structure will be incorrect.<br/>

## Prerequisites
```bash
# Install CMake and build tools
sudo apt update
sudo apt install cmake build-essential -y
```

## UI setup
For UI, install<br>
https://open-vsx.org/extension/vadimcn/vscode-lldb

To run with debugging.
```bash
F5
```
To run without debugging.
```bash
Ctrl+F5 
```

# Terminal setup

### Build
```bash
mkdir -p build && cd build
cmake ..
make
```

### Run
```bash
cd build
./cp                    # Output to terminal
./cp OUTPUT_TO_FILE     # Save output to file via flag
```

### Test
```bash
cd build
ctest                   # Run all tests
ctest -R Test0          # Run specific test
```

### Debug
```bash
cd build
sudo apt install cgdb -y
cgdb ./cp
```

#### Common GDB commands
| Command | Action |
|---------|--------|
| `break main` | Set breakpoint at main() |
| `break main.cpp:15` | Break at line 15 |
| `run` | Start program |
| `next` (or `n`) | Step over |
| `step` (or `s`) | Step into function |
| `print var` | Print variable value |
| `backtrace` (or `bt`) | Show call stack |
| `continue` (or `c`) | Continue execution |
| `quit` (or `q`) | Exit GDB |
