#include "holberton.h"
/**
* print_binary - funct prints the binary equivalent of a decimal number
* @n: is the number to print in binary
* Return: void returns nothing
*/
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
