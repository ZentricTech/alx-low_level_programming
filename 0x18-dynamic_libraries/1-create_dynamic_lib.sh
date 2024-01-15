#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
