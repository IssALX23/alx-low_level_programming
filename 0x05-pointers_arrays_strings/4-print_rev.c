#include <stdio.h>
#include "main.h"
/**
 * print_rev - entry point
 *
 * Description: prints a string, in reverse, followed by a new line
 * @s:  input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0, i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = count - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
