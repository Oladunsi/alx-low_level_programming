#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char hexdigit;
char hexchar;

hexdigit = '0';
hexchar = 'a';
while (hexdigit <= '9')
{
putchar(hexdigit);
hexdigit += 1;
}
while (hexchar <= 'f')
{
putchar(hexchar);
hexchar += 1;
}
putchar('\n');
return (0);
}
