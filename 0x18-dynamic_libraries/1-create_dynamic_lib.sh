#!/bin/bash
gcc -c -fPIC $(ls *.c | grep -v "main")
gcc -shared -o liball.so *.o
