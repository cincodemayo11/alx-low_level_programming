#include"lists.h"

/**
 *insert_nodeint_at_index -  inserts a new node at a given position
 *
 *@head: pointer to the list's head
 *
 *@idx: the desired position
 *
 *@n: value of the new node
 *
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
