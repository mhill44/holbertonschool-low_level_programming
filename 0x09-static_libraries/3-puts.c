#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _puts - prints a string
 * @str: the string to print
 * Return: void returns nothing
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
_putchar(*str);
_putchar('\n');
}
