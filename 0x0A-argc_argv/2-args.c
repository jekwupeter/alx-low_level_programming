#include <stdio.h>
#include <stdlib.h>

/**
 * main: prints all arguments it recieves
 * @argc: the number of arguments supplied to the program
 * @argv: An array of pointers to the argument
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
		i++;
	}

	return (0);
}
