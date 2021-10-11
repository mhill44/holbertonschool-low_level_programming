#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* _strncat: function appends two strings together
* @src: string 1
* @dest: string 2
* @n: the number of bytes in src
* Return: returns a pointer to the new string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
l = _strlen(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
dest[l + i] = src[i];
dest[l + i] = '\0';
return (dest);
}
/**
* _strlen: function finds the length of a string
* @s: the string to check
* Return: returns the length of the string
*/
int _strlen(char *s)
{
int length;
length = 0;
for (length = 0; *s != '\0'; s++)
{
length++;
}
return (length);
}
