#include "main.h"

/**
 * _islower - tests whether a character is a 
 * is a lower letter;
 * @c: character to test
 * Return: 1 for lower letter and 0 for other character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
