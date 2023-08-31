#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long integer
 * @m:unsigned long integer
 *
 * Return: unsigned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, BITS = n ^ m;

	while (BITS)
	{
		count += (BITS & 1);
		BITS = BITS >> 1;
	}
	return (count);
}
