#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n:  is the int number to be checked
 * Return: integer value
 */

int print_last_digit(int n)
{
	int last_number;

	last_number = n % 10;

	if (last_number < 0)
		last_number = last_number * -1;

	_putchar(last_number + '0');

	return (last_number);
}
