#include <stdio.h>
#include "main.h"
/**
 * main - Programe that prints its name
 * @argc: number of arguments
 * @argv: array of srguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
