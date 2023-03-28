#include <stdio.h>
#include "main.h"
/**
 * puts_half - entry point
 *
 * Description:  prints half of a string, followed by a new line
 * @str:  input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0, i;
	long n;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 != 0)
	{
		n = (count - 1) / 2;
		for (i = n + 1 ; i < count ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = count / 2;
		for (i = n ; i < count ; i++)
		{
			_putchar(str[i]);
		}

	}
	_putchar('\n');
}
