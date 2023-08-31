#include "main.h"
/**
 * get_binary - return binary value of an integer
 * @n: integer
 *
 * Return: binary value
 */
int get_binary(unsigned long int n)
{
	if (n > 0)
		return ((n & 1) + 10 * get_binary(n >> 1));
	else
		return (0);
}
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: integer
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int BITS = sizeof(unsigned long int) * 8;
	int x = (int)index;

	if (x < 0 || x > BITS)
		return (-1);
	return ((n >> index) & 1);
}
