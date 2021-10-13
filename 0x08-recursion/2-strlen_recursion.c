#include "holberton.h"
#include "main.h"
/**
* _strlen_recursion - function that gets the length of a string
* @s: is the string to get length of
** Return: returns the length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}
