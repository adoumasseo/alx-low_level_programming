#include "lists.h"

/**
 * print_list - a fct that print the number of elt in singly list
 * @h: the head of the singly list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
