#include <stdio.h>

/**
 * main - Prints prime factor
 *
 * Description: Prints largest prime factor of 612852475143
 * Return: int
 */

int main(void)
{
	long a = 612852475143, i, j, largest = 1;

	for (i = 2; i <= a / 2; i++)
	{
		if (a % i == 0)
		{
			if(largest < i)
			{
				largest = i;
			}
			a = a / i;
			i = 1;
		}
	}
	printf("%ld", largest);
	return (0);
       	
}
