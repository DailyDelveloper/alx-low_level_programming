/**
 * _isalpha - Check for alpahbetsa
 *
 * Description: Checks whether the given charachter is an alphabet or not
 * @c: integer value of the character
 * Return: int
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
