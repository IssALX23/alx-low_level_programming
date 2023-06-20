#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *a = d->name, *b = d->owner;
	float c = d->age;

	if (!d)
		return;
	if (!d->name)
		a = "(nil)";
	if (!d->owner)
		b = "(nil)";
	if (!d->age)
		printf("Name: %s\nAge: (nil)\nOwner:%s\n", a, b);
	printf("Name: %s\nAge: %f\nOwner:%s\n", a, c, b);
}
