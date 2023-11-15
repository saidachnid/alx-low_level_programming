#!/bin/bash
gcc -shared -o libjackpot.so -fPIC libjackpot.c
export LD_PRELOAD=./libjackpot.so:$LD_LIBRARY_PATH
