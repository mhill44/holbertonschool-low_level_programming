#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/*
 * swap_int - switch the values of two integers
 * @: the first integer to swap
 * b: the second integer to swap
 */
void swap_int(int *a, int *b)
{
 int tmp;
 tmp = *b;
 *b = *a;
 *a = tmp;
}
