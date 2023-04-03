#include "main.h"
/*
 * _memcpy - copies n bytes from the memory area src to the memory area dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (p_dest && p_src)
		{
			*(p_dest + i) = *(p_src + i);
		}
	}

	return (dest);
}
