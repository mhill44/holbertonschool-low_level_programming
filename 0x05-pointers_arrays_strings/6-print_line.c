#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* print_line - print a straight line using underscores
* @n: the number of underscores to print
* return: void returns nothing
*/
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
_putchar('_');
_putchar('\n');
}
