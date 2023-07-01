#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t
 * @h: pointer to a node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
