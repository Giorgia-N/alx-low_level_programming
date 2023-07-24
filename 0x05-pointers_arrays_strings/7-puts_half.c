#include "main.h"
/**
 * puts_half -A function that prints half of a string
 * If the number of characters is odd, n = (length_of_the_string - 1) / 2
 * @str: an input
 * Return: half the string
 */
void puts_half(char *str)
{
	int a;
	int b;
	int length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;
	b = length / 2;

	if (length % 2 == 1)
		b = ((length + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
