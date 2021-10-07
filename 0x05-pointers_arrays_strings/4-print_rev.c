#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_rev - print a string in reverse
 * @s: the string to print
 * Return: void returns nothing
 */
void print_rev(char *s)
{
int length;
for (length = 0; *s != '\0'; s++)
length++;
s--;
length--;
for (; length >= 0; length--, s--)
_putchar(*s);
_putchar('\n');
}
