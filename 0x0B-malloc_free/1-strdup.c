#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int index, len;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc((index + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}
	return (copy);
}
