#include <stdio.h>
/**
 * main - Entry point of three dgit numbers
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 48; n <= 57; n++)
	{ 
		for  (m = 48; m <= 57; m++)
		{
			for (o = 48; o <= 57; o++)
			{
				if (!((n == m) || (m == o) || (m > n) || (o > m)))
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (!(n == 58 && m == 57 && o == 56))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
