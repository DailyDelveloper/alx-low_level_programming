/**
 * _strlen_recursion - Return length of the string
 *
 * Description: Return length of a given string
 * @s: Pointer to a string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
