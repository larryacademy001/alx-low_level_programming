#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: List Pointer.
 * Return: the number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *theList;
	unsigned int nn = 0;

	theList = h;
	while (theList)
	{
		printf("%d\n", theList->n);
		nn++;
		theList = theList->next;
	}

	return (nn);
}
