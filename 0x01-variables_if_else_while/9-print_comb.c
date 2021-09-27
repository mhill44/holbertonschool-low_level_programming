#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main is the Entry point
 * This program prints all combinations of single digit integers
 * Return is A lways 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
