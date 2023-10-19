#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: pointer to the list
 * @str: string for the node
 * Return: address of the elements,or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	list_t *b = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);
	a->str = strdup(str);
	a->len = len;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
	return (a);
	}
	while (b->next)
		b = b->next;
	b = b->next = a;
	return (a);
}
