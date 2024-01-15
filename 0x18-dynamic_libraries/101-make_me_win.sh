#!/bin/bash
gcc -shared -o _putchar.so -fPIC _putchar.c
LD_PRELOAD=./_putchar.so ./gm 9 8 10 24 75 9
