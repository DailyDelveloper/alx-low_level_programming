#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints the given list
 *
 * @h: linked list pointer
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *cursor = h;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
		{
			printf("[%d] %s\n", cursor->len, cursor->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		cursor = cursor->next;
	}
	return (i);
}
