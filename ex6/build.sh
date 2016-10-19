#!/bin/bash

echo building as standalone
gcc -o helloWorld helloWorld.c main.c

echo executing
./helloWorld

echo compile as position independent code
gcc -c helloWorld.c -o helloWorld.o -fPIC

echo create shared library
gcc -shared -o libhelloWorld.so helloWorld.o

echo compiling as dynamically linked application
gcc  -L. main.c -o dynamic_helloWorld -lhelloWorld

echo trying to execute
./dynamic_helloWorld

echo fixing Library path
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`
echo executing again
./dynamic_helloWorld

echo creating static library
ar rcs libhelloWorld.a helloWorld.o
echo linking against static library
gcc -static main.c -L. -lhelloWorld -o static_helloWorld
echo executing statically linked library
./static_helloWorld
