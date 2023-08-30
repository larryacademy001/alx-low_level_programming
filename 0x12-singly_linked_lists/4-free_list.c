#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the list to be freed.
 */

void free_list(list_t *head)
{
	list_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head->str);
		free(head);
		head = nextNode;
	}
}
