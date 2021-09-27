#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * ALWAYS RETURN 0 step 5 - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char a;

    for (a = 'a'; a <= 'z' ; a++)
    {
        if (a != 'e' && a != 'q')
            putchar(a);
    }
    putchar('\n');
    return (0);
}