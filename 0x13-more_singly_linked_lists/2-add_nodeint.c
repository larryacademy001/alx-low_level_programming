#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: the address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *theList;

	theList = malloc(sizeof(listint_t));

	if (theList == NULL)
		return (NULL);

	theList->n = n;
	theList->next = *head;
	*head = theList;

	return (*head);
}
