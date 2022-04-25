/**
 * _memcpy - Copies memory area
 *
 * Description: Copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: numbers character to copy
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
