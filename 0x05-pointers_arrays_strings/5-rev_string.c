#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void returns nothing
 */
void rev_string(char *s)
{
int length;
char *t = s;
int i;
for (length = 0; *t != '\0'; t++)
length++;
t--;
length--;
for (i = 0; i <= length / 2; i++)
{
char tmp = *t;
*t = *s;
*s = tmp;
t--;
s++;
}
}
