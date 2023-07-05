#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t list
 * @h: pointer to head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
const listint_t *current;
size_t counter;

temp = h;
for (counter = 0 ; current ; counter++)
{
printf("%d\n", current->n);
current = current->next;
}
return (counter);
}

