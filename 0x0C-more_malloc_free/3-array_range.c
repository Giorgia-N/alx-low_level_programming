#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A  function that creates an array of integers.
 * @max: maximum values
 * @min: minimum values
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int size, a;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		p[a] = min++;
	return (p);
}
