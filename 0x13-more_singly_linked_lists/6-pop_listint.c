#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - a function that deletes the head node of a list
 * @head: pointer
 * Return: the data inside the elements, or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (nm);
}


