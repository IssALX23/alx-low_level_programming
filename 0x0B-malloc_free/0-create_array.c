#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 *		and initializes it with a specific char
 * @size: unsigned integer
 * @c: string
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			while (i < size)
			{
				arr[i] = c;
				i++;
			}
		}
	}
	return (arr);
}
