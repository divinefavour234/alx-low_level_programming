#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -fPIC -std=gnu89 -c *.c 
gcc -shared -o *.o liball.so
