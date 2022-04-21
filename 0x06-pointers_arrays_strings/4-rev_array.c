/**
 * reverse_array - Revesres array
 *
 * Description: Reverse the given array
 * @a: the array
 * @n: number of elements of the arrray
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, b, mid = n / 2;

	n--;
	for (i = 0; n > mid; n--, i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
