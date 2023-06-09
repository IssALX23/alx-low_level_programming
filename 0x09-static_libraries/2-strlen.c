#include "main.h"
/**
 * _strlen - entry point
 *
 * Description: returns the length of a string
 * @s:  input string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
