#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to list to be freed
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;
	while (*head)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	*head = NULL;
}
