#include "lists.h"

/**
 *sum_listint - sums of all the data (n) of a listint_t linked list.
 *@head: head of the linked list
 *
 *Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;

	if (head)
	{
		current = head;

		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
		return (sum);
	}
	return (0);
}
