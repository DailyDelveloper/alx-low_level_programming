#include "main.h"
#include <string.h>
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
	strcpy(dest,src);
	char *res = &dest;

	return (res);
}
