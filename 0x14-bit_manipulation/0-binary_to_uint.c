#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int a;

	number = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		number <<= 1;
		if (b[a] == '1')
			number += 1;
	}
	return (number);
}
