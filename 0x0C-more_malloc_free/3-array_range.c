#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: input integer
 * @max: input integer
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i, size;
	int *mem;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	mem = malloc(sizeof(int) * size);
	if (!mem)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		*(mem + i) = min + i;
	return (mem);
	free(mem);
}
