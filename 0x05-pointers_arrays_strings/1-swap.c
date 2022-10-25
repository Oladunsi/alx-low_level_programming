#include "main.h"

/**
 * swap_int - swaps the values in the paramter locations
 * @a: parameter pointer variable value to be swapped
 * @b: parameter pointer variable value to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;


}


