#include <stdio.h>
#include "main.h"
/**
 * _puts - entry point
 *
 * Description: prints a string, followed by a new line, to stdout
 * @str:  input string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, count = 0;

	while (str[count] != 0)
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
