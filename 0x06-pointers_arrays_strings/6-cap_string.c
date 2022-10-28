#include "main.h"

/**
 * _string_toupper - a function that changes a string into Uppercase.
 * @str: an input string
 *
 * Return: A pointer to the resulting string
 */

char *string_toupper(char *str)
{
	char *tmp = str;
	
	while (*tmp++ != '\0')
	{
		if (*tmp >= 'a' && *tmp <= 'z')
			*tmp -= ('a' - 'A');
	}
	return (str);
}
