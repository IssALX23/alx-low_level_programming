#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 * @h: pointer to head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	for (counter = 0 ; h != NULL ; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
i	}
	return (counter);
}
