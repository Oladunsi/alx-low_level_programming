#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 *
 * Return: returns pointer to c position
 */

char *_strchr(char *s, char c)
{
	int ind = 0;

	while (s[ind] != '\0')
	{
		if (s[ind] == c)
			return (s + ind);
		s++;
	}
	if (s[ind] == c)
		return (s + ind);
	return ('\0');
}
