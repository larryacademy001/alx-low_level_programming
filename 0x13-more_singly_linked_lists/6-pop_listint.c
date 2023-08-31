#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns the
 * head node’s data (n).
 * @head: Pointer to a list.
 * Return: if the linked list is empty return 0
 **/

int pop_listint(listint_t **head)
{
	listint_t *ptl;
	int nodeData;

	if (*head == NULL)
		return (0);

	ptl = *head;
	*head = ptl->next;
	nodeData = ptl->n;
	free(ptl);

	return (nodeData);
}
