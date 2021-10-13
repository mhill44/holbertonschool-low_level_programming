#include "holberton.h"
#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse
* @s: is the string to reverse
* return: void returns nothing
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
