#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(0)
{
int n;
// i am telling c im making an integer variable and calling it n
srand(time(0));
n = rand() - RAND_MAX / 2;
// just makes the random number have a value and says waht to do . from my 
//understanding rand is the function built in to c for random numbers
//heres what i want the program to do

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	