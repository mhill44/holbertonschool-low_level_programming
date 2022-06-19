#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* op_add - funct adds together two integers (a + b)
* @a: is the integer a
* @b: is the integer b
* Return: returns the sum of the two integers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - funct subtracts two integers (a - b)
* @a: is the integer a
* @b: is the integer b
* Return: returns the difference of two integers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - funct multiplies two integers (a * b)
* @a: is the integer a
* @b: is the integer b
* Return: returns the product of two integers
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - funct divides two integers (a / b)
* @a: is the integer a
* @b: is the integer b
* Return: returns the result of the division of two integers
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - is the remainder in division (a % b)
* @a: is the integer a
* @b: is the integer b
* Return: returns the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
return (a % b);
}
