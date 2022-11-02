#include "main.h"
#include <stdio.h>

/**
* _strpbrk - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 *
 * Return: returns pointer to c position
 */

char  *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
