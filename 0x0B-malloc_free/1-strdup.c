#include <stdlib.h>
/**
 * _strdup - Duplicate a string
 *
 * Description: Duplicates a string
 * @str: The original string
 * Return: char
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int size, i;
       
	if (str == NULL)
	{
		return (NULL);
	}
	size = sizeof(str);
	a = malloc(size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size / sizeof(char)); i++)
	{
		a[i] = str[i];
	}

	return (a);
}
