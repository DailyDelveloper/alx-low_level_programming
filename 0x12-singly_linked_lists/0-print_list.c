#include <stdio.h>
/**
 * print_list - Prints the given list
 *
 * @h: linked list pointer
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t i;
	
	i = 0;
	do{
		if (i != 0)
		{
			h = h->next;
		}
		printf("[%d] %s", h->len, h->str);
		i++;
		
	}while(h->next != NULL);
	return (i);
}
