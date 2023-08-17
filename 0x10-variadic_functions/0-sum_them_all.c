#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: int, no of arguments
 * Return: sum of parameters
 * return: 0 (if n equals 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argList;
	unsigned int counter, sum = 0;

	va_start(argList, n);

	if (n != 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			sum += va_arg(argList, unsigned int);
		}
	}
	else
	{
		return (0);
	}

	va_end(argList);

	return (sum);
}
