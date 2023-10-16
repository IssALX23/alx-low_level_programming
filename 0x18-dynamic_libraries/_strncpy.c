#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
#include "main.h"
/**
 * _strncpy - entry point
 *
 * Description:  function that copies a string
 * @dest:  input pointer to dest
 * @src:  input pointer to src
 * @n: number of characters
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
