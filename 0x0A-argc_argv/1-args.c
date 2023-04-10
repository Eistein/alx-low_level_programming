#include "main.h"
#include <stdio.h>

/**
 * main - writes the number of arguments passed to the program
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
