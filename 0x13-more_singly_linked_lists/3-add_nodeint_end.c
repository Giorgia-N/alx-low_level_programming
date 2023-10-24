#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: pointer
 * @n: data to insert in the element
 * Return: pointer to the node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *t = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (t->next)
		t = t->next;
	t->next = node;
	return (node);
}
