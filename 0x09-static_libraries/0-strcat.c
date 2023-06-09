#include "main.h"
/**
 * _strcat - entry point
 *
 * Description:  function that concatenates two strings
 * @dest:  input pointer to dest
 * @src:  input pointer to src
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0, idest = 0, isrc = 0, count;

	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[isrc] != '\0')
	{
		isrc++;
	}
	count = idest + isrc;
	for (i = idest ; i < count ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[count] = '\0';
	return (dest);
}
