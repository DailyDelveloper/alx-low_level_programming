#include <stdlib.h>
/**
 * _atoi - converts a string to integer
 *
 * Description: Converts a String to an integer
 * @s: String to be converted to integer
 * Return: 0 if non found or the integer
 */

int _atoi(char *s)
{
	int numStart = 0, i, neg = 1;
	int *num = (int *)malloc(sizeof(int));

	*num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] > '9' || s[i] < '0'))
		{
			*num = *num * 10 + (s[i] - '0');
			numStart = 1;
		}
		else if (numStart == 1)
		{
			break;
		}
		else if (s[i] == '-')
		{
			neg = -neg;
		}

	}
	if (*num > 0)
	{
		*num *= neg;
	}
	return (*num);

}
