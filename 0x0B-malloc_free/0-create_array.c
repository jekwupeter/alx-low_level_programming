#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array of chars & initializes it to a specific char
 * @size: size of array to be created
 * @c: char to initialize array with 
 * Return: pointer to array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
