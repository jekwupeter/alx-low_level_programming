#include "main.h"
/**
 * _print_rev_recursion - prints strings in reverse
 * @s: the sting to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_prints_rev_recursion(s + 1);
		_putchar(*s);
	}
}