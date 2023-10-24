#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - a function that frees a linked list
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
