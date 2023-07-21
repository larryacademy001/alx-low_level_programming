#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

	unsigned int i = 0;

	if  (n < 0)
	{
		i = -n;
		_putchar('-');
	}

	else
	{
		i = n;
	}

	if (i / 10 != 0)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
