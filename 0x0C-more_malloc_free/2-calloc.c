#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory elements
 * @size: size of nmemb bytes
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	char *point;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	point = arr;
	while (point[i] != '\0')
	{
		point[i] = 0;
		i++;
	}
	return (arr);
}
