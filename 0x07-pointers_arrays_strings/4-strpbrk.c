#include "holberton.h"
#include "main.h"
/**
* _strpbrk - function that locates the first occurrence in the string s
* of any of the bytes in the string accept
* @s: is the string to search
* @accept: is the bytes to search for
* Return: returns a pointer to the byte in s or NULL if no adequate byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (&s[i]);
}
return (0);
}
