/**
 * _islower - Checks whether a charchter is lower or upper case letter
 *
 * Description: It returns 1 if the letter is lower case or else returns 0
 * @c: integer value of the letter
 * Return: int
 */

int _islower(int c)
{
	if (c >= 65 && c <= 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
