#include "main.h"

int a_prime_num(int n, int i);

/**
 * is_prime_number - tells if the integer is an prime number or not
 * @n: number
 * Return: 1 if the integer is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_prime_num(n, n - 1));
}

/**
 * a_prime_num - calculates if the prime recursively
 * @n: number
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if not
 */
int a_prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (a_prime_num(n, i - 1));
}
