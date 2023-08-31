#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: Pointer to a list.
 * Return: number of elements.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *theList;
	unsigned int i = 0;

	theList = h;
	while (theList)
	{
		i++;
		theList = theList->next;
	}

	return (i);
}
