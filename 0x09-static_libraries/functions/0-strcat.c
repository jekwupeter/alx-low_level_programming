/**
 * _strcat - concatenanates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return:pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	i = 0;
	for (len = 0; dest[len] != 0;len++)
		;
	while (src[i] != 0)
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
