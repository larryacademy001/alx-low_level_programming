#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in
 * a sorted array of integers using the Jump search
 * algorithm
 *
 * 
 * @array: pointer to the first element of the array
 * to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, jump_size, counter , prev_index;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = (int)sqrt((double)size);
	counter  = 0;
	prev_index = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		counter ++;
		prev_index = index;
		index = counter * jump_size;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev_index, index);

	for (; prev_index <= index && prev_index < (int)size; prev_index++)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
		if (array[prev_index] == value)
			return (prev_index);
	}

	return (-1);
}
