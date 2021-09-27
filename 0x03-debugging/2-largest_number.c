#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
* main function prints the largest of 3 integers
* Return IS ALWAYS 0
*/

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a & b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (0);
}
