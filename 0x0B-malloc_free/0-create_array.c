#include <stdlib.h>
#include "holberton.h"
/**
* create_array - function creates an array of characters
* @size: is the size of an array
* @c: is the character that will be initialized
* Return: returns the point to the array, or NULL if it faills
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
if (size == 0)
return (NULL);
ar = malloc(sizeof(char) * size);
if (ar == NULL)
return (NULL);
for (i = 0; i < size; i++)
ar[i] = c;
return (ar);
}
