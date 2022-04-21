#include <string.h>
/**
 * string_toupper - Convert to upper case
 *
 * Description: Convert given string to upper case
 * @c: String to be converted
 * Return: char
 */

char *string_toupper(char *c)
{
	int len = strlen(c), i;

	for (i = 0; i < len; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);

}
