#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long integer.
 * @index: index of the bit, starting from 0.
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter;

	if (n == 0 && index < 64)
		return (0);

	for (counter = 0; counter <= 63; n >>= 1, counter++)
	{
		if (index == counter)
		{
			return (n & 1);
		}
	}

	return (-1);
}
