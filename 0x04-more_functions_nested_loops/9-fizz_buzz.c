#include <stdio.h>

/**
* main - prints fizz: 3 or buzz: 5 and fizzbuzz: 15
*
* Return: 0 when successful
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
		{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
		}
	return (0);
}
