#include "main.h"
/**
 * print_alphabet - Prints alphabet
 *
 * Description: Prints alphabet letter in small case
 * Return: 0
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
