#include "main.h"

/*
 * _printer - helper function that prints formatted string
 * @format: array of string that isnt variadic
 * @format_list: struct list containing format specifier and function
 * @ap: variadic function argument
 * Return: number of characters printed
 */
int _printer(const char *format, v_types list[], va_list ap)
{
	int i, j, printed_chars, return_value;

	i = j = return_value = printed_chars = 0;

	//for (i = 0; format[i] != '\0'; i++)/*iterate through non-variadic array*/
	while (*format != '\0')
	{
		if (*format == '%')/*check if percentage is present*/
		{
			for (j = 0; list[j].type != NULL; j++)
			{
				/*converting variadic argument to datatype*/
				if (*(format + 1) == list[1].type[0])/*Check for string*/
				{
					char *i = va_arg(ap, char *);
					return_value = print_string(i);
					if (return_value == -1)
						return (-1);
					printed_chars += return_value; /*iterative sum of printed char count*/
					break;
				}
				else if (*(format + 1) == list[0].type[0])/*Check for char*/
				{
					char i = va_arg(ap, int);
					return_value = p_c(i);
					if (return_value == -1)
						return (-1);
					printed_chars += return_value; /*iterative sum of printed char count*/
					break;
				}
				else if (*(format + 1) == list[2].type[0])//*Check for percent*//
				{
					return_value = print_percent();
					if (return_value == -1)
						return (-1);
					printed_chars += return_value; /*iterative sum of printed char count*/
					break;
				}
					/* end conversion*/
			}
			if (list[j].type == NULL && *(format + 1) != ' ')/*check if a non-valid-type was passed*/
			{
				if (*(format + 1) != '\0')/*check if the non-valid-type is not NULL*/
				{
					_putchar(*format);/*print percent sign*/
					_putchar(*(format + 1));/*print non-valid-type*/
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			format++; /*to skip format symbol*/
		}
		else/*if no percentage was encountered*/
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	return (printed_chars);
}
