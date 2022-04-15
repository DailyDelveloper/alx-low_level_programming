#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 time
 *
 * Description: Prints alphabet in small case 10 time
 * Return: null
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

