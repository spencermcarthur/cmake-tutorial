# cmake-tutorial
A simple tutorial on getting started with CMake.

## What is CMake?
According to their [website](https://cmake.org/):

> CMake is an open source, cross-platform family of tools designed to build, test, and package software.

In simple terms, CMake is a software package designed to manage all steps involved in compiling C/C++ software across different operating systems and architectures. It makes the development process simpler by abstracting the specifics of different compilers, linkers, and architectures into a unified scripting language so you can spend more time coding and less time setting up your system build tools. For example, if you are part of team where some members prefer Windows and others prefer Mac, CMake can make your codebase portable across different operating systems in a near-painless way. CMake also provides a framework for testing code as well as packaging it for deployment.

## Installing CMake
- Debian/Ubuntu: `apt install cmake`
- macOS: `brew install cmake`
- Windows/other: https://cmake.org/download/

## Building this repository
```
mkdir build
cd build
cmake ..
cmake --build .
```
