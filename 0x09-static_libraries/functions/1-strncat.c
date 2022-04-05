/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the new dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i,len;

	i = 0;

	for (len = 0; dest[len] != 0; len++)
		;
	while (src[i] != 0 && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	return(dest);
}
