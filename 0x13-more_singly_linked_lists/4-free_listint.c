#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *list1, *list2;

	list1 = head;
	while (list1 != NULL)
	{
		list2 = list1->next;
		free(list1);
		list1 = list2;
	}
}
