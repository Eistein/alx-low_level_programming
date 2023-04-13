#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, copy_len;
	char *result;

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
	copy_len = (n < len2) ? n : len2;

	result = malloc(len1 + copy_len + 1);
	if (result == NULL)
	{
	return (NULL);
	}

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, copy_len);
	result[len1 + copy_len] = '\0';

	return (result);
}
