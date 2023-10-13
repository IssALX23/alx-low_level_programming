#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: Doubly linked list
 *
 * Return : frred list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
