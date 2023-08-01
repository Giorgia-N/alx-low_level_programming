#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte.
 * @s: address of memory to be filled
 * @b: the value
 * @n: number of bytes
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
