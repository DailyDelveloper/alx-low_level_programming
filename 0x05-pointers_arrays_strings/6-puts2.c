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
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
