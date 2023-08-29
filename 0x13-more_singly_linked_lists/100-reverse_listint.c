#include "lists.h"
/**
 * reverse_listint -  a function that reverses a list
 * @head: pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *b = NULL;
	listint_t *a = NULL;

	while (*head)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = a;
	}
	*head = b;
	return (*head);
}
