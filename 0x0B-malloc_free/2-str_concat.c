#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: input value
 * @s2: inpur value 2
 * Return: s1 and s1 concate
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		j++, i++;
	}
	con[i] = '\0';
	return (con);
}
