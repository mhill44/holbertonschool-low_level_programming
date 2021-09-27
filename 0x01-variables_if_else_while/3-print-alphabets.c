#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main is always the Entry point
 * print alphabet backwards/forwards/then capitalized and then new line
 * Return Always is 0 (Success)
 */
int main(void)
{
    char x;

    for (x = 'a'; x <= 'z'; x++)
        putchar(x);
    for (x = 'A'; x <= 'Z'; x++)
        putchar(x);
        putchar('\n');

    return (0);
}
