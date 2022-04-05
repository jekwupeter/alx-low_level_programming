/**
 * _strlen - calculates length of string
 * @s: pointer to the string array
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
