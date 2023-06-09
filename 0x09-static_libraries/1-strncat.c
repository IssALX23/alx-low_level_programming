#include "main.h"
/**
 * _strncat - entry point
 *
 * Description:  function that concatenates two strings
 * @dest:  input pointer to dest
 * @src:  input pointer to src
 * @n: number of characters
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0, idest = 0;

	while (dest[idest] != '\0')
	{
		idest++;
	}
	for (i = idest ; src[j] != '\0' && j < n ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
