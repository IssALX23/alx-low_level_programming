#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer toarray of pointers
 * @height: integer
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int col = 0;

	if (grid)
	{
		for (col = 0 ; col < height ; col++)
			free(grid[col]);
		free(grid);
	}
}
