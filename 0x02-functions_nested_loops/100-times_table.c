#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{

	int row = 0, col, result;

	if (n < 0 || n > 15)
		return;

	while (row <= n)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;
			if (col == 0)
				_putchar('0' + result);
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result - 100) / 10);
				_putchar('0' + result % 10);
			}
			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}
}
