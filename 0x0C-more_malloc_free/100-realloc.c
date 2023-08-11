#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer of the memory
 * @old_size: size of memory
 * @new_size: new size of the new memory
 * Return: pointer to new location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	p2 = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p1[a] = p2[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p1[a] = p2[a];
	}
	free(ptr);
	return (p1);
}
