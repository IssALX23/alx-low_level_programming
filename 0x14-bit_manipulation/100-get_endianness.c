#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{	/* least significant bit is set */
	unsigned int n = 1;/* 00 00 00 01 */
	char *c = (char *)&n;

	return ((int)*c);
	/* if LITTLE n = 01 00 00 00 and *c = 1 */
}
