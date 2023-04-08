#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -I. ./*.c
ar rcs liball.a ./*.o
ranlib liball.a
