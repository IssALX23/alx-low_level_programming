#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j, len = sizeof(*a) / sizeof(*a[0]);

	for (i = 0 ; i < len ; i++)
	{
		for (j = 0 ; j < len ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
