#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers provided as command-line arguments
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int num1, num2;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
	for (num2 = 0; argv[num1][num2]; num2++)
	{
		if (!isdigit(argv[num1][num2]))
		{
		printf("Error\n");
		return (1);
		}
	}
	result += atoi(argv[num1]);
	}

	printf("%d\n", result);

	return (0);
}
