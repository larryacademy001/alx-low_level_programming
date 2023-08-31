#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: linked list to search for
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *firstNode = head;
	listint_t *secondNode = head;

	if (!head)
		return (NULL);

	while (firstNode && secondNode && secondNode->next)
	{
		secondNode = secondNode->next->next;
		firstNode = firstNode->next;
		if (secondNode == firstNode)
		{
			firstNode = head;
			while (firstNode != secondNode)
			{
				firstNode = firstNode->next;
				secondNode = secondNode->next;
			}
			return (secondNode);
		}
	}

	return (NULL);
}
