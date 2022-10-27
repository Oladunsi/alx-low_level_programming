#include "main.h"

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

	int u = 0;

	while ((u < i && str2[u] != '\0'))
	{
		tmp[u] = str2[u];
		u++;
	}
	while (u < i)
	{
		tmp[u] = '\0';
		u++;
	}
	return (tmp);
}
