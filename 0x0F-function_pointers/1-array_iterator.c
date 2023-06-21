#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 *		on each element of an array
 * @array: pointer to array
 * @sire: integer
 * @actionfunction pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
	return;
}
