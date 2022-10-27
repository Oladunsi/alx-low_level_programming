#include "main.h"

/**
 * _strcmp - a function that copies a string into another.
 * @str1: an input string
 * @str2: an input string
 *
 * Return: A difference of str1 - str2.
 */

int _strcmp(char *str1, char *str2)
{
	char *tmp1 = str1, *tmp2 = str2;
	int u = 0;

	while ((str1[u] != '\0' && str2[u] != '\0'))
	{
		if (str1[u] != str2[u])
			break;
		tmp1 += str1[u];
		tmp2 += str2[u];
		u++;
	}

	return (tmp1 - tmp2);
}
