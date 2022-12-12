#!/bin/bash

# Create an array containing the names of all .c files in the current directory
files=(*.c)

# Compile each .c file into an object file
for file in "${files[@]}"
do
  gcc -c -fPIC "$file"
done

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o
