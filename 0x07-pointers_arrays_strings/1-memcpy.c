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
	char *ptr_dest = dest;
    char *ptr_src = src;

    while (n-- > 0)
    {
        *ptr_dest++ = *ptr_src++;
    }

    return dest;
}
