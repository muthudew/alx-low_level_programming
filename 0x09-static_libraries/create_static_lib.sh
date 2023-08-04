#!/bin/bash
gcc -wall -wextra -werror -pedantic -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
