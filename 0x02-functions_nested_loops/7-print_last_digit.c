#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @m: input number as an integer
 * Return: last digit
 */
int print_last_digit(int m)
{
	int l;

	l = m % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
