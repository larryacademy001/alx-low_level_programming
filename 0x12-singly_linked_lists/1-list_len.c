#include "lists.h"

/**
 * list_len - function that returns the
 * number of elements in a linked list_t list
 * @h: List pointer
 * Return: number of elements
 **/

size_t list_len(const list_t *h)
{
	const list_t *p;
	unsigned int no_of_element = 0;

	p = h;
	while (p != NULL)
	{
		no_of_element++;
		p = p->next;
	}

	return (no_of_element);
}
