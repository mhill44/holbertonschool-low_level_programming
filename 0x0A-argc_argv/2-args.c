#include <stdio.h>
/**
* main - this is a program that prints its name
* @argc: is the argument count
* @argv: the argument values or a pointer to an array of strings
* Return: returns the name of the program
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
