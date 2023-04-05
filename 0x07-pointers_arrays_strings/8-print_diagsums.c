#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *		of a square matrix of integers
 * @a: pointer to array of integers
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j,
	    rows = size,
	    cols = size,
	    forward = 0,
	    backward = 0;

	for (i = 0 ; i < rows ; i++)
	{
		/*to loop forward diagonal*/
		j = i;
		forward += *(a + i * cols + j);
		/*to loop backward diagonal*/
		j = cols - 1 - i;
		backward += *(a + i * cols + j);
	}
	printf("%d, %d\n", forward, backward);
}
