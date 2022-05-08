#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 *
 * Description: Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of charachters to concatenate
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	int len;
	unsigned int i;

	len = strlen(s1);
	conc = malloc(n + len + 1);
	for (i = 0; i < len; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < n; i++, len++)
	{
		conc[len] = s2[i];
	}
	conc[len] = '\0'; 
	return (conc);
}
