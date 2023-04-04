#include "lists.h"

/**
 *free_listint2 - frees a listint_t list
 *
 *@head: pointer to head of the list
 *
 *Return: nada
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head)
	{
		current = *head;

		while ((next = current) != NULL)
		{
			current = current->next;
			free(next);
		}
		*head = NULL;
	}
}