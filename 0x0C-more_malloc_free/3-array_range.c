#include <stdlib.h>

/**
 * *array_range - create array of integers from min to max
 * @min: first value of the array
 * @max: last value of the array
 * Return: if min > max or function fail return NULL.
 * 	   Otherwise return a pointer to new array of integers
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
