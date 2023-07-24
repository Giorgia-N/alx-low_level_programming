#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: a string that is printed
 * Return: a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
