#!/bin/bash
gcc -c *.c
ar arc liball.a *.o
ranlib liball.a