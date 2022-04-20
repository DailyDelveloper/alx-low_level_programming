/**
 * _strcat - Concate Strings
 *
 * Description: Concate src to dest
 * @src: first string
 * @dest: second string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = -1, len, i;
	char *res;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2 + 1;
	res = (char *) malloc(len);

	for (i = 0; i < len1; i++)
	{
		res[i] = dest[i];
	}

	for (; i <= len; i++)
	{
		res[i] = src[i - len2];
	}
	return (res);
}
