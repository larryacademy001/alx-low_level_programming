#include <stdio.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: array elements
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array && size && action)
	{
		for (counter = 0; counter < size; counter++)
		{
			(*action)(array[counter]);
		}
	}
}
