#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int countStr = 0;

	while (s[countStr])
		countStr++;

	while (countStr--)
	{
		_putchar(s[countStr]);
	}

	_putchar('\n');

}
