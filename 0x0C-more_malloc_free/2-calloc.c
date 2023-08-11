#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memory - fills memory
 * @a: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: pointe
 */
char *_memory(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}

/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb:nymber of elements
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);
	_memory(pointer, 0, nmemb * size);
	return (pointer);
}
