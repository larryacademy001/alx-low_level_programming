#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_int - function to print int arguments
 * @argList: arguments from print_all function
 */

void print_int(va_list argList)
{
	printf("%d", va_arg(argList, int));
}

/**
 * print_float - function to print float arguments
 * @argList: arguments from print_all function
 */

void print_float(va_list argList)
{
	printf("%f", va_arg(argList, double));
}

/**
 * print_char - function to print char arguments
 * @argList: arguments from print_all
 */

void print_char(va_list argList)
{
	printf("%c", va_arg(argList, int));
}

/**
 * print_str - function to print string arguments
 * @argList: arguments from print_all
 */

void print_str(va_list argList)
{
	char *s = va_arg(argList, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
	va_list argList;
	int i = 0, j = 0;
	char *sep = "";

	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};


	va_start(argList, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(argList);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(argList);
}
