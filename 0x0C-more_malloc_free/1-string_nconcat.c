#include <stdlib.h>
#include "holberton.h"
/**
* _strlen - function Returns the length of a string
* @s: is The string to check
* Return: returns The length of the string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
* string_nconcat - function concats two strings
* @s1: is string 1
* @s2: is string 2
* @n: is the number of bytes from s2 to use
* Return: returns a pointer for the allocated memory for the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, size1, size2, j;
char *cat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size1 = _strlen(s1);
if (n >= (unsigned int) _strlen(s2))
size2 = _strlen(s2);
else
size2 = n;
cat = malloc(sizeof(char) * (size1 + size2 + 1));
if (cat == NULL)
return (NULL);
for (i = 0; i < size1; i++)
{
cat[i] = s1[i];
}
for (j = 0; j < size2; j++)
{
cat[i] = s2[j];
i++;
}
cat[i] = '\0';
return (cat);
}
