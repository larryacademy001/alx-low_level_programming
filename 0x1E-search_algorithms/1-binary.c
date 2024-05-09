#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array
 * of integers using the Binary search algorithm
 *
 *
 * @array: pointer to the first element of the array to
 * search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t semi = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (semi && size % 2 == 0)
		semi--;

	if (value == array[semi])
		return ((int)semi);

	if (value < array[semi])
		return (recursive_search(array, semi, value));

	semi++;

	return (recursive_search(array + semi, size - semi, value) + semi);
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
