#!/bin/bash
gcc -fPIC -c *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
