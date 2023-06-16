#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	void *str;

	if (!nmemb || !size)
		return (NULL);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	_memset(str, 0, size * nmemb);

	return (str);
	free(str);
}
