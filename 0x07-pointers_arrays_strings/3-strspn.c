#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: first string
 * @accept: second string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++; 
			}
		}
	}
	return (count);
}
