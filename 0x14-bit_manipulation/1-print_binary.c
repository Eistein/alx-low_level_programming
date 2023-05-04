#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask = 1UL << bit_count;

	while (!(n & mask) && bit_count > 0)
	{
	mask >>= 1;
	bit_count--;
	}

	for (; bit_count >= 0; bit_count--)
	{
	putchar((n & mask) ? '1' : '0');
	mask >>= 1;
	}
}
