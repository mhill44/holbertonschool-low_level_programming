#include "holberton.h"
#include "main.h"
/**
* is_prime_helper - "helper function" to find the prime number
* @n: is the input integer
* @i: /'s' the integer by 2 to check if it's a prime number
* Return: returns 1 if the int is a prime num., otherwise, return 0
*/
int is_prime_helper(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i - 1));
}
/**
* is_prime_number - prints the prime number
* @n: an integer
* Return: 1 if it's a prime number and 0, if otherwise
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (is_prime_helper(n, n / 2));
}
