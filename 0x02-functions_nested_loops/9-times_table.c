#include "main.h"

/**
 * times_table - Prints times table
 *
 * Description: Prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a * b) <= 9)
			{
				_putchar(' ');
				_putchar((a * b) + '0');
			}
			else
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
