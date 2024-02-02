#include "lists.h"

/**
 * add_dnodeint_end - a fct that add a new node at the end of  dlistint_t list
 * @head: head of our list
 * @n: n of new node
 *
 * Return: Addres of new element and NULL on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (*head), *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (ptr == NULL)
		return (temp);
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}
