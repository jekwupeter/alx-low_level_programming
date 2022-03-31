#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of the string 
 * @s: the string count 
 * Return: length of the string 
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * checker -helper fucntion for is_panlindrome
 * @str: the string
 * @len: length of string
 * @count: counter of recurison
 * Return: 1 if string is a palindrome, 0 if not
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome 
 * @s: the string to be checked
 * Return: 1 if string is a palindrome , 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
