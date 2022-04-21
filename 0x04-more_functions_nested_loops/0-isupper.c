/**
 * _isupper - check for upper case letter
 *
 * Description: Return 1 if the letter Uppercasse else 0
 * @c: the letter to be checked
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
