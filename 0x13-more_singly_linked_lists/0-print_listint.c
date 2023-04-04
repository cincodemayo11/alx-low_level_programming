#include "lists.h"
#include <stdio.h>

/**
 *print_listint -  prints all the elements of a listint_t list
 *
 *@h: header of the list
 *
 *Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		num++;
	}
	return (num);
}
