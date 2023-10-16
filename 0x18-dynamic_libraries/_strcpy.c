#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
/**
 * _strcpy - entry point
 *
 * Description:  copies the string pointed to by src
 *		including the terminating null byte (\0)
 *		to the buffer pointed to by dest
 * @dest:  input pointer to dest
 * @src:  input pointer to src
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while (src[count] != '\0')
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)
	{
		dest[i] = src[i];
	}
	dest[count] = '\0';
	return (dest);
}
