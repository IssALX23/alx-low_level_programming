#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: Doubly linked list
 *
 * Return: sum of all
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
