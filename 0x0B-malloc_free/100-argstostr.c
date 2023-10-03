#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: int value
 * @av: pointer to the new string
 * Return: (0)
 */
char *argstostr(int ac, char **av)
{
	int i, j, a = 0, b = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			b++;
	}
	b += ac;

	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[a] = av[i][j];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
