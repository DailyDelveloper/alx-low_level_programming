#include <stdio.h>

/**
 * main - fibonacci
 *
 * Description: Fibonacci
 * Return: int
 */

int main(void)
{
	long a = 1, b = 2, sum = 0, temp;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
