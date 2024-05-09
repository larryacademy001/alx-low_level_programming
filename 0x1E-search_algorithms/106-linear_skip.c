#include "search_algos.h"

/**
 * linear_skip - function that searches for a value
 * in a sorted skip list of integers.
 *
 *
 * @list: pointer to the head of the list to search in
 * @value: the value to search for
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go_trav;

	if (list == NULL)
		return (NULL);

	go_trav = list;

	do {
		list = go_trav;
		go_trav = go_trav->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go_trav->index, go_trav->n);
	} while (go_trav->express && go_trav->n < value);

	if (go_trav->express == NULL)
	{
		list = go_trav;
		while (go_trav->next)
			go_trav = go_trav->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go_trav->index);

	while (list != go_trav->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
