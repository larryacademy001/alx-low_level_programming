#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: Address of the first node in a list.
 * @index: index of the node, starting at 0.
 * Return: if the node does not exist, return NULL else return Node Address
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	for (counter = 0; counter < index; counter++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
