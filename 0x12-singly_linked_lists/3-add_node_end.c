#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: list first node address.
 * @str: string address to be inserted in the new node.
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *p2;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);

	p->str = strdup(str);

	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	while (str[len])
		len++;

	p->len = len;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	p2 = *head;

	while (p2->next)
		p2 = p2->next;

	p2->next = p;
	return (p);
}
