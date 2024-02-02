#include "lists.h"

/**
 * sum_dlistint - a fct that compute sum of all elt in a list
 * @head: begin of the list
 *
 * Return: as name description
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
