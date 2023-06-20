#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;

	temp = malloc(sizeof(dog_t));

	if (!temp)
		return (NULL);

	temp->name = name;
	temp->owner = owner;
	temp->age = age;

	return (temp);
}
