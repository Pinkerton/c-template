# C Template Project

This is a template project for getting started with new C projects quickly. It includes generic CMake build files that should work out of the box for simple projects, as well as googletest for writing unit tests. It does not show how to include external dependencies at the moment, but there are other projects on GitHub that demonstrate that. 


Basic usage
====
 * Clone this repo
 * `cd c-template`
 * `mkdir build && cd build`
 * `cmake ..`
 * `make`
 * ~executables created in `../targets`~
 * `../targets/run_project` or `../targets/run_tests` (where `project` = your project name defined in the root `CMakeLists.txt`.

CMake
====

CMake is configured here to naively glob together all of the source and header files in `/src` and `/include` respectively. By default, it will compile files with debug symbols and all unit tests when you run `make`. This has been all I've needed for doing homework sets and small projects, but it will need to be configured to do release / optimized builds eventually.

For now, `make test` does not work because it seems to require all tests to be defined in `tests/CMakeLists.txt`, when I'd rather it run all tests automatically without explicitly defining them there. This should be possible to do, but running `targets/run_tests` also has the "correct" behavior. I think this is related to messing with `CMAKE_RUNTIME_OUTPUT_DIRECTORY`. 

Googletest
======

Googletest is a unit testing framework for C and C++. There is a sample C++ tests file in `/tests` that can be used to test code written in either language.

Resources
====

 * [File globbing in CMake](http://stackoverflow.com/questions/1027247/best-way-to-specify-sourcefiles-in-cmake)
 * [Using googletest](http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html)
 * [Project structure and configuration source](https://github.com/ebenoist/libblinkstick)

License
====

MIT. See LICENSE for details.
