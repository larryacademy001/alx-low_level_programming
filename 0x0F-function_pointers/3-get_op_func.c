#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: the passed operator
 * Return: Nothing
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int counter = 0;

	while (ops[counter].op)
	{
		if (strcmp(s, ops[counter].op) == 0)
		{
			return (ops[counter].f);
		}
		counter++;
	}
	printf("Error\n");
	exit(99);
}
