#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @p: the pointer to change to uppercase
* Return: returns uppercase letters
*/
char *string_toupper(char *p)
{
int i = 0;
while (p[i] != '\0')
{
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] = p[i] - 32;
}
i++;
}
return (p);
}
