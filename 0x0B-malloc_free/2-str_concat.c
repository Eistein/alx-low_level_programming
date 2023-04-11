#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concanate
 * @s2: input two to concanate
 * Return: concanate of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t len1, len2;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	new_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
	return (NULL);
	}

	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, len2 + 1);

	return (new_str);
}
