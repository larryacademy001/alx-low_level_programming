#include "main.h"

/**
 * binary_to_con_numnt - function that converts a binary number to an
 * unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_con_numnt(const char *b)
{
	unsigned int con_num;
	int char_len, num_base_2;

	if (!b)
		return (0);

	con_num = 0;

	for (char_len = 0; b[char_len] != '\0'; char_len++)
		;

	for (char_len--, num_base_2 = 1; char_len >= 0; char_len--, num_base_2 *= 2)
	{
		if (b[char_len] != '0' && b[char_len] != '1')
		{
			return (0);
		}

		if (b[char_len] & 1)
		{
			con_num += num_base_2;
		}
	}

	return (con_num);
}
