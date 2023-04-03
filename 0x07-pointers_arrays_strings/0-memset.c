#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: input character
 * @n: input integer
 *
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; ((unsigned int)i) < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
