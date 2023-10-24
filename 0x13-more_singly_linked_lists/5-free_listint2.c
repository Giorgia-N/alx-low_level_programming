#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
	*head = NULL;
}
