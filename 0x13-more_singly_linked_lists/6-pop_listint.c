#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: function pointer to head
 *
 * Return: head node’s data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int first_node;

	if (!*head)
		return (0);
	temp = *head;
	first_node = temp->n;
	*head = temp->next;
	free(temp);

	return (first_node);
}
