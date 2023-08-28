#include "lists.h"
/**
 *  pop_listint - a function that deletes the head node of a list
 *  and returns the head node’s data (n)
 *  @head: pointer
 *  Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int nm;

	if (!head || !*head)
		return (0);
	nm = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;
	return (nm);
}
