#include "main.h"

/**
 * _pow_recursion - a function that returns the factorial of a number.
 * @x: An input number
 * @y: numbers x multiple
 *
 * Return: Integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
