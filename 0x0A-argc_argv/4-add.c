#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - main adds positive numbers
* @argc: is the argument count
* @argv: is the argument values
* Return: return prints error and returns 1 if one of the number contains
* symbols that arent digits
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
unsigned int j, length;
char *s;
for (i = 1; i < argc; i++)
{
s = (argv[i]);
length = strlen(s);
for (j = 0; j < length; j++)
{
if (isdigit(*(s + j)) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%i\n", sum);
return (0);
}
