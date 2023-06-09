#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a sequence of integers
 * @separator: the string to print between numbers
 * @n: the number of integers to print
 * @...: a variable-length list of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	num = va_arg(args, int);
	printf("%d", num);

	if (i < n - 1 && separator != NULL)
	printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
