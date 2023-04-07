#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string
 * @c: input character
 *
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int count = 0;
	char *charSaved;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			charSaved = &(s[count]);
			return (charSaved);
		}
		count++;
	}
	if (s[count] == c)
		return (&s[count]);
	return (NULL);
}
