#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int length = 0;
	int a = 0;
	int i;
	char *j = str;

	while (*j != '\0')
	{
		length++;
		j++;
	}
	a = length - 1;
	for (i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
