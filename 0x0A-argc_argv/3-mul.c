#include "main.h"
#include <stdio.h>

/*
 * main - multiply two numbers received
 * @argc: argument counter
 * @argv: array of recieved argument
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int product, k, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	k = _atoi(argv[1]);
	p = _atoi(argv[2]);
	product = k * p;

	printf("%d\n", result);

	return (0);
}
