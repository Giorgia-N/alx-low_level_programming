#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * insert_nodeint_at_index - inserts a node in a list, at a given position
 * @head: pointer
 * @idx: index
 * @n: data to insert
 * Return: pointer to the node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *node;
	listint_t *t = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (a = 0; t && a < idx; a++)
	{
		if (a == idx - 1)
		{
			node->next = t->next;
			t->next = node;
			return (node);
		}
		else
			t = t->next;
	}

	return (NULL);
}
