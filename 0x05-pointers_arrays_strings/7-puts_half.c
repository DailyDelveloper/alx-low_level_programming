#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 *
 * Description: Prints the second half of a string
 * @str: String pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = ((len - 1) / 2) + 0.5; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
