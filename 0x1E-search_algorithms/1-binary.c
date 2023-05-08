#include "search_algos.h"

/**
 * binary_search - binary search algorithm for array
 * @array: a pointer to the given array
 * @size: the size array
 * @value: The value to search for
 * Return: The index of the value into array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t indx = 0, mid = 0, left = 0, right = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (indx = left; indx <= right; indx++)
		{
			if (indx < right)
				printf("%d, ", array[indx]);
			else
				printf("%d\n", array[indx]);
		}

		mid = (left + right) / 2;

		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);

	}
	return (-1);
}
