/**
 *rev_string - Reverses a string
 *
 * Description: Reverses a given string using pointer
 * @s: Pointer of a string
 * Return: void
 */

void rev_string(char *s)
{
	int a, len = 0, halfLen;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}
	halfLen = len / 2;
	for (a = 0; a < halfLen; a++)
	{
		c = s[a];
		s[a] = s[len - 1 - a];
		s[len - 1 - a] = c;
	}
}
