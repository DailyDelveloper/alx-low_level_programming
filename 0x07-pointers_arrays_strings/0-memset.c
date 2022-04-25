#include <string.h>
/**
 * _memset - fills memory with a constant byte
 *
 * Description: Fills memory with a given constant byte
 * @s: the memory holder
 * @b: the byte
 * @n: number of memories to be filled
 * Retunr: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, len = strlen(s);

	for (i = 0; i < n && i < len; i++)
	{
		s[i] = b;
	}

	return (s);
}
