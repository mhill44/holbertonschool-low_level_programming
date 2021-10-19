#include <stdio.h>
#include <stdlib.h>
/**
* main - main multiplies two numbers
* @argc: is the argument count
* @argv: is the argument values
* Return: returns result of the muliplication. 0 success 1 error
*/
int main(int argc, char *argv[])
{
int i;
int product = 1;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
product = product * atoi(argv[i]);
printf("%i\n", product);
return (0);
}
