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
	
	if (*s == '\0')
	{
		return (count);
	}
	count++;
	_strlen_recursion(s);
}
