#include "main.h"

/*
 * print_char - prints char
 * @c: input char
 * Return: 1 on success
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
int p_c(char c)
{
	_putchar(c);
	return (1);
}
/*
 * print_string - writes string to stdout
 * @s: input string
 * Return: number of characters printed or "(null)" if str is empty 
 */
int print_string(char *str)
{
	int count;
	
	if (str == NULL)
		str = "(NULL)";
	count = _strlen(str);
	_puts(str, count);
	return (count);
}
/*
 * print_percent - writes '%' to stdout
 * @s: input char
 * 
 * Return: number of characters printed or "(null)" if str is empty 
 */
int print_percent()
{
	_putchar('%');
	return (1);
}