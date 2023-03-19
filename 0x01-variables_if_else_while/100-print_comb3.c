#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: always 0
*/
int main(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
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
	return (0);
}
