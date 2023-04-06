#include "main.h"

int test_sqrt(int n, int k);

/**
 * _sqrt_recursion - checks for the natural square root of a number
 * @n: number to find the square root of it
 *
 * Return: resulting square root of a given number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test_sqrt(n, 0));
}

/**
 * test_sqrt - recurses to find the natural square root of a number
 * @n: number to find the sqaure root of it
 * @k: iterator
 *
 * Return: the resulting the natural square root of a number
 */
int test_sqrt(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (test_sqrt(n, k + 1));
}
