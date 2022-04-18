#include "main.h"

/**
 * swap_int - Swap two integer
 *
 * Description: Swap value of two integers
 * @a: First integer
 * @b: Second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
