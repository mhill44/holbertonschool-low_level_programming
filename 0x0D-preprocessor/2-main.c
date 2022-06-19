#include <stdio.h>
/**
* main - program prints the name of the file it was compiled from
* Return: return always returns (0)
*/
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
