#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, x, c = 1, mid = n / 2;

	for (i = 0; i < mid && (mid % 2 == 0); i++)
	{
		x = a[n - c];
		a[n - c] = a[i];
		a[i] = x;
		c++;
	}
}
