#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: integer
 * @m: integer
 *
 * Return: 1 if it worked, -1 if it didn't
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int a, b;
/* flips the bits where the corresponding bits of n and m are different */
	b = n ^ m;

	for (i = 63 ; i >= 0 ; i--)
	{
		a = b >> i;
		if (a & 1)
			count++;
	}

	return (count);
}
