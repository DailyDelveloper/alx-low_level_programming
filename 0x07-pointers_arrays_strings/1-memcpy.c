/**
 * _memcpy - Copies memory area
 *
 * Description: Copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: numbers character to copy
 * Return: char
 */

void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
