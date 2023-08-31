#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: First node address.
 * @idx: index of the list where the new node
 * should be added. Index starts at 0.
 * @n: Data of the new node.
 * Return: the address of the new node, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempNode;
	unsigned int counter = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		tempNode = *head;
		for (; counter < idx - 1 && tempNode != NULL; counter++)
			tempNode = tempNode->next;

		if (tempNode == NULL)
			return (NULL);
	}

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = tempNode->next;
	tempNode->next = newNode;

	return (newNode);
}
