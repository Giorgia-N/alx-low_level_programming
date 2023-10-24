#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * delete_nodeint_at_index - deletes a node in a list  at a certain index
 * @head: pointer
 * @index: index
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cl = *head;
	listint_t *c = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cl);
		return (1);
	}

	while (a < index - 1)
	{
		if (!cl || !(cl->next))
			return (-1);
		cl = cl->next;
		a++;
	}
	c = cl->next;
	cl->next = c->next;
	free(c);

	return (1);
}
