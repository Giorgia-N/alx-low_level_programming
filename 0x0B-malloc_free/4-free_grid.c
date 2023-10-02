#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  function that frees a 2 dimensional grid
 * @grid: 2d grid
 * @height: height dimension
 * Description: frees memory
 * Return: (0)
 *
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
