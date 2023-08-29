#include "lists.h"
/**
 *  free_listint_safe -  a function that frees a listint_t list
 *  @h: pointer
 *  Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int a;
	listint_t *m;
	size_t l = 0;


	if (!*h || !h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			m = (*h)->next;
			free(*h);
			*h = m;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
}
