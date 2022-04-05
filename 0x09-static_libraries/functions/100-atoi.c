#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: the string to convert
 * Return: the converted string
 */
int _atoi(char *s)
{
	short boolean;
	int i, minus, result;

	i = result = minus = boolean = 0;
	minus = -1;

	while (s[i] != 0)
	{
		if (s[i] == '-')
			minus *= -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			result *= 10;
			result -= (s[i] - 48);
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}