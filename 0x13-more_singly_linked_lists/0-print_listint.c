#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
