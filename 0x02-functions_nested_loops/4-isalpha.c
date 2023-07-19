#include "main.h"
/**
 * _isalpha - prints 1 when the input is a alphabet
 * Another wise prints 0
 * @c: The character in ASCII code
 * Return: 1 for laterrs and 0 for rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
