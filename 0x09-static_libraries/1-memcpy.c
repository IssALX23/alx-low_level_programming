#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to character
 * @src: pointer to character
 * @n: input integer
 *
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count;

	for (count = 0 ; src[count] != '\0' && ((unsigned int)count) < n ; count++)
	{
		dest[count] = src[count];
	}
	while (((unsigned int)count) < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
