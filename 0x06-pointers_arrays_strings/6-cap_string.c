#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * Separators of words: space, tabulation, new line...
 * @s: input string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	char seperators[13] = {' ', ',', '.', ';', '"', '!',
		'?', '(', ')', '{', '}', '\n', '\t'};
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
		{
			s[i] -= 32;
		}
		for (j = 0 ; j < 13 ; j++)
		{
			if (s[i] == seperators[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (s);
}
