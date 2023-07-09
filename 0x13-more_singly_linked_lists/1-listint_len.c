#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to a listint_t list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->n)
			count++;
		h = h->next;
	}
	return (count);
}
