#include "main.h"

/**
* _strlen_recursion - a function that returns the length of a string.
* @s: a char input of letters
*
* Return: An int length of a string
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count += 1;
		return (count + _strlen_recursion(s + 1));
	}
	return (0);
}
