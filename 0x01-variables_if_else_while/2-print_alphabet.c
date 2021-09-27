#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main is always entry point
 * Write a program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
		printf("\n");

	return (0);
}
