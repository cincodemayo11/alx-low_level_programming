#include "lists.h"

/**
 *add_node_end - appends a list
 *
 *@head: head of the list
 *
 *@str: string stored in the list
 *
 *Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	size_t num;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	new->len = num;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (*head);
}
