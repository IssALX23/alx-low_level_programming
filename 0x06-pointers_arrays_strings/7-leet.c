#include "main.h"
#include <stdio.h>
/**
 * leet - unction that encodes a string into 1337
 * @s: inout string
 *
 * Return: string
 */
char *leet(char *s)
{
	int x = 0, y = 0;
	char letter[5][3] = {{'a', 'A', '4'}, {'e', 'E', '3'}, {'o', 'O', '0'},
		{'t', 'T', '7'}, {'l', 'L', '1'}};

	while (s[x] != '\0')
	{
		for (y = 0; y < 5 ; y++)
		{
			if (s[x] == letter[y][0] || s[x] == letter[y][1])
			{
				s[x] = letter[y][2];
			}
		}
		x++;
	}
	return (s);
}
