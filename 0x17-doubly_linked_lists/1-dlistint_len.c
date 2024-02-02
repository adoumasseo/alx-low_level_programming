#include "lists.h"

/**
 * dlistint_len - a fct that return number of elt in a list
 * @h: the head
 *
 * Return: The number of elt in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
