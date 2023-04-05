#include "main.h"

int read_pal(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (read_pal(s, 0, _strlen(s)));
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * read_pal - read the characters recursively for palindrome
 * @s: string to read
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int read_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (read_pal(s, i + 1, len - 1));
}
