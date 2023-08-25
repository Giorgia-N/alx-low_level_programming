#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node -  a function that adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: new string
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = l;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
