#include "search_algos.h"


/**
 * linear_search - linear search algo for arrays
 * @array: A pointer to the given array
 * @size: The size of array
 * @value: Value to search for
 * Return: index of the value in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (!array || size <= 0)
		return (-1);
	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%lu] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
	}
	return (-1);
}
