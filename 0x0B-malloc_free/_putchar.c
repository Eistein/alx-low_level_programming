#include "main.h"
#include <unistd.h>
/**
 * _putchar - display character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, return -1, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
