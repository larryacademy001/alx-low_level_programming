#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description - prints the alphabet, in lowercase, followed by a new line.
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
