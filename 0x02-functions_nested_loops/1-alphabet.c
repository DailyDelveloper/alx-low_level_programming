#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Description: Prints alphabet in small case
 * Return: null
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
