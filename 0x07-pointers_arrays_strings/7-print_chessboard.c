#include "main.h"

/**
 * print_chessboard- Print chessboard from a 2D Array
 *
 * @a: 2D Array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			putchar(a[i][j]);
		}

		putchar("\n");
	}
}
