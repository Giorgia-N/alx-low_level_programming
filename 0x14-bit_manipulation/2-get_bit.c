#include"main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to check
 * @index: index
 * Return: value of the bit, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check, div;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
