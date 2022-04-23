#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * Description: Prints last digit
 * @a: The number
 * Return: int
 */

int print_last_digit(int a)
{
	int i;

	i  = a % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	_putchar(i + 48);
	return (i);
}
