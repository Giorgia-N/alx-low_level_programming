#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of paramters
 * @...: variable number of paramters to calculate the sum
 * Return: If == 0 , 0 otherwise the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, sum = 0;

	va_start(a, n);
	for (b = 0; b < n; b++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
