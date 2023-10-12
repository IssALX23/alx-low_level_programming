#include "lists.h"
/**
 * dlistint_len - return number of elements of a dlistint_t list
 * @h: Doubly linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
