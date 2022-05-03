#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 *
 * Description: creates an array of chars,
 * and initialize it with a specific char.
 * @size: size of the array
 * @c: character
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size / sizeof(char)); i++)
	{
		a[i] = c;
	}
	return (a);
}
