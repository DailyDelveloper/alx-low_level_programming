/**
 * _pow_recursion - Return power function
 *
 * Description: Returns result of x power y
 * @x: Base number
 * @y: exponent
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(y - 1));
	}
}
