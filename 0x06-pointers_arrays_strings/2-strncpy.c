#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string into another.
 * @str1: an input string
 * @str2: an input string
 * @i: amount of str2 characters to add to str1
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *str1, char *str2, int i)
{
	char *tmp = str1;

	int len_str1 = 0, j = 0, u = 0, len_str2 = 0;

	while (str1[len_str1] != '\0')
	{
		len_str1++;
	}

	while (str2[len_str2] != '\0')
		len_str2++;

	if (i > len_str2)
		i = len_str2;

	while (str2[u] != str2[i])
	{
		tmp[u] = str2[u];
		u++;
		j++;
	}
	if (j == len_str2)
	{
		tmp[j] = '\0';
		return (tmp);
	}
	while (tmp[j] != str2[len_str2])
	{
		tmp[j] = str1[j];
		j++;
	}
	tmp[j] = '\0';
	return (str1);
}
