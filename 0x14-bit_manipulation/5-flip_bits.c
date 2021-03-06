#include "holberton.h"
#include <stdlib.h>
/**
* flip_bits - a function that returns the number of bits you would need to
* flip to get from one number to another
* @n: this is the number to convert
* @m: this is the other number
* Return: returns the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int c = 0;
while (xor)
{
c += xor & 1;
xor = xor >> 1;
}
return (c);
}
