#include "holberton.h"
#include "main.h"
/**
* _sqrt_recursion - function returns the natural square root of a number
* @n: is a number
* Return: returns -1 if no root, otherwise return n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (n);
return (_sqrt_helper(n, 1));
}
/**
* _sqrt_helper - function returns a sq root of a number
* @n: is a number
* @i: is the number to check
* Return: returns n, otherwise, returns -1
*/
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}
