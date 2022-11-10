#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp;
	unsigned int len_s1 = 0, len_s2 = 0, ind = 0, ind_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	if (n > len_s2)
		n = len_s2;

	tmp = malloc(len_s1 + n + 1);
	if (tmp == NULL)
		return (NULL);

	while (s1[ind] != '\0')
	{
		tmp[ind] = s1[ind];
		ind++;
	}

	while (s2[ind_2] != '\0' && ind_2 < n)
	{
		tmp[ind++] = s2[ind_2];
		ind_2++;
	}
	tmp[ind] = '\0';
	return (tmp);
}
