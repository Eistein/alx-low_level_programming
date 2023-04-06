#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in the string @s of any of the bytes
 * in the string @accept.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in @accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}

		s++;
	}

	return (NULL);
}
