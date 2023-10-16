#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
/**
 * _strpbrk - function that searches a
 *	string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: pointer to character
 */
char *_strpbrk(char *s, char *accept)
{
	int S = 0, A;

	while (s[S] != '\0')
	{
		for (A = 0; accept[A] != '\0'; A++)
		{
			if (s[S] == accept[A])
			{
				return (&(s[S]));
			}
		}
		S++;
	}
	return (NULL);
}
