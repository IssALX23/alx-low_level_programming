#include "main.h"
/**
 * _abs - entry point
 *
 * Description:  computes the absolute value of an integer
 * @i: input integer
 *
 * Return: absolute value of i
*/
int _abs(int i)
{
	if (i < 0)
		return (-1 * i);
	else
		return (i);
}
