#include "main.h"
/**
 * alloc_grid - function that returns a pointer to
 *		a 2 dimensional array of integers
 * @width : integer
 * @height: integer
 *
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int row = 0, col = 0;
	int **pptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	pptr = malloc(sizeof(int *) * height);
	if (!pptr)
	{
		free(pptr);
		return (NULL);
	}
	for (row = 0; row < height ; row++)
	{
		pptr[row] = malloc(sizeof(int) * width);
		for (col = 0 ; col < width ; col++)
			pptr[row][col] = 0;
	}
	return (pptr);
}
