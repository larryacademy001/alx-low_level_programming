#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: First node address.
 * @index: index of the node that should be deleted.
 * Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *curNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
		return (1);
	}

	curNode = *head;
	for (counter = 0; counter < index - 1; counter++)
	{
		if (curNode->next == NULL)
			return (-1);
		curNode = curNode->next;
	}

	nextNode = curNode->next;
	curNode->next = nextNode->next;
	free(nextNode);

	return (1);
}
