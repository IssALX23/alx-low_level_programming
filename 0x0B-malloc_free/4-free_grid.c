#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - allocate 2 dimensional grid previously
 *	created by your alloc_grid function
 * @grid: pointer to pointer tointeger
 * @height: integer
 *
 * Return: pointer to a 2 dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
