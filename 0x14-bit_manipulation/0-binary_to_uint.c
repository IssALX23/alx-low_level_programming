#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 0, reminder = 0,
		     decimal = 0, weight = 1, binary = 0;

	if (!b)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}
	binary = atoi(b);
	for (i = 0 ; i < count ; i++)
	{
		reminder = binary % 10;
		decimal = decimal + reminder * weight;
		binary = binary / 10;
		weight = weight * 2;
	}
	return (decimal);
}
