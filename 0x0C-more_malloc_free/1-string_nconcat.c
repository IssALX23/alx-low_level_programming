#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: integer
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0, b = 0, i = 0, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;
	str = malloc(sizeof(char) * (a + b) + 1);
	if (str)
	{
		for (i = 0 ; i < a ; i++)
			str[i] = s1[i];
		if (n > b)
			n = b;
		for (j = 0 ; j < n ; j++)
		{
			str[i] = s2[j];
			i++;
		}

		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);

}
