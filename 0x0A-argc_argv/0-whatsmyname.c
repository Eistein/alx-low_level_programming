#include "main.h"
#include <stdio.h>

/**
 * main - writes the name of the program
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
