#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* _strcat: function appends two strings
* @src: the first string
* @dest: the second string
* Return: returns dest
*/
char *_strcat(char *dest, char *src)
{
int len = _strlen(dest);
int i;
for (i = 0; src[i] != '\0'; i++)
dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}
/**
* _strlen - length of a string
* @s: the string to check
* Return: returns length of the string
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
