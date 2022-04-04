#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive number follwed by new line
 * @argc: the number of arguments pass into the program
 * @argv: An array of pointers to the arguments 
 * return: 0 is SUCCESS
 */

int main(int argc, int *argv[])
{
	int sum, x, y;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
