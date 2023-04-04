#include "lists.h"

/**
 *pop_listint -  deletes the head node of a linked list
 *
 *@head: pointer to the head of the list
 *
 *Return: int value of the list head element
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	listint_t *current;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	current = *head;
	value = current->n;
	new = current->next;
	free(current);
	*head = new;

	return (value);
}
