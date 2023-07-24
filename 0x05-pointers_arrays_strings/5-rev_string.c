#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: a string
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int c = 0;
	char r = s[0];

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
