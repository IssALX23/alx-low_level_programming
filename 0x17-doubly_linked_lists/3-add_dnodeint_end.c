#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: Doubly linked list
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	current = *head;
	if (*head)
	{
		while (current && current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	} else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
