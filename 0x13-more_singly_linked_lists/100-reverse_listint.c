#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * reverse_listint - reverses a list
 * @head: pointer
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a  = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
