#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of this function
 * @argc: has the lengths of the arguments
 * @argv: has the arguments
 * Return: 0 to indicate a good working of the program
 */

int main (int argc, int **argv)
{
	if (argc == 1)
		printf("%s\n",*argv);

	return (0);
}
