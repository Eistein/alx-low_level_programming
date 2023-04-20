#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * see example
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *p = format;
	int i_arg;
	char c_arg;
	float f_arg;
	char *s_arg;
	int num_args = 0;

	va_list ap;
	va_start(ap, format);

	while (*p)
	{
	switch (*p)
	{
	case 'c':
	c_arg = va_arg(ap, int);
	printf("%c", c_arg);
	num_args++;
	break;
	case 'i':
	i_arg = va_arg(ap, int);
	printf("%d", i_arg);
	num_args++;
	break;
	case 'f':
	f_arg = va_arg(ap, double);
	printf("%f", f_arg);
	num_args++;
	break;
	case 's':
	s_arg = va_arg(ap, char *);
	if (s_arg == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", s_arg);
	}
	num_args++;
	break;
	}
	p++;
	}

	va_end(ap);

	printf("\n");
}
