#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n;
	char *check;

	n = 1;
	check = (char *) &n;

	return ((int)*check);
}
