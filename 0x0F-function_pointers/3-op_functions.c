#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - fuction addition
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtraction
 * @a: first number
 * @b: second
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fucntion multiplication
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function division
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - functon modulus
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
