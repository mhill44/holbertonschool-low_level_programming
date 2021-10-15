#include "holberton.h"
#include "main.h"
#include <stdio.h>
/**
* print_diagsums - function prints the sum of two diagonals of given sq matr of ints
* @a: is the square matrix of integers
* @size: is the size of the square matrix
* Return: void returns nothing
*/
void print_diagsums(int *a, int size)
{
int i, j, k;
j = k = 0;
for (i = 0; i < size; i++)
{
j += a[i * (size + 1)];
k += a[(i + 1) * (size - 1)];
}
printf("%d, %d\n", j, k);
}
