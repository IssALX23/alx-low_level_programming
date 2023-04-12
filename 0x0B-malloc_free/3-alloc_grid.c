#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate 2 dimensional array of integers initialized to 0
 * @width: integer
 * @height: integer
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	arr = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0 || arr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		else
		{
			for (j = 0 ; j < width ; j++)
				arr[i][j] = 0;
		}
	}
	return (arr);
}
