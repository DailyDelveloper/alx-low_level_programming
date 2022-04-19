#include "main.h"
#include <string.h>

/**
 * puts2 - Prints half of a string
 *
 * Description: Prints every other charachter of a string
 * @str: String pointer
 * Return: void
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
