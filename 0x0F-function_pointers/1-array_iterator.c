#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 *		on each element of an array
 * @array: pointer to array
 * @size: integer
 * @action : function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || size <= 0 || !action)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);

}
