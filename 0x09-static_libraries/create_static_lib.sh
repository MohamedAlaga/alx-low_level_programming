#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar rsc liball.a 
ar rsc liball.a *.o
