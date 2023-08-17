#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - A function that searches for an integer.
 * @array: array pointer
 * @size: size of the element
 * @cmp: A pointer to a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
