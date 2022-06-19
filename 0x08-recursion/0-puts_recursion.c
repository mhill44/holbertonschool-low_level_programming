#include "holberton.h"
#include "main.h"
/**
* _puts_recursion - function prints a string recursively
* @s: is the string to print
* return: void returns nothing
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
if (*s != '\0')
{	_putchar(*s);
_puts_recursion(s + 1);
}
}
