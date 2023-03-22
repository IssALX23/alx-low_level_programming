#include <stdio.h>
#include "main.h"
/**
 * print_times_table - entry point
 *
 * Description: prints the n times table, starting with 0
 * @n: input integer
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i, j, div;

	if (n >= 0 && n < 15)
	{
		for  (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				div = i * j;
				if (j != 0 && div < 10 && i <= n)
				{
				printf("  %d", div);
				}
				else if (j != 0 && div < 100 && i <= n)
				{
				printf(" %d", div);
				}
				else
				{
				    printf("%d", div);
				}
				if (j < n)
					printf(", ");
			}
			printf("\n");
		}
	}
}
