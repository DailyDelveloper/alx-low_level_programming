#include "main.h"
/**
 * _strchr - Locates character in a string
 *
 * Description: Finds and returns pointer of the first 
 * occuerance of a character
 * @s: Pointer to a string
 * @c: The character to be searched
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;
	char *res;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			res = s + i;
			return (res);
		}
	}

	return (NULL);
}
