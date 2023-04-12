#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int k, p, total_length = 0, pos = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
	result = NULL;
	}
	else
	{
	for (k = 0; k < ac; k++)
	{
	total_length += strlen(av[k]) + 1;
	}

	result = malloc(total_length * sizeof(char));
	if (result != NULL)
	{
	for (k = 0; k < ac; k++)
	{
	for (p = 0; av[k][p] != '\0'; p++)
	{
	result[pos] = av[k][p];
	pos++;
	}
	result[pos] = '\n';
	pos++;
	}
	result[pos] = '\0';
	}
	}

	return (result);
}
