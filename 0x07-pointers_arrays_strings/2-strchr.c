/**
 * _strchr - finds the first occurence of first character 'c' in string 's'
 * @s: pointer to string
 * @c: character to search for
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
