#include "holberton.h"
#include "main.h"
/**
* _pow_recursion - function returns the value of x raised to the power of y
* @y: is the exponent and if it's < 0, return -1
* @x: is the base value
* Return: returns y, which is the power value
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
