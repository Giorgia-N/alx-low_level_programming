#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 * @array: Array
 * @size: the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: (0)
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
