#include "main.h"
/**
 * reverse_array - prints out functions that reverses
 * the content of an array of integers
 * @a: array
 * @n: elements in an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int y;
	int x;

	for (y = 0; y < n--; y++)
	{
		x = a[y];
		a[y] = a[n];
		a[n] = x;
	}
}
