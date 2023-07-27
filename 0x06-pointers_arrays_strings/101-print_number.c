#include "main.h"
/**
 * print_number -  prints an integer
 * @n: intrger value
 * Return: 0
 */
void print_number(int n)
{
	unsigned int N1;

	N1 = n;
	if (n < 0)
	{
		_putchar('-');
		N1 = -n;
	}
	if (N1 / 10 != 0)
	{
		print_number(N1 / 10);
	}
	_putchar((N1 % 10) + '0');
}
