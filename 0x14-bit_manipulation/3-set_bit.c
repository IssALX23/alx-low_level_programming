#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: pointer to integer
 *
 * Return: value of a bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

/* checks if the index is out of range for a 64-bit number */
	if (index > 63)
		return (-1);

/* shifts and sets the index-th bit of x to 1 while all other bits remain 0*/
	x = 1 << index;
/* sets the index-th bit of *n to 1 if it was previously 0 using OR operation*/
	*n = *n | x;

	return (1);
}
