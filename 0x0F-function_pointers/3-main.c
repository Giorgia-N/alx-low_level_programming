#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints resluts
 * @argc: The number of arguments.
 * @argv: array arguments.
 * Return: Always 0
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	char *p;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	p = argv[3];
	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*p == '/' && n2 == 0) ||
	    (*p == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(p)(n1, n2));
	return (0);
}
