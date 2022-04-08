#include <stdlib.h>

/**
 * *array_range - create array of integers from min to max
 * @min: first value of the array
 * @max: last value of the array
 * Return: if min > max or function fail return NULL.
 * 	   Otherwise return a pointer to new array of integers
 */

int *array_ranger(int min, int max)
{
	int *arr, i;
	
	if (min > max)
		return (NULL);

	arr = malloc(sizeof arr * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (min + max); i++)
	{
		if (i == 0)
			arr[i] = min;
		else
			arr[i] = arr[i - 1] + 1;
	}

	return (arr);
}
