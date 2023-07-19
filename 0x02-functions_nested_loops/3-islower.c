#include "main.h"

/**
 * _islower - Entry Point
 *
 * Description -  checks for lowercase character.
 *
 * @c: character to check the case
 *
 * Return: 1 if lower, 0 else
 */

int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
