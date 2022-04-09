#include <stdio.h>

/**
 * main - print alphabets
 * Description: Pints alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar('\n');
	}
}
