#include "search_algos.h"

/**
 * interpolation_search - function that searches for a
 * value in a sorted array of integers using the
 * Interpolation search algorithm
 * 
 *
 * @array: pointer to the first element of the array
 * to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t cur_pos, low, high;
	double tv_pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		tv_pos = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		cur_pos = (size_t)(low + tv_pos);
		printf("Value checked array[%d]", (int)cur_pos);

		if (cur_pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[cur_pos]);
		}

		if (array[cur_pos] == value)
			return ((int)cur_pos);

		if (array[cur_pos] < value)
			low = cur_pos + 1;
		else
			high = cur_pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
