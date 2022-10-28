#include "main.h"

/**
 * sep_finder - a function that dectects ,, ;, ., !, ?, \", (, ), {, and }
 * @c: parameter as input character
 * Return: 0 for false 1 for true.
 */

int sep_finder(char c)
{
	int i = 0;
	char sep[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}




/**
 * cap_string - This changes the first letter in all words of into Uppercase.
 * @str: parameteras input string
 * Return: A pointer to the resulting string
 */

char *cap_string(char *str)
{
	char *tmp = str;
	int i = 0;

	while (tmp[i] != '\0')
	{
		if (i == 0 && (tmp[i] >= 'a' && tmp[i] <= 'z'))
			tmp[i] -= ('a' - 'A');

		if (sep_finder(tmp[i]) && (tmp[i + 1] >= 'a' && tmp[i + 1] <= 'z'))
			tmp[i + 1] -= ('a' - 'A');
		i++;
	}
	return (str);
}
