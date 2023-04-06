#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to search
 * @accept: pointer to string containing characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len = 0;
	int accept_char[256] = {0}; /* assuming ASCII character set */

	for (i = 0; accept[i] != '\0'; i++)
		accept_char[(unsigned int) accept[i]] = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept_char[(unsigned int) s[i]] == 0)
			return (len);
		len++;
	}

	return (len);
}
