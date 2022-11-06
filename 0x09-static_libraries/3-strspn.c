#include "main.h"


/**
* _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 *
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				count++;
				break;
			}
			else if (accept[ind + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
