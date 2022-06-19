#include "holberton.h"
#include "main.h"
/**
* _memcpy: function copies n bytes from  memory area
* @dest: is destination of where the copy source will go
* @src: is source to copy from
* @n: is number of bytes to copy
* Return: returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
