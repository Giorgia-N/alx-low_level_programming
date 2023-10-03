#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j, le, la;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
	{
		free(con);
		return (NULL);
	}
	for (le = 0; le < i; le++)
	{
		con[le] = s1[le];
	}
	for (la = 0; la <= j; la++)
	{
		con[le] = s2[la];
		le++;
	}
	return (con);
}
