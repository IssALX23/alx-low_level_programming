#include <stdio.h>
#include "main.h"
/**
 * print_array - entry point
 *
 * Description:  prints n elements of an array of integers
 *		followed by a new line
 * @a: pointer to array
 * @n: input integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", a[i]);
			if (i == n - 1)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("\n");
	}
}
