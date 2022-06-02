#include "main.h"

/*
 * _printf - custom printf to write string to stdout
 * @format: string passed which could include format specifiers
 * Return: integer value of total number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed_chars, i;
	v_types list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list ap;

	if (format == NULL)/*check if empty string was passed*/
		return (-1);

	va_start(ap, format);
	/*calling _printer function*/
	printed_chars = _printer(format, list, ap);
	va_end(ap);

	return (printed_chars);
}
