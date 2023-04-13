#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digits - Checks if a string is composed only of digits.
 *
 * @str: The string to check.
 *
 * Return: 1 if @str is composed only of digits, 0 otherwise.
 */
int is_digits(char *str)
{
	while (*str)
	{
	if (!isdigit(*str))
	return (0);
	str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive integers.
 *
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The result of @num1 times @num2.
 */
int multiply(int num1, int num2)
{
	int result = 0;

	while (num2 > 0)
	{
	if (num2 & 1)
	result += num1;
	num1 <<= 1;
	num2 >>= 1;
	}

	return (result);
}

/**
 * main - Multiplies two positive numbers.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if the program was executed successfully, 98 otherwise.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
