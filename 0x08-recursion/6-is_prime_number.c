#include "main.h"

int evaluate_prime(int n, int j);

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (evaluate_prime(n, n - 1));
}

/**
 * evaluate_prime - evaluation of the primitivity of n reculsively
 * @n: number to check
 * @j: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int evaluate_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (evaluate_prime(n, j - 1));
}
