#include <stdio.h>
#include "main.h"
/**
 * puts2 - entry point
 *
 * Description: prints every other character of a string
 * starting with the first character, followed by a new line
 * @str:  input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0, i;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0 ; i < count ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
