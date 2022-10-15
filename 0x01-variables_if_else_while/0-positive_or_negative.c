#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* checks if ramdomly generated is less than zero then prints negative
* checks if rand No. == zero then prints zero
* checks if rand No. > zero then prints positive
* Returns:  0 (Success) when no error
*/

int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if  (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}	
return (0);
}
