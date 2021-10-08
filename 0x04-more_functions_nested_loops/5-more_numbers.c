#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * Return: void returns nothing
 */
void more_numbers(void)
{
int i, b;
for (i = 0; i < 10; i++)
{
for (b = 0; b < 15; b++)
{
if (b > 9)
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
}
_putchar('\n');
}
}
