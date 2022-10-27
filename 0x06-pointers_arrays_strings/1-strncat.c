#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @str1: an input string
 * @str2: an input string
 * @i: amount of str2 characters to add to str1
 * Return: A pointer to the resulting string
 */

char *_strncat(char *str1, char *str2, int i)
{
	char *tmp = str1;

	int p = 0, j = 0, u = 0, len_str2 = 0;

	while (str1[p] != '\0')
	{
		tmp[p] = str1[p];
		p++;
		j++;
	}

	while (str2[len_str2] != '\0')
		len_str2++;

	if (i > len_str2)
		i = len_str2;

	while (str2[u] != str2[i])
	{
		tmp[j] = str2[u];
		u++;
		j++;
	}

	tmp[j] = '\0';
	return (tmp);
}
