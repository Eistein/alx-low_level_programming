#include "main.h"
/**
 * _memcpy - Copies n bytes from the memory area src to the mevimory area dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
		{
		if (ptr_dest && ptr_src)
		{
		*(ptr_dest + i) = *(ptr_src + i);
		}
		}

	return (dest);
}
