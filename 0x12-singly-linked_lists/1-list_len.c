#include "lists.h"

/**
 *list_len - counts number of elements in a list
 *
 *@h: the list
 *
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
