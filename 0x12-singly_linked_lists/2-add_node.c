#include "lists.h"

/**
 *add_node - adds a node to te beginning of list
 *
 *@head: head of the list
 *
 *@str: the string stored in the list
 *
 *Return: address of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t num;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	for (num = 0; str[num] != '\0'; num++)
		;

	new->len = num;
	new->next = *head;
	*head = new;

	return (*head);
}
