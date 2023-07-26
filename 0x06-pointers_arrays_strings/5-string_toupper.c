#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: pointer
 * Return: a
 */
char *string_toupper(char *a)
{
	int y;

	y = 0;
	while (a[y] != '\0')
	{
		if (a[y] >= 'a' && a[y] <= 'z')
			a[y] = a[y] - 32;
		y++;
	}
	return (a);
}
