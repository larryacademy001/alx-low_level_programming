#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: to separate numbers
 * @n: int, undefined parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int counter;

	va_start(argList, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%i", va_arg(argList, int));
		if (counter != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(argList);

	putchar('\n');
}
