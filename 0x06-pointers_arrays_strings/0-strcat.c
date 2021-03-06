#include "main.h"
#include <string.h>
/**
 * _strcat - Concate Strings
 *
 * Description: Concate src to dest
 * @src: first string
 * @dest: second string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len1 = strlen(dest), len2 = -1;

	do {
		len2++;
		dest[len1] = src[len2];
		len1++;
	} while (src[len2] != '\0');
	return (dest);
}
