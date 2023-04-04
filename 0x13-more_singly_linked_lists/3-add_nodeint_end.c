#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *
 *@head: head pointing to the list
 *
 *@n: element value
 *
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current  = malloc(sizeof(listint_t));

		if (!current)
		{
			return (NULL);
		}
		else
		{
			current = *head;
		}
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;

	return (*head);
}
