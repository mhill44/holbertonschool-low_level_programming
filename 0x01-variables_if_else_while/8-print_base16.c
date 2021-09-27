#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
//inside main, print 0-9 and also assign letters so
 // [a-f]
 //Return: (0) Success
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
