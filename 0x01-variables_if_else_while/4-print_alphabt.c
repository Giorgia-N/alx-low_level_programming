#include <stdio.h>
/**
 * main - Entry point
 * Prints alphabets in lowercase, but e and q
 * Return: Always (0)
 */
int main(void)
{
	int n = 97;

		while (n <= 122)
		{
			if (n == 101 || n == 113)
			{
				n++;
				continue;
			}
			putchar(n);
			n++;
		}
		putchar('\n');
		return (0);
}
