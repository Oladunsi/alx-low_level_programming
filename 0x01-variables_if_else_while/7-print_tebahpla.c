#include <stdio.h>


/**
* main - program that prints the alphabet lowercase in reverse,
* Can only use putchar
* Return: 0
*/

int main(void)
{
char l;

l = 'z';
while (l >= 'a')
{
putchar(l);
l -= 1;
}
putchar('\n');
return (0);
}
