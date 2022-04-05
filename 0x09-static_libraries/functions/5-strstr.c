#include "main.h"
#include <stddef.h>
/**
 * _strncmp - compares two strings within 'b' bytes
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are same else other numbers
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;
	for (i = 0; i <= b && *s1 == *s2 && *s1 != 0 && *s2 != 0; i++)
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
/**
 * _strstr - locates a substring
 * @haystack: string to look through
 * @needle: substring to find
 * Return: pointer to string with resultof search
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;
	/*Get the length of needle*/

	len = 0;
	while (needle[len] != 0)
		len++;
	/*Compare string*/
	while (*haystack != 0)
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
	}
	return (NULL);
}
