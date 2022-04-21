#include <string.h>

/**
 * _strcmp - Compares two strings
 *
 * Description: Returns result of s1 - s2
 * @s1: First String
 * @s2: Second String
 * Return: int
 */

int _strcmp (char *s1, char *s2)
{
	int i, len1 = strlen(s1);

	for (i = 0; i <= len1; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return 0;
}
