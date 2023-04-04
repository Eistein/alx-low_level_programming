#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: pointer to the pointer to set.
 * @to: pointer to the char array to set the pointer to.
 */
void set_string(char **s, char *to)
{
	int len = strlen(to) + 1;
	*s = malloc(len * sizeof(char));
	if (*s == NULL)
	{
	fprintf(stderr, "Error: Memory allocation failed.\n");
	exit(1);
	}
	strncpy(*s, to, len);
}
