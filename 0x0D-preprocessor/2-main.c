#include <stdio.h>

/**
 * main - prints the name of file it was compiled from
 * @void: accepts no input
 * Return: 0 on success.
 */

int main(void)
{
	printf("%s\n",__FILE__);
	return (0);
}
