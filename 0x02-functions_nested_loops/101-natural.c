#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Desctiption:  prints the sum of all the multiples of 3 or 5
 *
 * Return: 0 always
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
