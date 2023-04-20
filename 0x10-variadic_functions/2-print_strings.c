#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a sequence of strings
 * @separator: the string to print between strings
 * @n: the number of strings to print
 * @...: a variable-length list of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);
	printf("%s", (str == NULL ? "(nil)" : str));

	if (i < n - 1 && separator != NULL)
	printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
