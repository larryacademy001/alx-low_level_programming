#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array elements
 * @size: array size
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index first element cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array && cmp)
	{
		for (counter = 0; counter < size; counter++)
		{
			if (cmp(array[counter]) != 0)
			{
				return (counter);
			}
		}
	}
	return (-1);
}
