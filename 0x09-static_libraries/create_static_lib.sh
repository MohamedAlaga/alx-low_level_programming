#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rsc liball.a 
ar rsc liball.a *.o
