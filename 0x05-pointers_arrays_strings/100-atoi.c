/**
 * _atoi - converts a string to integer
 *
 * Description: Converts a String to an integer
 * @s: String to be converted to integer
 * Return: 0 if non found or the integer
 */

int _atoi(char *s)
{
	int num = 0, i, neg = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] > '9' || s[i] < '0'))
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (s[i] == '-')
		{
			neg = -neg;
		}

	}
	num *= neg;
	return (num);

}
