#!/bin/bash
gcc -fPIC -c *.c
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
