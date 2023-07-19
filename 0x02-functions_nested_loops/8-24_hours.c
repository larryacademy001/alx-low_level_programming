#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void (always)
 */

void jack_bauer(void)
{
	int h10, h1, m10, m1;

	h10  = 0;

	while (h10 <= 2)
	{
		h1 = 0;

		while (h1 <= 9)
		{
			if (h1 > 3 && h10 == 2)
				break;

			m10 = 0;

			while (m10 <= 5)
			{
				m1 = 0;

				while (m1 <= 9)
				{
					_putchar(h10 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m10 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
					m1++;
				}

				m10++;
			}

			h1++;
		}

		h10++;
	}
}
