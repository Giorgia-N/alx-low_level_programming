#include "main.h"
/**
 * factorial - Prints a factorial of a given number
 * @n: number
 * Return: a factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
