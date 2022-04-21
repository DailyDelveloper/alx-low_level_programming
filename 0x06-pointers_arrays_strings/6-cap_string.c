#include <string.h>

/**
 * cap_string - Capitalized each word
 *
 * Description: Capitalized each word
 * @c: String to be capitalized
 * Return: char
 */

char *cap_string(char *c)
{
	int len = strlen(c), i, j;
	char *a[] = [' ','	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'];
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < strlen(a); j++)
		{
			if(c[i] == a[j] && (c[i] >= 97 && c[i] <=122))
			{
				c[i] = c[i] - 32;
			}
		}
	}

	return (c);
}
