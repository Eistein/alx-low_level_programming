#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers provided as command-line arguments
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int k, p, product;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	k = atoi(argv[1]);
	p = atoi(argv[2]);
	product = k * p;

	printf("%d\n", product);

	return (0);
}
