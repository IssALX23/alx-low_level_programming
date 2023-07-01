#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to first node
 * @str: pointer to data to add
 *
 * Return: pointer to the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *new_node = malloc(sizeof(list_t)),
		*last_node;

	while (str[counter])
		counter++;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = counter;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
