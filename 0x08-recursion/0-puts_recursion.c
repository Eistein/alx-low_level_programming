#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - function that continues recursively until null character
 * @s: inputted string
 * Return: Always 0 on (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
