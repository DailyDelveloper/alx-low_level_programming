#include <string.h>

/**
 * _strncat - Concatenate n number of characters
 *
 * Description: Concatenate n charachters from src to dest
 * @src: source string
 * @dest: destination string
 * @n: Number of charachters
 * Return:char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1 = strlen(dest);

	for (i = 0; i < n; i++, len1++)
	{
		dest[len1] = src[i];
	}
	dest[len1] = '\0';
	return (dest);
}
