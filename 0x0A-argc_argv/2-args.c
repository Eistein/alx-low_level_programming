#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives including the1st one
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return:  0 on Success
 */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}

	return (0);
}
