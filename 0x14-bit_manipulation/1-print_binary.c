#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the unsigned long integer to be coverted.
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
