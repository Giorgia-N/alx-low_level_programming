#include <stdio.h>
/**
 * main - Entry point of three dgit numbers
 * Return: Always (0)
 */
int main(void)
{
	int n = '0';
	int m = '0';
	int o = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for  (m = '0'; m <= '9'; m++)
		{
			for (o = '0'; o <= '9'; o++)
			{
				if (!((n == m) || (m == o) || (m > n) || (o > m)))
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (!(n == '9' &&  m == '8' && o == '7'))
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
