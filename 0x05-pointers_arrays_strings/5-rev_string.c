#include <string.h>
/**
 *rev_string - Reverses a string
 *
 * Description: Reverses a given string using pointer
 * @s: Pointer of a string
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	char c;

	for (a = 0 - a; a < strlen(s) / 2; a++)
	{
		c = s[a];
		s[a] = s[strlen(s) - 1 - a];
		s[strlen(s) - 1 - a] = c;
	}
}
