#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: double pointer to the list_t list
 * @str: new string added in the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->i = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
