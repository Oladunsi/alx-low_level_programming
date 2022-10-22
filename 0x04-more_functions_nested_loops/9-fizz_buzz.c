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
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
		}
	printf("\n");
	return (0);
}
