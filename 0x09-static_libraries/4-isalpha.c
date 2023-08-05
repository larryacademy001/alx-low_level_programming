#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character parameter to check
 *
 * Return: 1 if letter, 0 else
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
