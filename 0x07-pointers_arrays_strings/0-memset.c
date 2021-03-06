/**
 * _memset - fills memory with a constant byte
 *
 * Description: Fills memory with a given constant byte
 * @s: the memory holder
 * @b: the byte
 * @n: number of memories to be filled
 * Return: char
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
