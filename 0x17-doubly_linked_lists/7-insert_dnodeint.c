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

/**
 * insert_dnodeint_at_index - a fct that insert a node in a list
 * @h: begin of the list
 * @idx: the index start by 0
 * @n: n for the new node
 *
 * Return: Adress of new node or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *ptr = (*h);
	unsigned int count = 0;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (idx == 0)
		return (add_dnodeint(&ptr, n));
	while (count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	if ((ptr->next == NULL || ptr == NULL) && idx > dlistint_len((*h)))
		return (NULL);
	else if (idx == dlistint_len((*h)))
	{
		return (add_dnodeint_end(&(*h), n));
	}
	temp->prev = ptr;
	temp->next = ptr->next;
	ptr->next->prev = temp;
	ptr->next = temp;

	return (temp);
}
