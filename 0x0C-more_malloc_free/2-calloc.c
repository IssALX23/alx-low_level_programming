#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input integer
 * @size: input integer
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (!nmemb || !size)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	_memset(mem, 0, size * nmemb);
	return (mem);
	free(mem);
}
