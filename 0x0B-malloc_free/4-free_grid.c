#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2nd array
 * @grid: 2d grid
 * @height: height dimensions of grid
 * Description: frees memory of greed
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
