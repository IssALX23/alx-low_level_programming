#!/bin/bash
gcc -shared -o my_lib.so -fPIC printfFunc.c
LD_PRELOAD=/$PWD/my_lib.so ./gm 9 8 10 24 75 9
