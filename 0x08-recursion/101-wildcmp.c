#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1++, s2) || wildcmp(s1, s2++));
		}
		else if (*s1++ != *s2++)
		{
			return (0);
		}
	}

	while (*s2 == '*')
	{
		s2++;
	}

	return (*s1 == *s2);
}
