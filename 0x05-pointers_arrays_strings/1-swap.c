#include <stdio.h>
#include "main.h"
/**
 * swap_int - entry point
 *
 * Description: tswaps the values of two integers
 * @a:  input integer
 * @b:  input integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
