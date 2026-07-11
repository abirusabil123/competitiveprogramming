# competitiveprogramming
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

For UI, install // not available today<br/>
https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack<br/>
Which should also include<br/>
https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools

## Build
```bash
mkdir -p build && cd build
cmake ..
make
```

## Run
```bash
cd build
./cp                    # Output to terminal
./cp OUTPUT_TO_FILE     # Save output to file via flag
```

## Test
```bash
cd build
ctest                   # Run all tests
ctest -R Test0          # Run specific test
```

## Keyboard shortcuts
**Linux and Windows:**<br/>
CMake: Run Without Debugging (Ctrl+F5) for build and run.<br/>
CMake: Debug (Shift+F5) for debug.<br/>
To format a selection: Ctrl+A, Ctrl+K, Ctrl+F<br/>

**Mac:**<br/>
CMake: Run Without Debugging (Right shift+fn+F5) for build and run.<br/>
CMake: Debug (control+fn+F5) for debug.<br/>
To format a selection: CMD ⌘+A, CMD ⌘+K, CMD ⌘+F<br/>

<hr />

It is possible to run CTest via bottom navigation bar.

<hr />
