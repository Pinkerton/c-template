# C Template Project

This is a template project for getting started with new C projects quickly. It includes generic CMake build files that should work out of the box for simple projects, as well as Google Test for writing unit tests. It does not show how to include external dependencies at the moment, but there are other projects on GitHub that demonstrate how to accomplish that. 


Basic usage
====
```bash
git clone https://github.com/Pinkerton/c-template.git
cd c-template
mkdir build && cd build
cmake ..
make
# executables created in ../target
../target/PROJECT        # to run the program
../target/PROJECT_tests  # to run unit tests
```

Where `PROJECT` is your project name defined in the root `CMakeLists.txt`.

CMake
====

CMake is configured here to naively glob together all of the source and header files in `/src` and `/include` respectively. By default, it will compile files with debug symbols and all unit tests when you run `make`. This has been all I've needed for doing homework sets and small projects, but you will need to configure it to do release / optimized builds.

For now, `make test` does not work because it seems to require all tests to be defined in `tests/CMakeLists.txt`, when I'd rather it run all tests automatically without explicitly defining them there. This should be possible to do, but running `target/PROJECT_tests` also has the "correct" behavior. I think this is related to messing with `CMAKE_RUNTIME_OUTPUT_DIRECTORY`. 

Googletest
======

Googletest is a unit testing framework for C and C++. There is a sample tests file in `/tests` that can be used to test code written in either language.

The library itself lives under `/vendor`.

Resources
====

 * [File globbing in CMake](http://stackoverflow.com/questions/1027247/best-way-to-specify-sourcefiles-in-cmake)
 * [Using googletest](http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html)
 * [Project structure and configuration source](https://github.com/ebenoist/libblinkstick)

Known Issues
====

 I **believe** this rebuilds your source files for both the your main() and for the unit tests, when it should ideally build a static library that both can link against.

License
====

MIT. See LICENSE for details.
