#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input value
 * @height:height input value
 * Return: pointer to 2 dimensional
 */
int **alloc_grid(int width, int height)
{
	int **all;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	all = malloc(sizeof(int *) * height);
	if (all == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		all[x] = malloc(sizeof(int) * width);
		if (all[x] == NULL)
		{
			for (; x >= 0; x--)
				free(all[x]);
			free(all);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			all[x][y] = 0;
	}
	return (all);
}

