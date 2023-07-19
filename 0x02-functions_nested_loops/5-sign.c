#include "main.h"
/**
 * print_sign - determines if the the number is greater,
 * equal or less than zero
 *
 * @n: The character in ASCII code
 * Return: 1 when greater than 0, 0 is zero
 * -1 when less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
