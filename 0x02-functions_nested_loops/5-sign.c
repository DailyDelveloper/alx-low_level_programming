#include "main.h"

/**
 *print_sign - Prints sign of an integer
 *
 * Description: Return
 * 1 if the number is greater tha n 0 and prints +
 * 0 if the number is 0 and prints 0
 * -1 if the number is less than 0 and prints -
 *  @n: the number to be checked (int)
 *  Return: int
 */

int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		res = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		res = 0;
		_putchar('0');
	}
	else
	{
		res = -1;
		_putchar('-');
	}

	return (res);
}
