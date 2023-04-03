#include "main.h"
/**
 * _memset - Fill a block of memory with a specified value
 * @s: Pointer to the memory to fill
 * @b: Value to set
 * @n: Number of bytes to set to the value
 *
 * Return: Pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
	*ptr++ = b;
	}

	return (s);
}
