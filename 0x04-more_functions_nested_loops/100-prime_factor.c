#include <stdio.h>
#include "main.h"
/**
 * main -  entry point
 *
 * Description: finds and prints the largest prime factor
 *              of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143, divide = 2, x;

	while (divide <= n)
	{
		if (n % divide == 0)
		{
			x = divide;
			n = n / divide;
		}
		else
		{
			divide += 1;
		}
	}
	printf("%li\n", x);
	return (0);
}
