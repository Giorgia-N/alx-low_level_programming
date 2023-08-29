#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: pointer to the first node
 * @idx: index to the node
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *m = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0; m && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = m->next;
			m->next = new;
			return (new);
		}
		else
			m = m->next;
	}
	return (NULL);
}
