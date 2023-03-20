#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: always 0
*/
int main(void)
{
	int x, y, z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			for (z = 0 ; z < 10 ; z++)
			{
				if (x != y && y != z && z != x && x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x == 7 && y == 8 && z == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}

	}
	return (0);
}
