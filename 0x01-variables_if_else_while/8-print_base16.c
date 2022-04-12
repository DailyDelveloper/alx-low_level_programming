#include <stdio.h>

/**
 * main - Prints Hexadecimal numbers
 *
 * Description: Prints all single digit hexadecimal number using putchar()
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = '0'; a < '9'; a++)
	{
		putchar(a);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
