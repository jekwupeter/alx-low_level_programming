/**
 * *_strcpy - copies string from src to dest
 * @dest: the pointer to string copied
 * @src: the pointer to string to be copied
 * Return: the value of the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
