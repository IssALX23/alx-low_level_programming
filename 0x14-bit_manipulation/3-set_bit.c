#include "main.h"
/**
 * set_bit : sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: integer
 *
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int BITS = sizeof(unsigned long int) * 8;
	int x = (int)index;

	if (x < 0 || x > BITS)
		return (-1);
	*n =*n | (1 << index);/*update value of n*/

	return (1);
}
