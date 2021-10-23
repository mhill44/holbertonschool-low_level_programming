#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c -shared -o libdynamic.so
gcc *.o -shared -o liball.so
