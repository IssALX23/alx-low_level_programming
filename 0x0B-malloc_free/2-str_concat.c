#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0, b = 0, i = 0, j = 0;
	char *arr;

	while (s1 != NULL && s1[a] != '\0')
		a++;
	while (s2 != NULL && s2[b] != '\0')
		b++;
	arr = malloc(sizeof(char) * (a + b) + 1);
	if (arr != NULL)
	{
		if (s2 == 0)
		{
			for (i = 0 ; i < a ; i++)
				arr[i] = s1[i];
		}
		else if (s1 == 0)
		{
			for (j = 0 ; j < b ; j++)
				arr[j] = s2[j];
		}
		else
		{
			for (i = 0; i < a ; i++)
				arr[i] = s1[i];
			for (j = 0; i < a + b ; j++, i++)
				arr[i] = s2[j];
		}
	}
	return (arr);
}
