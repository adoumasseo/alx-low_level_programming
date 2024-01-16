#include "lists.h"

/**
 * add_node - add new node at the end
 * @head: the head of the list
 * @str: pointer to the string of the new node
 *
 * Return: The numbers of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int n = 0;
	char *strd;
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL || new == NULL)
		return (NULL);
	strd = strdup(str);
	while (str[n])
		n++;
	new->str = strd;
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
