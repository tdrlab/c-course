#!/bin/bash

echo building with default parameters..
gcc -o helloWorld helloWorld.c
echo building with -ansi...
gcc -ansi -o helloWorld helloWorld.c
