#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length
 * @next: pointer to the next node
 * Description: Singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;
int _putchar(char);
size_t print_list(const list_t *h);
#endif
