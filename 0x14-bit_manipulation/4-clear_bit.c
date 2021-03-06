#include "holberton.h"
#include <stdlib.h>
/**
* clear_bit - this is a function that sets the value of a bit to 0
* at a given index
* @index: is the index of the bit you want to set, starting from 0
* @n: this is the number to convert
* Return: 1 for success and neg 1 if an errors.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int flag = 1;
if (n == NULL)
return (-1);
if (index >= sizeof(unsigned long int) * 8)
return (-1);
flag = flag << index;
flag = ~flag;
*n = *n & flag;
return (1);
}
