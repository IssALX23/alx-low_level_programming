#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: function pointer to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1 = *head, *temp2;

	if (!temp1)
		return;

	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	*head = NULL;
}
