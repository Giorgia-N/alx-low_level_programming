#include "main.h"
/**
 * _islower - prints 1 if the input an alphabet is a
 * lowercase character. Another case shows a 0.
 *
 * Return: 1 for lowercase character and 0 fir the rest
 * @c: The characters are ASCII code
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
