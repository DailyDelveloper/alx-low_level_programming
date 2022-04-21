/**
 * _isdigit - Check for digits 0-9
 *
 * Description: Return 1 if the given value is between 0 and 9, else return 0
 * @c: the charachter to be checked
 * Return: int
 */

int _isdigit(int c)
{
	if ((c - '0') >= 0 && (c - '0') <= 9)
	{
		return (1);
	}
	return (0);
}
