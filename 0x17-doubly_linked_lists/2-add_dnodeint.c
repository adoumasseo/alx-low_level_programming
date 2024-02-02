#include "lists.h"
/**
 * add_dnodeint - a fct that add a new node at begining of a list
 * @head: the head of our list
 * @n: n of our node
 *
 * Return: The address of node add
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (*head), *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (ptr == NULL)
	{
		(*head) = temp;
		return ((*head));
	}
	temp->next = ptr;
	ptr->prev = temp;
	(*head) = temp;
	return ((*head));
}
