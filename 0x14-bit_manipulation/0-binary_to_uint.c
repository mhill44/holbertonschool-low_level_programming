#include <stdio.h>
#include "holberton.h"
/**
* _strlen - this is a function that finds a length of a string
* @s: this is the string to check
* Return: returns the length of the string
*/
int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
* binary_to_uint - is a function that converts a binary number to u.s.
* @b: this is a pointer to a string of 0 and 1 chars
* Return: returns the converted number, or 0 if there is one or more 
* chars in the string b that is not 0 or 1 or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
int len, i = 1;
unsigned int uint = 0, base = 1;
if (b == NULL)
return (0);
len = _strlen(b);
for (; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
uint += base;
base *= 2;
}
return (uint);
}
