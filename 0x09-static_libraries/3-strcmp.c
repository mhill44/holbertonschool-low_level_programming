#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
* Return: returns if string 1 < string 2, it is negative
* and  if string 1 > string 2, it is positive. Prints 0
* if equal.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1)
{
(*s1 != *s2);
{
break;
}
s1++;
s2++;
}
return (*s1 - *s2);
}
