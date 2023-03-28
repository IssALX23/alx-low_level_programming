#include <stdio.h>
#include "main.h"
/**
 * rev_string - entry point
 *
 * Description: function that reverses a string
 * @s:  input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0, i, length;
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}
	length = count;
	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

}
