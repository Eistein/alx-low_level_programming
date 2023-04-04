#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: pointer to the beginning of the matrix.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i = 0;

	while (i < size)
	{
	sum1 += a[i * size + i];
	sum2 += a[(i + 1) * size - i - 1];
	i++;
	}

	printf("Sum of the first diagonal: %d\n", sum1);
	printf("Sum of the second diagonal: %d\n", sum2);
}
