#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: integer
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

/* checks if the index is out of range for a 64-bit number */
	if (index > 63)
		return (-1);
/* shifts and sets the index-th bit of x to 1 while all other bits remain 0 */
	x = 1 << index;
/* If the bit is set to 1, index-th bit is flipped from 1 to 0 */
	if (*n & x)
		*n ^= x;

	return (1);
}
