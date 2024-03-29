#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar("Error");
		_putchar("\n")
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	_putchar("%d", result);
	_putchar("\n")
	return (0);
}
