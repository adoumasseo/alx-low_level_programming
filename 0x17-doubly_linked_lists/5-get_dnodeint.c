#include "lists.h"

/**
 * get_dnodeint_at_index - a fct that returns the nth node of a  linked list.
 * @head: head of the list
 * @index: the index of the list
 *
 * Return: Address of the search node of NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		if (index == 0)
			return (ptr);
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
