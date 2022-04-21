#include <string.h>
/**
 * _strncpy - Copy String
 *
 * Description: Copy n number of character from src dest
 * @src: Source String
 * @dest: Destination String
 * @n: Number of charachters
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len1 = strlen(dest), len2 = strlen(src);

	for (i = 0; i < n && i < len1 && i < len2; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
