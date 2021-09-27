#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main is always the Entry point
 * should pprint alphabet backwards with new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
		putchar('\n');

	return (0);
}
