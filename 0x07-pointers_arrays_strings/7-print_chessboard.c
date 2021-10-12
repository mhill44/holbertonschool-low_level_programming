#include "holberton.h"
#include "main.h"
/**
* print_chessboard: function that prints the chessboard
* @a: is a 2d array, containing the different chess pieces
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (j = 0; j < 8; j++)
{
for (i = 0; i < 8; i++)
_putchar (a[j][i]);
_putchar ('\n');
}
}
