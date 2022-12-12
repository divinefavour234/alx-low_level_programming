#!/bin/bash
gcc -fPIC -c *.c
gcc -g -shared -o liball.so *.o
