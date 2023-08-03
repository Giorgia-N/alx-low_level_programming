#include "main.h"

int a__sqrt_recursion(int n, int l);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: square root number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a__sqrt_recursion(n, 0));
}

/**
 * a__sqrt_recursion - finds the actual square root number
 * @n: number to calculate
 * @l: iterator
 * Return: results of square root
 */
int a__sqrt_recursion(int n, int l)
{
	if (l * l > n)
		return (-1);
	if (l * l == n)
		return (l);
	return (a__sqrt_recursion(n, l + 1));
}
