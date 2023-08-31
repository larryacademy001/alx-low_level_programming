#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: list of type listint_t to print
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	long int diff;

	if (head == NULL)
		exit(98);

	while (head)
	{
		diff = head - head->next;
		counter++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (counter);
}
