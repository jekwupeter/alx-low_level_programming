#include "main.h"

/*
 * _putchar - writes a char to stdout
 * @c: input character
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/*
 * _puts - writes a string to output
 * @str: string passed
 * @size: number of bytes to print
 */
void _puts(char *str, int size)
{
	write(1, str, size);
}
/*
 * _strlen - gets the length of a string
 * @str: input string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
