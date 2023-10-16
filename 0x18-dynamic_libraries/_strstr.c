#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: pointer to string
 * @needle: pointer to string
 *
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
