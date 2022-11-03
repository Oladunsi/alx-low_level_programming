#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @n: An input number
 *
 * Return: Integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
