#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int add = 0, count = 0;
	va_list nums;

	if (n <= 0)
		return (0);

	va_start(nums, n);
	for (; count < n; count++)
		add += va_arg(nums, int);
	va_end(nums);
	return (add);
}
