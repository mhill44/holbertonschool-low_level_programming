#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main is always entry point
 * program that prints all possible combinations of 2 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 100; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
