#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the length of the arguments
 * @argc: count of arguments
 * @argv: the array of the pointers to the arguments
 * return: 0 to show SUCCESS
 */
int main(int argc, char **argv)
{
	if (**argv != 0)
		printf("%d\n", argc-1);

	return (0);
}
