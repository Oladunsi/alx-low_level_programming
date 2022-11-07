#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *tmp;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	tmp = malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		tmp[index] = str[index];

	tmp[len] = '\0';
	return (tmp);
}
