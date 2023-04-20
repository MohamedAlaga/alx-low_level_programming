#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar arc liball.a *.o
ranlib liball.a