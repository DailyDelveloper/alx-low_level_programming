/**
 * _strncpy - Copy String
 *
 * Description: Copy n number of character from src dest
 * @src: Source String
 * @dest: Destination String
 * Retunr: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
