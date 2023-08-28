#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
