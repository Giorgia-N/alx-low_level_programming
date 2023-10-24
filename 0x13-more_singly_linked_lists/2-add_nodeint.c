#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the node
 * @n: data to insert in that node
 * Return: pointer to the node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
