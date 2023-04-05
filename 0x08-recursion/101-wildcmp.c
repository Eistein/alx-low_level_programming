#include "main.h"

/**
 * wildcmp - takes input strings to Compare
 * @s1: pointer to string parameter number1
 * @s2: pointer to string parameter number2
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2++));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1++, s2) || wildcmp(s1, s2++));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1++, s2++));
	}
	return (0);
}
