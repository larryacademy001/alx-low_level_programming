#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string separator
 * @n: int, no of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int counter;
	char *c;

	va_start(argList, n);

	for (counter = 0; counter < n; counter++)
	{
		c = va_arg(argList, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(argList);

	putchar('\n');
}
