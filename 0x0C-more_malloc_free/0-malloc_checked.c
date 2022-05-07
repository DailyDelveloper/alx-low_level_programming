#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * Description: Returns a pointer to the allocated memory
 * @b: memory size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
