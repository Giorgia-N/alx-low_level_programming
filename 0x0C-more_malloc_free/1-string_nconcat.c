#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		string = malloc(sizeof(char) * (l1 + n + 1));
	else
		string = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!string)
		return (NULL);

	while (i < l1)
	{
		string[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		string[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		string[i++] = s2[j++];

	string[i] = '\0';

	return (string);
}
