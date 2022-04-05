/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to find
 * Return: Pointer to first occurence of character to find
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}
