#include "lists.h"

/**
 * free_dlistint - a fct that free a doubly linked list
 * @head: begin of the list
 *
 * Return: Nothing is void type function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(ptr->prev);
	}
	free(ptr);
}
