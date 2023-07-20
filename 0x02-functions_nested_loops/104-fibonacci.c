#include <stdio.h>
/**
 * main -Entry point
 * prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always a 0
 */
int main(void)
{
	int n = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (n < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (n < 97)
			printf(", ");
		n++;
	}
	putchar('\n');
	return (0);
}
