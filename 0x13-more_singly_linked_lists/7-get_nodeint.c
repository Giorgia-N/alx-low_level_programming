#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a list.
 * @head: first node
 * @index: index of the node
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *a = head;

	while (a && i < index)
	{
		a = a->next;
		i++;
	}
	return (a ? a : NULL);
}
