#include "lists.h"

/**
 * add_node - adds a new node 
 * @head: head of the list
 * @str: node value
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
