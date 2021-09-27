#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *The output of the program should be:
The string Last digit of, followed by
n, followed by
the string is, followed by
if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", str, n, l);
	else if (l < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l);

	return (0);
}
// output: [Running] cd "/var/folders/tq/4rsnm_z1113g3dnd_7bwy7t80000gn/T/" && gcc tempCodeRunnerFile.c -o tempCodeRunnerFile && "/var/folders/tq/4rsnm_z1113g3dnd_7bwy7t80000gn/T/"tempCodeRunnerFile
//Last digit of 868009538 is 8 and is greater than 5
//[Done] exited with code=0 in 1.013 seconds
