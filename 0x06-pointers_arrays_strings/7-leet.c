#include <string.h>

/**
 * leet - encodes a string into 1337
 *
 * Description: Encodes a string into 1337
 * @c: The string
 * Return: char
 */

char *leet(char **c)
{
	int len = strlen(c), i, j;
	char *a = "aA4eE3oO0tT7lL1";

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < strlen(a); j += 3)
		{
			if (c[i] == a[j] || c[i] == a[j + 1])
			{
				c[i] = a[j + 2];
			}
		}
	}

	return (c);
}
