#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum
 * @max: maximum
 * Return: NULL or pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}

