#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index of a listint_t list
 *
 *@head: pointer to the list head
 *
 *@index: the desired index
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;
	free(current);

	return (1);
}
