/**
 * _sqrt_recursion - Find natural square root of a number
 *
 * Description: Find and Return natural square root of a number
 * @n: integer number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	--n;
	if (n < -1)
	{
		return (-1);
	}
	else if (n == -1)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1)
	}
	else
	{
		return (1 + _sqrt_recursion(--n))
	}
}
