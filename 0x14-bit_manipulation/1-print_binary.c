#include "main.h"

/**
 * _math - a function that calculates (base ^ power)
 * @b: base of the exponent
 * @p: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _math(unsigned int b, unsigned int p)
{
	unsigned long int n;
	unsigned int a;

	n = 1;
	for (a = 1; a <= p; a++)
		n *= b;
	return (n);
}
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char a;

	a = 0;
	div = _math(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			a = 1;
			_putchar('1');
		}
		else if (a == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
