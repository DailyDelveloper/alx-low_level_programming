#include "lists.h"

/**
 * list_len - returns the number of nodes
 * @h: list head
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
