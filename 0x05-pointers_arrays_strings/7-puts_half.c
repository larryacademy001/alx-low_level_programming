#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int length, c1, c2;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (c1 = length / 2; str[c1] != '\0'; c1++)
		{
			_putchar(str[c1]);
		}
	} else if (length % 2)
	{
		for (c2 = (length - 1) / 2; c2 < length - 1; c2++)
		{
			_putchar(str[c2 + 1]);
		}
	}
	_putchar('\n');
}
