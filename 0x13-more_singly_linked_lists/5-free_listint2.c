#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *lp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		lp = (*head)->next;
		free(*head);
		*head = lp;
	}
}
