#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: the address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tl, *tl2;

	tl = malloc(sizeof(listint_t));

	if (tl == NULL)
		return (NULL);

	tl->n = n;
	tl->next = NULL;

	if (*head == NULL)
	{
		*head = tl;
		return (tl);
	}

	tl2 = *head;
	while (tl2->next)
		tl2 = tl2->next;

	tl2->next = tl;

	return (tl);
}
