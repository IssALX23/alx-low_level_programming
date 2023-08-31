#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;

	x = n - ((n >> 1) * 2);
	if (n > 1)
		print_binary(n >> 1);
	_putchar(x + '0');
}
