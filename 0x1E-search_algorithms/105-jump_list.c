#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a
 * sorted list of integers using the Jump search algorithm.
 *
 *
 * @list: pointer to the head of the list to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, jump_step, jump_size;
	listint_t *prev_node;

	if (list == NULL || size == 0)
		return (NULL);

	jump_size = (size_t)sqrt((double)size);
	index = 0;
	jump_step = 0;

	do {
		prev_node = list;
		jump_step++;
		index = jump_step * jump_size;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev_node->index, (int)list->index);

	for (; prev_node && prev_node->index <= list->index; prev_node = 
		prev_node->next)
	{
		printf("Value checked at index [%d] = 
			[%d]\n", (int)prev_node->index, prev_node->n);
		if (prev_node->n == value)
			return (prev_node);
	}

	return (NULL);
}
