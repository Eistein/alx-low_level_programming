#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all parameters.
 *
 * @n: Number of parameters to sum.
 * @...: Variable number of parameters to sum.
 *
 * Return: 0 for n== 0 or sum of parameters if not so.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int arg = va_arg(args, int);
	sum += arg;
	}

	va_end(args);

	return (sum);
}
