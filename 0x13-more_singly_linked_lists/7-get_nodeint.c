#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to node
 * @index: index of the node
 *
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *nth_node = NULL;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
		{
			nth_node = head;
			break;
		}
		head = head->next;
		count++;
	}
	return (nth_node);
}
