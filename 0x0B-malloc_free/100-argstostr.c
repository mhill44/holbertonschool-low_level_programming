#include <stdlib.h>
#include "holberton.h"
/**
* _strlen - function returns the length of a string
* @s: is the string to check
* Return: returns the length of the string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
* argstostr - function concantenate all the command line arguments
* @ac: is the number of arguments
* @av: is the argument values
* Return: returns pointer to new allocated space holding the string or
* else NULL, if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, length = 0, c = 0;
char *cat;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
length = length + _strlen(av[i]);
cat = malloc(sizeof(char) * (length + ac + 1));
if (cat == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
char *temp = av[i];
for (j = 0; temp[j] != '\0'; j++)
{
cat[c] = temp[j];
c++;
}
cat[c] = '\n';
c++;
}
cat[c] = '\0';
return (cat);
}
