#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}
	return (nm);
}

