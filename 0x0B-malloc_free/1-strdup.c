#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
	{
	return (NULL);
	}

	len = strlen(str) + 1;
	new_str = (char *) malloc(len * sizeof(char));

	if (new_str == NULL)
	{
	return (NULL);
	}

	memcpy(new_str, str, len);
	return (new_str);
}
