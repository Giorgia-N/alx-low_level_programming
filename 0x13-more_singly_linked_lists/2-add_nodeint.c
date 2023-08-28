#include "lists.h"
/**
 * add_nodeint -  a function that adds a new node at the beginning of a list
 * @head: pointer to the node
 * @n: data in the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n1;

	n1 = malloc(sizeof(listint_t));
	if (!n1)
		return (NULL);

	n1->n = n;
	n1->next = *head;
	*head = n1;
	return (n1);
}
