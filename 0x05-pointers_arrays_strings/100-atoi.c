#include "main.h"

/**
 * _atoi - onvert a string to an integer.
 * @s: string to be converted
 * Return: converter integer r
 */

int _atoi(char *s)
{
	int i;
	int r = 0;
	int sign = -1;
	int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10;
			r -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
	}
	r = sign * r;
	return (r);
}
