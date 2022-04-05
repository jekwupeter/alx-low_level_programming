/**
 * _strcmp - compares two string ending by the first byte that is different
 * @s1: string to be compared
 * @s2: string to compare with
 * Return: 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	for (i; s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
