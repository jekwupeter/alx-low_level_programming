#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *string_nconcat - concatenates s1 with a n length of s2
 * @s1: string to be added first to new string
 * @s2: string to be concatenated with s1 to form new string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: NULL if function fails, if success return pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, j, index, count;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != 0; i++)
		;
	for (j = 0; s2[j] != 0; j++)
		;
	if (n >= j)
	{
		count = i + j;
	}
	count = i + n;
	new_string = malloc(sizeof new_string *count);
	for (index = 0; index < i; index++)
	{
		new_string[index] = s1[index];
	}
	for (index = 0; index < count; index++)
		new_string[index + i] = s2[index];
	new_string[count + 1] = 0;
	if (new_string == NULL)
		return (NULL);
	return (new_string);
}
