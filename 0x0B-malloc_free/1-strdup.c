#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * _strdup - copy the given string into a new allocated space in memory
 * @str: pointer to string
 *
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int count = 0, i = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	arr = malloc(sizeof(char) * count + 1);
	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < count)
		{
			arr[i] = str[i];
			i++;
		}
		return (arr);
	}
}
