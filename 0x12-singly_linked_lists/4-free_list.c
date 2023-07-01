#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *now = head;
	list_t *new;

	while (now != NULL)
	{
		new = now->next;
		free(now->str);
		free(now);
		now = new;
	}
}
