#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n:  input integer
 *
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *mem;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;
	mem = malloc(sizeof(char) * (len1 + n + 1));
	if (mem == NULL)
		return (NULL);
	for (i = 0 ; s1 != NULL && i < len1 ; i++)
		mem[i] = s1[i];
	for (j = 0 ; s2 != NULL && j < n ; j++)
		mem[i + j] = s2[j];
	mem[len1 + n] = '\0';
	return (mem);
	free(mem);
}
