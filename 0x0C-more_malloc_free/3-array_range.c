#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr, ind, arr_size;

	if (min > max)
		return (NULL);

	arr_size = (max - min) + 1;

	arr = malloc(sizeof(int) * arr_size);

	if (arr == NULL)
		return (NULL);

	for (ind = 0; ind < arr_size; ind++)
		arr[ind] = min++;

	return (arr);
}
