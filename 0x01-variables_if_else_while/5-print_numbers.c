#include <stdio.h>

/**
 * main - Print Numbers
 *
 * Description: Prints base 10 single digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
