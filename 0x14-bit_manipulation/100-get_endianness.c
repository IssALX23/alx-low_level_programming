#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: integer
 */
int get_endianness(void)
{
	/*LBS is set to 1*/
	unsigned int n = 1;/*00 00 00 01*/
	char *c = (char *)&n;
	/*if LITTLE, n = 01 00 00 00 and*c = 1*/
	return ((int)*c);
}
