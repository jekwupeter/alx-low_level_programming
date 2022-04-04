#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints he multiplication of two numbers
 * @argc: Count of arguments passed into function
 * @argv: argument vector of pointer to strings
 * return: 0 if program is SUCCESS
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
