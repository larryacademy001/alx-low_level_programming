#include <stdio.h>

/**
 * print_array - unction that prints n elements of an
 * array of integers, followed by a new line.
 *
 * @a: array of integers to print
 * @n: size of array
 *
 * Return: always void
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		printf("%d, ", a[counter]);
		counter++;
	}
	putchar('\n');
}
