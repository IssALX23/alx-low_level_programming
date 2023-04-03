#include <stdio.h>
#include "main.h"
/**
 * print_number -  function that prints an integer
 * @n: input integer
 *
 * Return: void
*/
void print_number(int n)
{
	unsigned int  number = n;

	if (n < 0)
	{
		number = -number;
		_putchar('-');
	}
	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + 48);
}
