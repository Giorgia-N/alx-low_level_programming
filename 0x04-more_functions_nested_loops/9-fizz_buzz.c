#include <stdio.h>
/**
 * main -  prints the numbers from 1 to 100
 * multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: Always a 0
 */
int main(void)
{
	int a;

	for (a = 1 ; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
