#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * sum_listint -  returns the sum of all the data
 * @head: t node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tp = head;

	while (tp)
	{
		sum += tp->n;
		tp = tp->next;
	}
	return (sum);
}
