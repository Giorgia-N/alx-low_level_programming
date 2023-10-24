#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tp = head;

	while (tp && a < index)
	{
		tp = tp->next;
		a++;
	}
	return (tp ? tp : NULL);
}
