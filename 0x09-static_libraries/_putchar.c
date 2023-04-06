#include "main.h"
#include <unistd.h>
/*
 * _putchar - display c to stdout
 * @c: The character to print
 *
 * Return: 1 for success.
 * On error: return -1, and errno is set
 */
int _putchar(char c)
	{
		return(write(1,&c, 1));
	}
