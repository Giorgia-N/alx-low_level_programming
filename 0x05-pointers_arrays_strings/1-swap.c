#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @a: first integer value
 * @b: seconde integer value
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
