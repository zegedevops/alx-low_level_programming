#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create array of integers
 * @min: minimum range values stored
 * @max: maximum range values stored and number of elements
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int z, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (z = 0; min <= max; z++)
		ptr[z] = min++;

	return (ptr);
}

