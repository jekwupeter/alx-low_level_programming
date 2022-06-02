#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/*
 * valid_types - struct to lookup function based on type
 * @type: input format
 * @func: pointer to function
 */
typedef struct valid_types
{
	char *type;
	int (*func)();
} v_types;

int _printf(const char *format, ...);
int _printer(const char *format, v_types list[], va_list ap);
int _putchar(char c);
void _puts(char *str, int size);
int _strlen(char *str);
int print_char(va_list c);
int print_percent();
int print_string(char *str);

int p_c(char c);

#endif
