#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: the number of list to print
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		a++;
		h = h->next;
	}
	return (a);
}
