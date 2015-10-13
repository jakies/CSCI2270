#!/bin/bash

# Jacob Selig (jacob.selig@colorado.edu)
# TA - Guohui Ding
#
# This is the master executable for my assignment.
# Run the program from this directory by typing the following
#
# ./start.sh

clang++ src/main.cc -o build -fpermissive -Wformat -std=c++11 && ./build;
rm build;
