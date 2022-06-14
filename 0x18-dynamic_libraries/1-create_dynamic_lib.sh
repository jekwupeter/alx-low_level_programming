#!/bin/bash
gcc -g -fPIC *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
