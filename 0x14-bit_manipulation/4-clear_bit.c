#include "main.h"
/**
 * clear_bit - value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: unsigned integer
 *
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int BITS = sizeof(unsigned long int) * 8;
	int x = (int)index;

	if (x < 0 || x > BITS)
		return (-1);
	*n = *n & (~(1 << index));

	return (1);
}
