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
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", a);
	
	if (d->age || d->age == 0)
		printf("Age: %f\n", c);
	else
		printf("Age: (nil)\n");

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", b);
}
