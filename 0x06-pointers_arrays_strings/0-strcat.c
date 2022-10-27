#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @str1: an input string
 * @str2: an input string
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *str1, char *str2)
{
	char *tmp = str1;

	int i = 0, j = 0, u = 0;

	while (str1[i] != '\0')
	{
		tmp[i] = str1[i];
		i++;
		j++;
	}

	while (str2[u] != '\0')
	{
		tmp[j] = str2[u];
		u++;
		j++;
	}

	tmp[j] = '\0';
	return (tmp);
}
