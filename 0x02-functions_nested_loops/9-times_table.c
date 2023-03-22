#include "main.h"
/**
 * times_table - entry point
 *
 * Description: prints the 9 times table, starting with 0
 *
 * Return: void
*/
void times_table(void)
{
	int i, j, multi, div, rendu;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			multi = j * i;
			div = multi / 10;
			rendu = multi % 10;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (multi < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(rendu + '0');
			}
			else if (multi >= 10)
			{
				_putchar(div + '0');
				_putchar(rendu + '0');
			}
			else
			{
				_putchar(rendu + '0');
			}
		}
		_putchar('\n');
	}
}
