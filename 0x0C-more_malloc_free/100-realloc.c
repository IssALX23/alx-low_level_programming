#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memcpy - copies memory area.
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes of the memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: poniter to void
 * @old_size: input integer
 * @new_size:  input integer
 *
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		str = malloc(new_size);
		if (!str)
			return (NULL);
		return (str);
	}

	str = malloc(new_size);
	if (!str)
		return (NULL);

	if (new_size > old_size)
		_memcpy(str, ptr, old_size);
	if (new_size < old_size)
		_memcpy(str, ptr, new_size);
	free(ptr);

	return (str);
	free(str);
}
