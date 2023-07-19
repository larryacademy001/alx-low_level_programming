#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return:void
 */

void times_table(void)
{

	int row = 0;
	int col;
	int multi;

	while (row <= 9)
	{
		col = 0;

		while (col <= 9)
		{
			multi = row * col;

			if (col == 0)
			{
				_putchar('0' + multi);
			}
			else if (multi < 10)
			{
				_putchar(' ');
				_putchar('0' + multi);
			}
			else
			{
				_putchar('0' + multi / 10);
				_putchar('0' + multi % 10);
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}

		_putchar('\n');
		row++;
	}

}
