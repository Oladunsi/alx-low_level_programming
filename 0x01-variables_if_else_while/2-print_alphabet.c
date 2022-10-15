#include <stdio.h>
#include <ctype.h>

/**
* main - program that prints the alphabet in lowercase, followed by a new line
* Can only use the putchar
* Return: 0
*/


int main(void)
{
char l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
