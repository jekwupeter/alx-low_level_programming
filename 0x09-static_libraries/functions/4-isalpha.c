#include "main.h"
/**
 * _isalpha - tests whether a character is from english alphabet
 * @c: character to test
 * Return: 1 if alphabet 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
