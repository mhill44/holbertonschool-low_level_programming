#include "holberton.h"
#include "main.h"
/**
* _memset: function fills the first n bytes of the memory area pointed to by s
* @s: the memory to fill
* @b: the constant byte
* @n: the number of bytes need to fill
* Return: returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
