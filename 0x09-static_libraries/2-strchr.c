#include "holberton.h"
#include <stdio.h>
#include "main.h"
/**
* _strchr: function locates a character in a string
* @c: the character to look for in a string
* @s: the string
* Return: returns a pointer to the first occurance of the character c or NULL if character is not found
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
return (&s[i]);
if (s[i] == c)
return (&s[i]);
return (NULL);
}
