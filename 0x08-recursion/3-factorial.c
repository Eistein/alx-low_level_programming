#include "main.h"

/**
 * factorial - gives the factorial of a n
 * @n: number to calculate the factorial of it
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
}
