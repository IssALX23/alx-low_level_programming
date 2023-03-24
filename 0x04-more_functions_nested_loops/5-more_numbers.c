#include "main.h"
#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 9
 *              Do not print 0 and 14
 *
 * Return: void
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
			{
				_putchar(48 + j / 10);
			}
			_putchar(48 + j % 10);
		}
		_putchar('\n');
	}
}
