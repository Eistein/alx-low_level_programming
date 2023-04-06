#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to locate
 *
 * Return: pointer to the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int nlen = strlen(needle);

	if (nlen == 0)
		return (haystack); /* empty string matches everything */

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, nlen) == 0)
				return (haystack); /* found the substring */
		}

		haystack++;
	}

	return (NULL); /* substring not found */
}
