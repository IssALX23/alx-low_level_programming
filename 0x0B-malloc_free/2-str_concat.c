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
 * str_concat - function that concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int c1 = 0, c2 = 0, len1 = 0, len2 = 0;

	if (s1 && s1[len1] != '\0')
		len1 = get_length(s1);
	if (s2 && s2[len2] != '\0')
		len2 = get_length(s2);
	ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (ptr)
	{
		if (s1 && !s2)
		{
			while (c1 < len1)
			{
				ptr[c1] = s1[c1];
				c1++;
			}
		}
		else if (s2 && !s1)
		{
			while (c1 < len2)
			{
				ptr[c1] = s2[c1];
				c1++;
			}
		}
		else
		{
			for ( ; c1 < len1 ; c1++)
				ptr[c1] = s1[c1];
			for ( ; c1 < len1 + len2 ; c1++, c2++)
				ptr[c1] = s2[c2];
		}
		ptr[c1] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
