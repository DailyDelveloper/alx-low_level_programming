#include "main.h"

/**
 * print_times_table - Prints n times table
 *
 * Description: Prints n times table
 * @n: the number
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (a >= 0 && a <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j != 0)
				{
					if (mul <= 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(mul + '0');
					}
					else if (mul >= 10 && mul <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((mul / 10) + '0');
						_putchar((mul % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((mul / 100) + '0');
						_putchar(((mul % 100) / 10) + '0');
						_putchar(mul % 10 + '0');
					}
				}
				else
				{
					_putchar(mul + '0');
				}
				if (j == n)
				{
					_putchar('\n');
				}
			}
		}
	}
}
