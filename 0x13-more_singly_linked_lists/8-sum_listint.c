#include "lists.h"
/**
 *  sum_listint - a function that returns the sum of all the data (n) of a
 *  list
 *  @head: first node
 *  Return: sum, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
