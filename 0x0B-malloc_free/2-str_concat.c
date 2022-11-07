#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *tmp_str;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	tmp_str = malloc(sizeof(char) * len);

	if (tmp_str == NULL)
		return (NULL);
	while (s1[concat_index])
	{
		tmp_str[concat_index] = s1[concat_index];
		concat_index++;
	}
	for (index = 0; s2[index]; index++)
	{
		tmp_str[concat_index++] = s2[index];
	}
	return (tmp_str);
}
