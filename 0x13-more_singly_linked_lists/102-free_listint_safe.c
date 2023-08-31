#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t listlength = 0;
	int diff;
	listint_t *tempNode;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			tempNode = (*h)->next;
			*h = tempNode;
			listlength++;
		}
		else
		{
			*h = NULL;
			listlength++;
			break;
		}
	}

	*h = NULL;

	return (listlength);
}
