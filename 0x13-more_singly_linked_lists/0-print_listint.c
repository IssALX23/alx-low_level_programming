#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 * @h: pointer to head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0 ; h ; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
