#include "main.h"

/**
 * get_length - count length of a string
 * @str: pointer to string
 *
 * Return: counter
 */
int get_length(char *str)
{
	int count = 0;

	if (str)
	{
		while (str[count])
			count++;
	}

	return (count);
}

/**
 * _strdup - function that returns a pointer to a newly
 *	allocated space in memory
 *	which contains a copy of the string given as a parameter
 * @str: pointer to a string
 *
 * Return: pointer to a copy of str
 */
char *_strdup(char *str)
{
	char *ptr;
	int count = 0, len;

	if (!str)
		return (NULL);

	len = get_length(str) + 1;
	ptr = (char *)malloc(len * sizeof(char));

	if (ptr)
	{
		while (count < len)
		{
			ptr[count] = str[count];
			count++;
		}
	}

	return (ptr);
}
