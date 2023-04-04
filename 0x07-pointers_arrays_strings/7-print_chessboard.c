#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a 2D array of characters representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%c ", a[i][j]);
			j++;
		}
		printf("\n");
	i++;
	}
}
