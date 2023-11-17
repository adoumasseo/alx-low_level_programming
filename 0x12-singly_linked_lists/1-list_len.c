#include "lists.h"

/**
 * list_len - number of element in linked list
 * @h: pointer to the head
 *
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
		h = h->next;
	return (n);
}
