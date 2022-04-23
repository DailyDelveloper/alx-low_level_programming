#include <stdio.h>

/**
 * main - prints fibonacci numbers
 *
 * Description: Prints the first 50 fibonacci numbers
 * Return: int
 */

int main(void)
{
	int a = 1, b = 2, i, temp;

	printf("%d, ", a);
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", b);
		temp = a + b;
		a = b;
		b = temp;

	}
	printf("\n");
	return (0);

}
