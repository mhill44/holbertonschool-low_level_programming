#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* print_diagonal - prints a diagnoal (\) line
* @n: the number of (\) to print
* Return: void returns nothing
*/
void print_diagonal(int n)
{
int i, b;
for (i = 1; i  <= n; i++)
{
for (b = 1; b < i; b++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
