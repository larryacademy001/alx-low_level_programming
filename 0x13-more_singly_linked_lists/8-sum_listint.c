#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: Address of the first node of the list.
 * Return: if the list is empty, return 0 else return total sum
 **/

int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}

	return (sum_of_data);
}
