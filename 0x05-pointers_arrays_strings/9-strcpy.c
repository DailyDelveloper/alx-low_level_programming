#include "main.h"

/**
 * _strcpy - Copy one string another
 *
 * Description: Copy a given string to an other string using pointers
 * @dest: Destnation string pointer
 * @src: Source String pointer
 * Return: Destination String pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
