#include <stddef.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc function
 * @n: size of memory to be created
 * Return: pointer to allocated memory. On failure returns 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL && b > 0)
		exit(98);
	return (ptr);
}
