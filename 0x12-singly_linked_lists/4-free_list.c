#include "lists.h"

/**
 * free_list - free a linked list
 *
 * Description: function that frees a list_t list.
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *pnxt;

	while (head != NULL)
	{
		free(head->str);
		pnxt = head;
		head = head->next;
		free(pnxt);
	}
}
