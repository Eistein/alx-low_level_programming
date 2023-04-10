#include <stdio.h>
#include "main.h"

/**
 * _putchar - display character c to stdout
 * @c:character to print
 *
 * Return: 1 on success
 * On error: return -1 and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

