#include "main.h"

/**
 * _str_reverse - a function that does a string reversal,
 * @s: An input string to printing
 *
 * Return: Char
 */

char _str_reverse(char *s)
{
	char tmp
	
	if (*s)
	{

		tmp += _str_reverse(s + 1);
	}
 	return (tmp);
}

int is_palindrome(char *s)
{

}
